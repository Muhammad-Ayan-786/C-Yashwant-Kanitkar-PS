/*
[C] Evaluate the following expressions and show their hierarchy.
(a) g = big / 2 + big * 4 / big - big + abc / 3 ;
(abc = 2.5, big = 2, assume g to be a float)

(b) on = ink * act / 2 + 3 / 2 * act + 2 + tig ;
(ink = 4, act = 1, tig = 3.2, assume on to be an int)

(c) s = qui * add / 4 - 6 / 2 + 2 / 3 * 6 / god ;
(qui = 4, add = 2, god = 2, assume s to be an int)

(d) s = 1 / 3 * a / 4 - 6 / 2 + 2 / 3 * 6 / g ;
(a = 4, g = 3, assume s to be an int)


<--------- ANSWER --------->

(a) g = big / 2 + big * 4 / big - big + abc / 3 ;
(abc = 2.5, big = 2, assume g to be a float)

g = 2 / 2 + 2 * 4 / 2 - 2 + 2.5 / 3 ;
g = 1 + 8 / 2 - 2 + 0,83 ;
g = 1 + 4 - 2 + 0,83 ;
g = 5 - 2 + 0,83 ;
g = 3 + 0,83 ; 
g = 3,83 ;


(b) on = ink * act / 2 + 3 / 2 * act + 2 + tig ;
(ink = 4, act = 1, tig = 3.2, assume on to be an int)

on = 4 * 1 / 2 + 3 / 2 * 1 + 2 + 3.2 ;
on = 4 / 2 + 1 * 1 + 2 + 3.2 ;
on = 2 + 1 + 2 + 3.2 ;
on = 3 + 2 + 3.2 ;
on = 5 + 3.2 ;
on = 8 ;


(c) s = qui * add / 4 - 6 / 2 + 2 / 3 * 6 / god ;
(qui = 4, add = 2, god = 2, assume s to be an int)

s = 4 * 2 / 4 - 6 / 2 + 2 / 3 * 6 / 2 ;
s = 8 / 4 - 3 + 0 * 12 ;
s = 2 - 3 + 0 ;
s = - 1 + 0 ;
s = - 1 ;


(d) s = 1 / 3 * a / 4 - 6 / 2 + 2 / 3 * 6 / g ;
(a = 4, g = 3, assume s to be an int)

s = 1 / 3 * 4 / 4 - 6 / 2 + 2 / 3 * 6 / 3 ;
s = 0 * 1 - 3 + 0 * 2 ;
s = 0 - 3 + 0 ;
s = - 3 + 0 ;
s = - 3 ;

*/