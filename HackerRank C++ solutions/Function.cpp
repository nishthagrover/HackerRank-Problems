//Link to the problem statement: https://www.hackerrank.com/challenges/c-tutorial-functions/problem

// Solution

#include <algorithm>
#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    int x = max(a,b);
    int y = max(c,d);
    int z = max(x,y);
    
    return z;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
