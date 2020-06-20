#include<iostream>
using namespace std;
int main() //find the biggest negative element in a matrix
{
	int m,n; //the size of the matrix
	float max; // the biggest negative element in the matrix
	int count=0;
	cin>>m>>n;
	float s[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"["<<i<<"]["<<j<<"] = ";
			cin>>s[i][j];
			if(s[i][j]<0)
			{
				max=s[i][j];
				count++;
			} 
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(s[i][j]>max && s[i][j]<0) max=s[i][j];
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
	if(count==0)
	{
		cout<<"There are no negative elements in the matrix.";
		return 0;
	}
	cout<<max;
}
