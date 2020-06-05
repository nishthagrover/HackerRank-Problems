# link to the Problem Statement: https://www.hackerrank.com/challenges/time-conversion/problem

# solution

#!/bin/python3

import os
import sys

#
# Complete the timeConversion function below.
#
def timeConversion(s):
    
    time = s[:-2].split(":")
    indicator = s[-2:]
    
    if indicator == 'PM' and time[0]!="12": 
        time[0]=str(int(time[0])+12)
        
    
    elif indicator == 'AM' and time[0]=="12": 
        time[0]='00'
    
    _24hourtime =  ":".join(time)
    return _24hourtime    

if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    f.write(result + '\n')

    f.close()
