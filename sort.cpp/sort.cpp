#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int size;
	vector<long long int> v;
	cout<<"Please enter the size of the array:- "<<endl;
	cin>>size;
	cout<<"Please enter the numbers one by one:-"<<endl;  
	for(long long int i=0;i<size;i++)
	{
         long long int value;
         cin>>value;
         v.push_back(value);
	}
	sort(v.begin(),v.end());
    cout<<"Array in sorted order is:- ";
	for(long long int i=0;i<size;i++)
	{
         cout<<v[i]<<" ";
	}
	cout<<endl;
	return 0;
}