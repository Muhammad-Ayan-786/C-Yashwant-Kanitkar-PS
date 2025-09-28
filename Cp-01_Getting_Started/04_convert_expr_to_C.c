/*
[E] Convert the following equations into corresponding C
statements. 

         8.8 (a + b) 2 / c - 0.5 + 2a / (q + r)
a)  Z = ---------------------------------------
                (a + b) * (1 / m )


         - b + ( b * b ) + 24ac
b)  X = --------------------------
                    2a


           2v + 6.22 (c + d)
c)  R = -----------------------
                g + v


           7.7b ( xy + a ) / c - 0.8 + 2b
d)  A = -------------------------------------
                ( x + a ) (1 / y )

*/

#include<stdio.h>

int main() {
    int a, b, c, d, g, m, q, r, v, x, y;

    float z = ((8.8 * (a + b)) * 2 / c - 0.5 + (2 * a) / (q + r)) / ((a + b) * (1.0 / m));

    float x = (- b + (b * b) + (24 * a * c)) / (2 * a);

    float r = ((2 * v) + 6.22 * (c + d)) / (g + v);

    float a = ((7.7 * b) * ((x * y) + a) / c - 0.8 + (2 * b)) / ((x + a) * (1.0 / y)) ;

    return 0;
}