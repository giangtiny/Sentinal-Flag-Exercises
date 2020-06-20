#include<iostream>
using namespace std;
int main() //find the position of the smallest element of an array
{
	int n;
	cin>>n; //read the number of elements
	float s[n];
	for(int i=0;i<n;i++)
	{
		cout<<"["<<i<<"] = ";
		cin>>s[i];
	}
	float min=s[0]; //biggest element
	int pos; //the position of the smallest element
	for(int i=0;i<n;i++)
	{
		if(s[i]<min)
		{
			min=s[i];
			pos=i;
		}
	}
	cout<<pos;
}
