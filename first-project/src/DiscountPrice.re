let str = "door" ++ "bell";

let qty = 7;

let price = 14.50

let discount = (qty  < 10) ?  0.05 : 0.10;

let total = float_of_int(qty) *. price;

let afterDiscount = total *. (1.0 -. discount);

Js.log2("Price before Discount: $", total);
Js.log2("Price after Discount: $", afterDiscount);

/* concat discount */
Js.log("concat values");
Js.log("Price after Discount: $" ++ string_of_float(total) ++ ".");
Js.log("Price after Discount: $" ++ string_of_float(afterDiscount) ++ ".");
