// Link to the complete Problem Statement: https://www.hackerrank.com/challenges/c-tutorial-strings/problem

//Solution

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string x, y;
    cin>>x>>y;

    int xlen = x.size();
    int ylen = y.size();

    cout<<xlen<<" "<<ylen<<endl;
    cout<<x<<y<<endl;

    char temp = x[0];
    x[0] = y[0];
    y[0] = temp;

    cout<<x<<" "<<y<<endl;

  
    return 0;
}
