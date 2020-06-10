# Link to the complete Probleme Statement: https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem        

# Solution

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the breakingRecords function below.
def breakingRecords(scores):
    low, high = scores[0], scores[0]
    hc, lc =0, 0

    for i in scores:
        if i > high:
            high = i
            hc += 1
        elif i < low:
            low = i
            lc += 1
   
    return (hc, lc)



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    scores = list(map(int, input().rstrip().split()))

    result = breakingRecords(scores)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
