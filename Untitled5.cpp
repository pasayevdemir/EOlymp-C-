#include<iostream>
using namespace std;
int qaytar(int a){
	if(a>4)return 8;
	else if(a>2)return 4;
	else if(a>1)return 2;
	else return 1;
}
int main(){
	int a,b,sz;
	bool y9=false,yEded=false;
	string str;
	getline(cin,str);
	sz=str.size();
	int m[sz+1];
	for(int i=0;i<sz;i++){//45231
		a=int(str[i])-48;
		if(a!=9 && yEded==false){
			b=qaytar(a);
			if(a!=b){
				m[i]=b;
				yEded=true;
			}
			else m[i]=a;
		}
		else {
			m[i]=1;
		}
		cout<<m[i];
	}
}