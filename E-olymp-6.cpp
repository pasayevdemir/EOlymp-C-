#include<iostream>
using namespace std;
int main()
{
	long long int n,i,s=0,a;
	cin>>n;
	a=n%10;
	if(a==4||a==6||a==0||a==8||(a==2||a==5)&&n>9)cout<<"No";
	else{
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			s++;
			cout<<"No";
			break;
		}
		if(n>100000 && i>100000)
		{
			break;
		}
	}
	if(s==0)cout<<"Yes";
}}