# Link to the Problem Statement: https://www.hackerrank.com/challenges/staircase/problem

# Solution

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the staircase function below.
def staircase(n):
    count = 0
    for i in range(n,0,-1):
        count +=1
        s = " "*(i-1)
        print(s, end ="")
        s = ("#")*count
        print(s)



if __name__ == '__main__':
    n = int(input())

    staircase(n)
