# Link to the problem statement: https://www.hackerrank.com/challenges/plus-minus/problem

# Solution

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the plusMinus function below.
def plusMinus(arr):
    positive, negative, zero =0,0,0

    for i in arr:
        if i>0:
            positive += 1
        elif i<0:
            negative += 1
        else:
            zero += 1
    positive /=len(arr)
    negative /=len(arr)
    zero /=len(arr)

    print('%.6f'%positive, '%.6f'%negative, '%.6f'%zero, sep ="\n")
if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
