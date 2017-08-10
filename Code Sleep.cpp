#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{

int n;
cout<<"enter number of days:"<<endl;
cin>>n;
float arr[n];
char brr[n+1][n+1];
int i,j,k=0;
for( i=0; i<n; i++)
	cin>>arr[i];
for(i=0; i<n+1; i++)
	{
	    for( j=0; j<n+1; j++)
	{
	    
		brr[i][j]=' ';
}
}
for( i=0; i<n; i++)
{
k=ceil(arr[i]);
cout<<endl<<k<<" "<<i<<endl;
brr[k][i]='o';
}
for(i=0; i<n+1; i++)
{
    brr[n][i]='_';
}
for(int i=0; i<n+1; i++)
{
    brr[i][0]='|';
}
brr[n][0]='@';

for(int i=0; i<n+1; i++)
	{
	    for(int j=0; j<n+1; j++)
		{
		cout<<brr[i][j];
		}
cout<<endl;
	    
	}
getch();
return 0;
}
