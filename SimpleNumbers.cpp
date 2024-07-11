#include<iostream>
#include<math.h>
using namespace std;
string sade(long long int n)
{
	long long int i,s=0,a;
	a=n%10;
	if(a==4||a==6||a==0||a==8||(a==2||a==5)&&n>9)return "No";
	else{
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			s++;
			return "No";
			break;
		}
		if(n>100000 && i>100000)
		{
			break;
		}
	}
	if(s==0)return "Yes";
	}
}
int main() {
	long long int i,n,sax;
	string a,b;
	for(i=0;i<10000/*00000000000000*/;i++){
		n=i;
		sax=n/6;
		(n==(sax+1)*6-1||(n==(sax)*6+1)||n==2||n==3)?a="Yes":a="No";
		b=sade(i);
		if(a!=b){
			cout<<i<<" "<<a<<" "<<b<<endl;
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}