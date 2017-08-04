#include<iostream>
#include<math.h>
using namespace std;

int main()
{

int n;
cout<<"enter number of days:"<<endl;
cin>>n;
float arr[n-1];
char brr[n][n];
int i,k=0;
for(int i=0; i<n; i++)
	cin>>arr[i];
for(int i=0; i<n+1; i++)
	{
	    for(int j=0; j<n+1; j++)
	{
	    
		brr[i][j]=' ';
}
}
for(int i=1; i<n+1; i++)
{
k=floor(arr[i-1]);
brr[i][k]='o';
}
for(int j=1; j<n+1; j++)
{
    brr[n][j]='_';
}
for(int i=0; i<n+1; i++)
{
    brr[i][0]='|';
}
brr[n+1][0]='@';

for(int i=0; i<n+1; i++)
	{
	    for(int j=0; j<n+1; j++)
		{
		cout<<brr[i][j];
		}
cout<<endl;
	    
	}

return 0;
}