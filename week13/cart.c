#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 20
#define MAX_STRING 100
#define SKU_LENGTH 10
#define PRINTABLE_DESC_LENGTH 20
#define MAX_COUPON_SKUS 5
#define MAX_COUPONS 5

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
    float discount;
    char description[MAX_STRING];
    char skus[MAX_COUPON_SKUS][SKU_LENGTH];
    int sku_count;
} Coupon;

typedef struct {
    char store_name[MAX_STRING];
    int item_count;
    Item items[MAX_ITEMS];
    int coupon_count;
    Coupon coupons[MAX_COUPONS];
} Cart;

int main() {

    Item mouse = { "MO9442593", "Wireless Scrolling Mouse", LOGITECH, 9.99 };
    Item keyboard = { "KO3394407", "USB Keyboard", LOGITECH, 29.97 };
    Item hdmi = { "C88430743", "HDMI Cable", LOGITECH, 9.99 };
    Item usb = { "C88430884", "6\' USB 2.0 Cable", LOGITECH, 9.99 };

    Coupon mice_10_pct_off = { 0.1, "10% Off Mice", {"MO9442593"}, 1 };
    Coupon cables_50_pct_off = { 0.5, "50% Off All Cables", {"C88430743", "C88430884"}, 2 };

    Cart cart = {
        .store_name = "Eagle Electronics",
        .item_count = 4,
        .items = { mouse, keyboard, hdmi, usb },
        .coupon_count = 2,
        .coupons = { mice_10_pct_off, cables_50_pct_off }
    };

    printf("%-10s  %-20s  %8s\n", "SKU", "Description", "Price");
    printf("%10s  %20s  %8s\n", "----------", "--------------------", "--------");

    float cart_total = 0;

    for(int i=0; i<cart.item_count; i++) {
        char desc[PRINTABLE_DESC_LENGTH] = "";

        // make sure the description fits on the receipt
        if(strlen(cart.items[i].description) > PRINTABLE_DESC_LENGTH) {
            strncpy(desc, cart.items[i].description, PRINTABLE_DESC_LENGTH-4);
            strcat(desc, "...");
        } else {
            strcpy(desc, cart.items[i].description);
        }

        // print the line item and accumulate total cart price
        printf("%-10s  %-20s   $%6.2f\n", cart.items[i].sku, desc, cart.items[i].unit_price);
        cart_total += cart.items[i].unit_price;


        // now apply coupons if the items qualifies
        for(int j=0; j<cart.coupon_count; j++) {
            for(int k=0; k<cart.coupons[j].sku_count; k++) {
                if(strcmp(cart.items[i].sku, cart.coupons[j].skus[k]) == 0) {
                    float discount = cart.items[i].unit_price * cart.coupons[j].discount;
                    printf("%-10s  %-20s  -$%6.2f\n", "COUPON", cart.coupons[j].description, discount);
                    cart_total -= discount;
                }
            }
        }
    }

    printf("%10s  %20s  %8s\n", "----------", "--------------------", "--------");
    printf("%-10s  %20s   $%6.2f\n", "TOTAL", "", cart_total);
}

