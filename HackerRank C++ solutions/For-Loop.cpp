// link to the problem statement: https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem
// solution

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    // Complete the code.
    int a,b,i;
    cin>>a;
    cin>>b;

    string arr[9]={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (b < 10)
    {
        for (i = 0; i<b; i++)
        {
            cout<< arr[i]<< endl;        
        }

    }
    
    else{
    // for number less than 10
        for (i=a-1; i<9; i++)
        {
            cout<< arr[i]<< endl;        

        }
        // for number >= 10
        for (i = 10; i<=b; i++)
        {
            
            if(i%2==0)
            {
                cout<<"even"<<endl;
            }
            else
            {
                cout<<"odd"<<endl;
            }
        }
    }
    
    return 0;
}
