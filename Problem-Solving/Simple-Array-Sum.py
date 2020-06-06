# Link to the complete problem statement: https://www.hackerrank.com/challenges/simple-array-sum/problem

#Solution

#!/bin/python3

import os
import sys
import random


#
# Complete the simpleArraySum function below.
#
def simpleArraySum(ar):
    s = 0
    for i in ar:
        s += i
    return s
    
    sum = 0
    for i in range(len(ar)):
        if len (ar) and ar[i] < 1001 and len (ar) and ar[i]>0:
            sum = sum + ar[i]
        else:
            return 0
    return sum

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    ar_count = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = simpleArraySum(ar)

    fptr.write(str(result) + '\n')

    fptr.close()

