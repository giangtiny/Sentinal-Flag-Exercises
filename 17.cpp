#include<iostream>
using namespace std;
int main() //find the row of a matrix which contain the maximum value of the matrix
{
	int m,n; //the size of the matrix
	float max; // the biggest element in the matrix
	cin>>m>>n;
	float s[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"["<<i<<"]["<<j<<"] = ";
			cin>>s[i][j];
			if(i==0 && j==0) max=s[i][j];
			else if(s[i][j]>max) max=s[i][j];
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
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(s[i][j]==max)
			{
				cout<<i+1<<"th-row ";
				j=n;
			} 
		}
	}
}
