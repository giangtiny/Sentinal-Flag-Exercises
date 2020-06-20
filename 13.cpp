#include<iostream>
using namespace std;
int main() //For an array of integers, find the smallest/largest value that is not qual zero within the given fragment[x, y]. If there is no value, returns 0
{
	int n;
	cin>>n; //the number of elements
	int s[n];
	for(int i=0;i<n;i++)
	{
		cout<<"["<<i<<"] = ";
		cin>>s[i];
	}
	int min,max; //the smallest and biggest element in the array
	int x,y; //the value in the fragment [x,y]
	while(x>y)
	{
		cin>>x>>y;
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]>=x && s[i]<=y && s[i]!=0)
		{
			max=s[i];
			min=max;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(s[i]>=x && s[i]<=y && s[i]<=min && s[i]!=0)
		{
			min=s[i];
			count++;
		} 
		if(s[i]>=x && s[i]<=y && s[i]>=max && s[i]!=0)
		{
			max=s[i];
			count++;
		} 
	}
	if(count==0)
	{
		cout<<0;
	    return 0;
	} 
	cout<<"MIN = "<<min<<endl;
	cout<<"MAX = "<<max<<endl;
}
