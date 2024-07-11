#include<iostream>
using namespace std;
int main()
{
	int n,m,a,b,ac,bc,a1,a2,a3;
	cin>>n>>m>>a>>b;
		ac=(n/m)*a;//tam
		bc=(n-((n/m)*m))*b;
		a1=ac+bc+n;
		a2=(n/m+1)*a+n;
		a3=n*b+n;
		if(a1>=a2){
			if(a2>=a3)cout<<a3;
			else cout<<a2;
		}
		else if(a1<=a2){
			if(a1>=a3)cout<<a3;
			else cout<<a1;
		}
}