#Link to the problem statement: https://www.hackerrank.com/challenges/diagonal-difference/problem

#solution 

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'diagonalDifference' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY arr as parameter.
#

def diagonalDifference(arr):

    d1, d2 =0,0
    for i in range(len(arr)):
        d1 += arr[i][i]
        d2 += arr[i][-(i+1)]
        
    diff = abs(d1-d2)
    return diff
        
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    result = diagonalDifference(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
