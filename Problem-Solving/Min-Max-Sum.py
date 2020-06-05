# Link to the complete Problem Statement: https://www.hackerrank.com/challenges/mini-max-sum/problem

# Solution

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the miniMaxSum function below.
def miniMaxSum(arr):
    arr = sorted(arr)
    min = sum(arr[:-1])
    max = sum(arr[1:])
    print(min,max)

                  
if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
