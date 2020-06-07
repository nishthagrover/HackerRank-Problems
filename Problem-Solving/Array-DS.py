# Link to complete Problem Statement: https://www.hackerrank.com/challenges/arrays-ds/problem

#Solution

#!/bin/python3

import math
import os
import random
import re
import sys


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr_count = int(input())

    arr = list(map(int, input().rstrip().split()))

    res = arr[::-1] #reverse a list using slicing

    fptr.write(' '.join(map(str, res)))
    fptr.write('\n')

    fptr.close()
