#include<iostream>
using namespace std;
int main() //find the biggest element in an array
{
	int n;
	cin>>n; //read the number of elements
	float s[n];
	for(int i=0;i<n;i++)
	{
		cout<<"["<<i<<"] = ";
		cin>>s[i];
	}
	float max=s[0]; //biggest element
	for(int i=0;i<n;i++)
	{
		if(s[i]>max) max=s[i];
	}
	cout<<"The biggest element: "<<max;
}
