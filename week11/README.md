# Coding Challenge - Pointers and Functions

In this challenge you will revisit the Shopping Cart application and modify it by breaking its logic into functions.  Starter code has been provided that produces the following output (compile it and try before modifying the code):

~~~~~
SKU         Description              Price
----------  --------------------  --------
MO9442593   Wireless Scrolli...    $  9.99
COUPON      10% Off Mice          -$  1.00
KO3394407   USB Keyboard           $ 29.97
C88430743   HDMI Cable             $  9.99
COUPON      50% Off All Cables    -$  4.99
C88430884   6' USB 2.0 Cable       $  9.99
COUPON      50% Off All Cables    -$  4.99
----------  --------------------  --------
TOTAL                              $ 48.95
~~~~~

Before starting your work, modify the definition of the `Cart` structure so that `items` becomes an array of `Item` pointers and so that `coupons` becomes an array of `Coupon` pointers.

After doing this, your job will be to implement the functions listed below.  You will not have to write a significant amount of new code.  You are just refactoring (reorganizing) the code into functions and modifying the expressions where necessary so that the overall functionality of the program is retained. After creating each function, replace the original code in main() with a call to the new function to see if it works.

~~~~~
void abbreviate(char *, const char *, int);
	This function contains the logic for abbreviating the item description on the
	receipt.  The first parameter is a string that will hold the abbreviated value.
	The second parameter is the original string, and the third parameter is the
	max number of characters that the abbreviated string should contain.

Cart create_cart(const char *);
	This function takes the store name as a parameter and returns a copy of a new
 	Cart structure. This function should also initialize the item and coupon counts to 0.

void add_item(Cart *, Item *);
	This function adds the Item pointer to the cart pointed to by the first parameter
	and increments the item count.

void add_coupon(Cart *, Coupon *);
	This function adds the Coupon pointer to the cart pointed to by the first parameter
	and increments the coupon count.

float get_discount(Item, Coupon);
	This function take a copy of an Item structre and a copy of a Coupon structure.
	If the Item's SKU is found in the Coupon's SKU list, it computes the discount
	amount and returns it.  If there is no match found, a discount of 0.0 is returned.
~~~~~

