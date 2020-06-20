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
int main() //find the row that has the most perfect number
{
	int m,n; //the size of the matrix
	cin>>m>>n;
	float s[m][n];
	int count=0,count1=0;
	int pos=0;
	for(int i=0;i<m;i++)
	{
		count=0;
		for(int j=0;j<n;j++)
		{
			cout<<"["<<i<<"]["<<j<<"] = ";
			cin>>s[i][j];
			if(perfectNum(s[i][j])) count++;
		}
		if(count>count1)
		{
			count1=count;
			pos=i;
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
	cout<<pos;
}
