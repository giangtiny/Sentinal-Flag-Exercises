#include<iostream>
using namespace std;
int main() //find the second-biggest element in a matrix
{
	int m,n; //the size of the matrix
	float max1,max2; // the biggest and second-biggest element in the matrix
	cin>>m>>n;
	float s[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"["<<i<<"]["<<j<<"] = ";
			cin>>s[i][j];
			if(i==0 && j==0)
			{
				max1=s[i][j];
				max2=max1;
			}
			if(s[i][j]>max1)
			{
				max2=max1;
				max1=s[i][j];
			}
			if(s[i][j]>max2 && s[i][j]<max1) max2 =s[i][j];
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
	cout<<max2;
}
