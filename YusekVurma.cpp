#include<iostream>
#include<string>
#include<vector>
using namespace std;
void reqHasil(vector<int> &send,string str1,char str2){
	int a,sax=0,elve=0;
	for(int i=str1.size()-1;i>=0;i--){
		a=((int)str1[i]-48)*((int)str2-48);
		if(a>9 && i>0){
			sax=a/10;
			a=a%10;
		}
		if(i==0){
			send.push_back(a%10+elve);send.push_back(a/10);
		}
		else send.push_back(a+elve);
		elve=sax;
		sax=0;
	}
}

int main(){
	string str1,str2;
	cin>>str1>>str2;
	vector<int> v ;
	reqHasil(v,str1,str2[0]);
	for(int i=0;i<v.size();i++)cout<<v[i];
	return 0;
}
