#include<iostream>
using namespace std;
int main() //For an array of real numbers, find the value of x so that the fragment [-x, x] contains all the values in the array
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
	int x; //the value in the fragment [-x,x]
	for(int i=0;i<n;i++)
	{
		if(s[i]<min) min=s[i];
		if(s[i]>max) max=s[i];
	}
	if(max<0) x=(-1*min)+1;
	else if(min>0) x=max+1;
	else
	{
		if((-1*min)>max) x=(-1*min)+1;
		else x=max+1;
	} 
	cout<<max<<" "<<min;
	cout<<"["<<-x<<","<<x<<"]";
}
