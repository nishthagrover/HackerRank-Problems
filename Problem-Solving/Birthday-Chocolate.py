# Link to complete Probleme Statement: https://www.hackerrank.com/challenges/the-birthday-bar/problem

# Solution 

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the birthday function below.
def birthday(n, s, d, m):
    count = 0
    for i in range (n):
        sum = 0
        
        for j in range (m):
            if (i + j)<n:
                sum += s[i+j]
        if sum == d:
            count += 1       

    return count
            



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    s = list(map(int, input().rstrip().split()))

    dm = input().rstrip().split()

    d = int(dm[0])

    m = int(dm[1])

    result = birthday(n, s, d, m)

    fptr.write(str(result) + '\n')

    fptr.close()
