# Link to the Problem Statement: https://www.hackerrank.com/challenges/birthday-cake-candles/problem

# Solution 

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the birthdayCakeCandles function below.
def birthdayCakeCandles(ar):
    sorted_ar = sorted(ar, reverse =True)
    count = ar.count(sorted_ar[0])
    return count


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    ar_count = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = birthdayCakeCandles(ar)

    fptr.write(str(result) + '\n')

    fptr.close()
