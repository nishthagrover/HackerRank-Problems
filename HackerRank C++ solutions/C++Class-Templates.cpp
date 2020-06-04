// Link to the complete Problem Statement: https://www.hackerrank.com/challenges/c-class-templates/problem

//Solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
#define concatenate add

template <class T> class AddElements 
{
    public:
    T element1;
   
    AddElements (T arg) 
    {
        element1=arg;
    }

    T add (T element2) 
    {
        return element1+element2;
    }
};
// this block of code speeds up the cin cout process and 
//solves the time out error of the test cases
//the locked part of the code is not very efficient wiz. making 
//a few test cases take longer time than required

int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int static r = start_up();

int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
