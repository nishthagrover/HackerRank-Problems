// Link to the complete problem statement: https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem
// Solution

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string arr[9] = {"one","two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (n<10)
        cout<<arr[n-1]<<endl;
    else
        cout<<"Greater than 9"<< endl;

    return 0;
}
