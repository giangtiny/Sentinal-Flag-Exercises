#include<iostream>
using namespace std;
int main() //find the last even element in an array, if the array doesn't has any even element return -1
{
	int n;
	cin>>n; //read the number of elements
	int s[n];
	for(int i=0;i<n;i++)
	{
		cout<<"["<<i<<"] = ";
		cin>>s[i];
	}
	int count=0;
	for(int i=n-1;i>=0;i--)
	{
		if(s[i]%2==0 && s[i]!=0)
		{
			cout<<s[i];
			count++;
			break;			
		} 
		
	}
	if(count==0) cout<<-1;
}
