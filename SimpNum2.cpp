#include<iostream>
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
using namespace std;
int main(){
	long long int m,i=0;string a,b;
	while(i<100){
		m=i-41;
		
		((m)%3==0)?a="Yes":a="No";
		b=sade(m);
		if(a!=b)cout<<i<<" "<<a<<" "<<b<<endl;
		
		i++;
	}
	return 0;
}