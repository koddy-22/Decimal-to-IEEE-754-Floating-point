# Decimal-to-IEEE-754-Floating-point
a program to convert an int to IEEE 754 floating point binary

Let's understand what this program does, the IEEE 754 floating point formation
is A | B B B B B B B B | C C C C C C C C C C C C C C

say the decimal number we're having is "2012.52"

# First operation:
extract the 0&1 binary from the non-decimal part by division
2012 / 2 = 0
1006 / 2 = 0
503 / 2  = 0
251 / 2  = 1
125 / 2  = 1
62 / 2   = 0
31 / 2   = 1
15 2     = 1
7 / 2    = 1
3 / 2    = 1
1 / 2    = 1

so what we got now is 0 0 0 1 1 0 1 1 1 1 1


# Second operation:
find the decimal part's binary by multiplication
0.52 * 2 = 1.04 = 1
0.04 * 2 = 0.08 = 0
0.08 * 2 = 0.16 = 0
0.16 * 2 = 0.32 = 0
0.32 * 2 = 0.64 = 0
0.64 * 2 = 1.28 = 1
0.28 * 2 = 0.56 = 0

