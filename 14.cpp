#include<iostream>
using namespace std;
int main() //Given an array of real numbers. Write a function that finds a position in the array that meets two 
           //conditions: there are two adjacent values and the value in that position is equal to the product  
		   //of two adjacent values. If the array does not exist such a value then returns -1
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
		if(i!=0 && i!=n-1)
		{
			if(s[i]==s[i-1]*s[i+1])
			{
				cout<<i;
				count++;
			}
		}
	}
	if(count==0)
	{
		cout<<-1;
		return 0;
	}
}
