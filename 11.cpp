#include<iostream>
using namespace std;
int main() //For an array of real numbers, find the fragment [a, b] so that this segment contains all the values in the array
{
	int n;
	cin>>n; //the number of elements
	float s[n];
	for(int i=0;i<n;i++)
	{
		cout<<"["<<i<<"] = ";
		cin>>s[i];
	}
	float min=s[0],max=min; //the smallest and biggest element in the array
	for(int i=0;i<n;i++)
	{
		if(s[i]<min) min=s[i];
		if(s[i]>max) max=s[i];
	}
	cout<<"["<<(int)(min-1)<<","<<(int)(max+1)<<"]";
}
