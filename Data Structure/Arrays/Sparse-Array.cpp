// Link to the complete problem statement: https://www.hackerrank.com/challenges/sparse-arrays/problem
// Solution

#include <bits/stdc++.h>
#include <string>

using namespace std;


int main()
{
    int n, m;
    cin>>n;
    string strings[n];
    
    for (int i =0; i<n; i++)
    {
    	cin>>strings[i];
	}
	
	cin>>m;
    string queries[m];
    
    for (int i =0; i<m; i++)
    {
    	cin>>queries[i];
	}
	
	int result[m];
	for (int i =0; i<m; i++)
    {
    	result[i] = 0;
	}
	
	for (int i =0; i<m; i++)
    {
    	for (int j =0; j<n; j++)
    	{
            if (queries[i] == strings[j])
                result[i]++ ;
        }
	}
	for (int i =0; i<m; i++)
    {
    	cout<<result[i]<<"\n";
	}    

    return 0;
}
