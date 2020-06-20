#include<iostream>
using namespace std;
int main() //find the largest value on the row and also the smallest on the column
{
	int m,n; //the size of the matrix
	cin>>m>>n;
	float s[m][n];
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
		int pos;
		float max=s[i][0];
		for(int j=0;j<n;j++) //find the largest value on a row
		{
			if(s[i][j]>max) max=s[i][j];
			pos=j;
		}
		float min=s[i][pos];
		for(int k=0;k<m;k++) //check the value has just been finded is the smallest value on the corresponding column  
		{
			if(s[k][pos]<min) min=s[k][pos];
		}
		if(min==max)
		{
			cout<<max<<endl;
			count++;
		} 
	}
	if(count==0) cout<<"Can't find solutions";
}
