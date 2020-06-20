#include<iostream>
using namespace std;
int perfectNum(int n)
{
	int i=1;
	int sum=0;
	while(i<n)
	{
		if(n%i==0) sum+=i;
		i++;
	}
	if(n==0) return 0;
	if(sum==n) return 1;
	return 0;
}
int main() //find the largest/second-largest/smallest/second-smallest perfect number of the matrix
{
	int m,n; //the size of the matrix
	cin>>m>>n;
	int s[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"["<<i<<"]["<<j<<"] = ";
			cin>>s[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<s[i][j]<<" ";
		}
		cout<<endl;
	}
	int count=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(perfectNum(s[i][j])==1){
				count++;
			} 
		}
	}
	if(count==0)
	{
		cout<<"There are no perfect numbers in the matrix.";
	    return 0;
	}
	int max1=-9999999999,max2=-9999999999,min1=9999999999,min2=9999999999;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(s[i][j]>max1 && perfectNum(s[i][j])==1) max1=s[i][j];
			if(s[i][j]<min1 && perfectNum(s[i][j])==1) min1=s[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(s[i][j]>max2 && s[i][j]<max1 && perfectNum(s[i][j])==1) max2=s[i][j];
			if(s[i][j]<min2 && s[i][j]>min1 && perfectNum(s[i][j])==1) min2=s[i][j];
		}
	}
	cout<<"Largest value: "<<max1<<endl;
	cout<<"Second-largest value: "<<max2<<endl;
	cout<<"Smallest value: "<<min1<<endl;
	cout<<"Second-smallest value: "<<min2<<endl;
}
