// Link to the problem statement: https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem
// solution

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int x;
    char y;
    float z;
    double w;
    long l;
    scanf("%d %ld %c %f %lf", &x, &l, &y, &z, &w);
    printf("%d \n%ld \n%c \n%f \n%lf", x, l, y, z, w);
    return 0;
}
