/* Write a program that calculates wind chill. Given an air temperature T in degrees Celsius and a wind velocity V in
   kilometers per hour, the formula is:

   13.12 + (0.6215 * T) − (11.37 * V ** 0.16) + (0.3965 * T * V ** 0.16)

   Make sure you label your output
   properly. For example: */
/* At temperature 5 degrees C and wind speed 20 km/hr, */
/* the wind chill temperature is 1.0669572525115663. */

let temp = 5;

let windSpeed = 20;

let total =
  13.12 +. (0.6215 *. float_of_int(temp)) -.
  (11.37 *. float_of_int(windSpeed) ** 0.16) +.
  (0.3965 *. float_of_int(temp) *. float_of_int(windSpeed) ** 0.16);

Js.log({j|At temperature $temp degrees C and wind speed $windSpeed km/hr
  the wind chill temperature is $total.|j});
