#include<iostream>
using namespace std;
int main() //find the element which furthest from an index element in an array
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
	pos>n-1-pos?cout<<s[0]:cout<<s[n-1];
}
