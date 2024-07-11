#include<iostream>
#include<string.h>
#include<math.h>
long long rcem(char a[100000],long y)
{
	long long cem=0;
	for(int i=0;i<y;i++)
	cem+=(int(a[i])-48)*pow(10,y-1-i);
	return cem;
}
using namespace std;
int main()
{
	int i,c,qiymet=0,qaliq=0,s;
	char str[100],a[100];
	gets(str);
	gets(a);
	c=strlen(str);
	s=strlen(a);
	if(c>=s)
	for(i=0;i<c;i++)
	{
		if(qiymet<=rcem(a,s))
		{
			qiymet+=(int(str[i])-48)*pow(10,s-i-1);
			cout<<qiymet<<endl;
		}
	}
	//cout<<rcem(a,s);
}
