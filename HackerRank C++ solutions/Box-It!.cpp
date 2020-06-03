//Link to the problem statement: https://www.hackerrank.com/challenges/box-it/problem

// Solution

#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
class Box
{
    //l,b,h are integers representing the dimensions of the box
    int l,b,h;

    // The class should have the following functions : 
    public:
    // Constructors: 
    // Box();
    Box()
    {
        this->l=0;
        this->b=0;
        this->h=0;

    }
    // Box(int,int,int);
    Box(int length ,int breadth,int height)
    {
        this->l=length;
        this->b=breadth;
        this->h=height;

    }
    // Box(Box);
    Box(const Box& B){
        this->l = B.l;
        this->b = B.b;
        this->h = B.h;
    }

    // int getLength(); // Return box's length
    int getLength()
    {
        return this->l;
    }

    // int getBreadth (); // Return box's breadth
    int getBreadth ()
    {
        return this->b;
    }
    // int getHeight ();  //Return box's height
    int getHeight()
    {
        return this->h;
    }
    // long long CalculateVolume(); // Return the volume of the box
    long long CalculateVolume()
    {
        long long volume;
        volume = (this->l)*(this->b)*(this->h);
        return volume;
    }

    //Overload operator < as specified
    //bool operator<(Box& b)
    friend bool operator<(Box& A,Box& B)
    {
        if ( (A.l<B.l) || 
        ((A.b < B.b) && (A.l == B.l)) || 
        ((A.h < B.h) && (A.b == B.b) && (A.l == B.l)))
            return true;
       
        return false;    
    }

    //Overload operator << as specified
    //ostream& operator<<(ostream& out, Box& B)
    friend ostream& operator<<(ostream & out, const Box& B)
    {
        out <<B.l<<" "<<B.b<<" "<<B.h;
        return out;
    }

};



void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
