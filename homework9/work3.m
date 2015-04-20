#!/usr/bin/octave
#Made by Jazy Llerena

y = [0, -0.2, 0.4, -0.6, 0.8, -1.0, -1.2, -1.4, 1.6];
z = sin(y);

Min = min(z(z<0))
Max = max(z(z>0))
SquarofPositives = sqrt(z(z>0))

