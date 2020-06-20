#include<iostream>
using namespace std;
int Prime(int n)
{
	if(n<2) return 0;
	int count=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==1) return 1;
	return 0;
}
int main() //find the row that has the most prime number
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
			if(Prime(s[i][j])) count++;
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
