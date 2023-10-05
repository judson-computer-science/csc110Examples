#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 20
#define MAX_STRING 100
#define SKU_LENGTH 10
#define PRINTABLE_DESC_LENGTH 15

typedef enum {
    APPLE,
    HP,
    LENOVO,
    LOGITECH
} Manufacturer;

typedef struct {
    char sku[SKU_LENGTH];
    char description[MAX_STRING];
    Manufacturer manufacturer;
    float unit_price;
} Item;

typedef struct {
    char store_name[MAX_STRING];
    int item_count;
    Item items[MAX_ITEMS];
} Cart;

int main() {
    Item mouse = { "MO9442593", "Wireless Scrolling Mouse", LOGITECH, 9.99 };
    Cart cart = { .item_count = 1, .items = { mouse } };


    printf("%-10s  %-20s  %8s\n", "SKU", "Description", "Price");

    char desc[PRINTABLE_DESC_LENGTH + 4];

    strncpy(desc, cart.items[0].description, PRINTABLE_DESC_LENGTH);

    if(strlen(cart.items[0].description) != strlen(desc)) {
        strcat(desc, "...");
    }

    printf("%-10s  %-20s   $%6.2f\n", mouse.sku, desc, mouse.unit_price);
}

