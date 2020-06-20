#include<iostream>
using namespace std;
int main() //find the position of the first even element in an array, if the array doesn't has any even element return -1
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
	for(int i=0;i<n;i++)
	{
		if(s[i]%2==0)
		{
			cout<<i;
			count++;
			break;
		}
	}
	if(count==0) cout<<-1;
}
