# Coding Challenge - Unions, Function Pointers & Dynamic Memory

In this challenge you will revisit the Shopping Cart application and modify it to use a union, function pointers and dynamic memory.  Starter code has been provided that produces the following output (compile it and try before modifying the code):

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

**Modify the existing implementation based on the following steps:**
1. Define a union called `CartItem` that has `Item` and `Coupon` as its members.
2. Modify the `add_coupon()` and `add_item()` functions so that they each take a `CartItem` instead of a `Coupon` or `Item` (as their second parameters).  Your modified implementation of `add_coupon()` can assume that the `CartItem` at the address provided is a `Coupon` and the `add_item()` implementation can assume that the `CartItem` at the address provided is an `Item`. The new signatures of these functions are shown below.
~~~~~
void add_item(Cart *, CartItem *);
void add_coupon(Cart *, CartItem *);
~~~~~
3. Modify your implementation of `get_cart()` so that it returns the address of a new `Cart` structure allocated using `malloc()`.  Update the code in `main()` to account for this new return type and `free()` the allocated memory at the end of the program.
4. Provide an implementation for `add_cart_item()` that takes a pointer to a `Cart`, a pointer to a `CartItem` and a pointer to a function (whose signature matches the signatures of `add_coupon()` and `add_item()`). This function should simply call whatever function is passed as its third parameter, passing its first and second parameters as input. The new function prototype should be as follows:
~~~~~
void add_cart_item(Cart *, CartItem *, void (*)(Cart *, CartItem *)); 
~~~~~
5. Modify the code in `main()` so that `add_cart_item()` is called instead of `add_coupon()` and `add_item()`. To do this, you will also need to wrap each `Coupon` and `Item` instance into a `CartItem`.
