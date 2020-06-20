#include<iostream>
using namespace std;

int perfectNum(int n) //check a number is a perfect number or not
{
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0) sum+=i;
	}
	if(sum==n && n>0) return 1;
	return 0;
}

int main() //find the position of the last perfect number in an array, if the array doesn't has any perfect number return -1
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
		if(perfectNum(s[i])==1) 
		{
			cout<<i;
			count++;
			break;
		}
	}
	if(count==0) cout<<-1;
}
