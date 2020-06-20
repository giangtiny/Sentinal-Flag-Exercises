#include<iostream>
using namespace std;
int main() //find the element which nearest from an index element in an array
{
	int n;
	cin>>n; //read the number of elements
	float s[n];
	for(int i=0;i<n;i++)
	{
		cout<<"["<<i<<"] = ";
		cin>>s[i];
	}
	float x; //index element
	cin>>x; 
	int pos; //position of index element
	for(int i=0;i<n;i++)
	{
		if(s[i]==x)
		{
			pos=i;
			break;
		} 
	}
	if(pos==0) cout<<s[1];
	else if(pos==n-1) cout<<s[n-2];
	else cout<<s[pos-1];
}
