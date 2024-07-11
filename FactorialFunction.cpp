#include<iostream>
using namespace std;
long long int fkt(long long int a)
{
	long long int i=1,fkt=1;
	for(i=1;i<=a;i++)
	fkt*=i;
	return fkt;
}
int main()
{
	long long int n,k;
	cin>>n>>k;
	cout<<(fkt(n)/(fkt(n-k)*fkt(k)));
}
