#!/bin/python3

import math
import os
import random
import re
import sys

s, t = input().split()
s= int(s)
t = int(t)
a, b = input().split()
a = int(a)
b = int(b)
m,n = input().split()
m = int(m)
n = int(n)
a_positions = []
o_positions = []
apple = 0
orange = 0
a_pos = input().split()
for i in range (m):
    a_positions.append(a_pos[i])
    a_positions[i] = int(a_positions[i])
o_pos = input().split()
for i in range (n):
    o_positions.append(o_pos[i])
    o_positions[i] = int(o_positions[i])
for i in a_positions:
    if (s<=a+i<=t):
        apple+=1
for i in o_positions:
    if (s<=b+i<=t):
        orange+=1
print(apple)
print(orange)


