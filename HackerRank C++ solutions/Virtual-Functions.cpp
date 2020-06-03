// Link to complete problem statement: https://www.hackerrank.com/challenges/virtual-functions/problem

//Solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
    string name;
    int age;

    public:
    virtual void getdata()
    {
        
        cin>>name>>age;
        
    }
    virtual void putdata()
    {
        cout<<name<<" "<<age;
    }
};

class Professor : public Person
{
    int publications;
    static int id;
    int cur_id;
    public:
    Professor()
    {
        this->cur_id = ++id;
    }

    void getdata()
    {
        Person::getdata();
        cin>>publications;
        
        
    }
    void putdata()
    {
        //cout<<"\n";
        Person::putdata();
        cout<<" "<<publications<<" "<<this->cur_id<<endl;
    }

};
int Professor :: id =0;

class Student : public Person
{
    int marks[6];
    static int id;
    int cur_id;
    
    public:
    
    Student()
    {
         this->cur_id = ++id;
    }
    
    void getdata()
    {
        Person::getdata();
        for (int i =0; i<6; i++)
        {
            cin>>marks[i];
        }
                
    }
    
    void putdata()
    {
        
        int sum=0;        
        for (int i =0; i<6; i++)
        {
            sum += marks[i];
        }
        //cout<<"\n";
        Person::putdata();
        cout<<" "<<sum<<" "<<this->cur_id<<endl;;
    }

};
int Student :: id =0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
