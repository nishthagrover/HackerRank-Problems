// Link to the problem statement: https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

// Solution

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function  
    int x = *a;
    int y = *b;
    *a = x+y;
    *b = (x>y)? (x-y) : (y-x); 
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
