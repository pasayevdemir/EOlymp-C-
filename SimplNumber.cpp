#include<iostream>
using namespace std;
long long int sade(long long int n,long long int a[100])
{
	long long int i,s=0,k=0;
	for(i=2;n>0;)
	{
		if(n%i==0)
		{
			a[k]=i;
			k++;
		}
		else i++;
	}
	return k;
}
int main()
{
	int aa;
	long long int a[100];
	cin>>aa;
	sade(aa,a);
	for(int i=0;i<100;i++)
	{
		
	}
	cout<<a[0]<<endl;
}
