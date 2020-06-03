// Link to the complete Problem Statement: https://www.hackerrank.com/challenges/overload-operators/problem

// solution

//Operator Overloading

#include<iostream>

using namespace std;

class Complex
{
public:
    int a,b;
    void input(string s)
    {
        int v1=0;
        int i=0;
        while(s[i]!='+')
        {
            v1=v1*10+s[i]-'0';
            i++;
        }
        while(s[i]==' ' || s[i]=='+'||s[i]=='i')
        {
            i++;
        }
        int v2=0;
        while(i<s.length())
        {
            v2=v2*10+s[i]-'0';
            i++;
        }
        a=v1;
        b=v2;
    }
};

//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
Complex operator+ (Complex& A, Complex& B)
{   
    Complex X;
    X.a = A.a + B.a;
    X.b = A.b + B.b;
    return X;

}
//<< should print a complex number in the format "a+ib"
ostream& operator<< (ostream& out, Complex &A)
{
    if(A.b>0) 
        return out<<A.a<<"+i"<<A.b;

    else if (A.b<0)
        return out<<A.a<<"-i"<<A.b;
    
    else
        return out<<A.a;
}

int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}
