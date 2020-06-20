#include<iostream>
using namespace std;
int main() //find the first positive element in an array, if an array doesn't has any positive element return -1
{
	int n;
	cin>>n; //read the number of elements
	float s[n];
	for(int i=0;i<n;i++)
	{
		cout<<"["<<i<<"] = ";
		cin>>s[i];
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]>0)
		{
			cout<<s[i];
			count++;
			break;			
		} 
		
	}
	if(count==0) cout<<-1;
}
