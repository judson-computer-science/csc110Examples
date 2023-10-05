# Shopping Cart - Part II
Continue building on your shopping cart application that you started last class.  If you were unable to get a progam that can print a receipt, use the implementation provided in `cart.c` as your starting point.

## Instructions
1. add three more items to your cart using unique SKUs.
2. wrap your print statement in a loop and modify it so that it prints all items in your cart
3. use a typedef statement to create a `Coupon` structure with the following properties:
   - `discount`: the discount provided by the coupon as a percentage (for example 0.1 for a "10% off" coupon)
   - `description`: a description of the coupon (for example the text "10% off")
   - `skus`: an array of SKUs this coupon applies to
   - `sku_count`: the number of SKUs in the previous array
4. modify your Cart structure to include an array of coupons and a coupon count
5. create 2 Coupons and add them to your cart (before printing the receipt)
   - one of the coupons should be applicable to 2 of your items
6. modify your receipt printing logic to evaluate the coupon list against each item after it is printed. For every coupon that applies, print a discount line on the receipt.
   - for the discount line, the SKU field should contain the text "COUPON", the `Description` contains the Coupon's description and the Price field contains the calculated discount amount (see below)
7. keep a running total of your cart price and print it at the end of your receipt
8. prettify your receipt by adding a line the width of each column before an after the item list (see below)

````
SKU         Description              Price
----------  --------------------  --------
MO9442593   Wireless Scroll...     $  9.99
COUPON      10% Off Mice          -$  0.99
KO3394407   USB Keyboard           $ 29.97
C88430743   HDMI Cable             $  9.99
COUPON      50% All Cables        -$  4.99
C88430884   6' USB 2.0 Cable       $  9.99
COUPON      50% All Cables        -$  4.99
----------  --------------------  --------
TOTAL                              $ 48.97
````

## Bonus
1. Create a CouponType enum with the following values:
   - PERCENT_OFF
   - DOLLAR_OFF
2. Modify your discount logic to treat the Coupon's `discount` field as either a dollar discount or a percent discount based on the coupon type
3. Modify your printing logic to print "$ OFF" or "% OFF" in the SKU field based on the coupon type

