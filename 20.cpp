#include<iostream>
using namespace std;
int main() //find the value that appears the most
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
	int cam[m*n];
	for(int i=0;i<n*m;i++)
	{
		cam[i]=0;
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cam[s[i][j]]++;
		}
	}
	int max=cam[0];
	for(int i=0;i<n*m;i++)
	{
		if(cam[i]>max) max=i;
	}
	cout<<max;
}
