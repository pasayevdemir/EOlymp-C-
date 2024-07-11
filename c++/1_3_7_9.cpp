#include<bits/stdc++.h>
using namespace std ;
int main () 
{
	int n,sum_adi=0,sum_ozu=0,m=0;
	cin>>n;
	int mas[]{1,3,7,9,27,81,243,729};
	for(int i=0;sum_adi<=n;i++)
		if(n<mas[i])m=i-1;sum_adi=mas[m];
	for(int i=0;i<n;i++){
		if(sum_adi==n)break;
		if(i!=m)
		sum_adi+=mas[i];
	}
		cout<<sum_adi;
}
