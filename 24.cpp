#include<iostream>
using namespace std;
int main() //find the row that has biggest sum of all elements in that row
{
	int m,n; //the size of the matrix
	cin>>m>>n;
	float s[m][n];
	float sum,sum1=-99999999999;
	int pos=0;
	for(int i=0;i<m;i++)
	{
		sum=0;
		for(int j=0;j<n;j++)
		{
			cout<<"["<<i<<"]["<<j<<"] = ";
			cin>>s[i][j];
			sum+=s[i][j];
		}
		if(sum>sum1)
		{
			sum1=sum;
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
