#include<iostream>
using namespace std;
string stringReverse(string s){
	string temp,res=" ";
	for(int i=0;i<s.length();i++){
		if(s[i]==' '||s[i]='\t')
		res=temp+" "+res;
		else
		temp+=s[i];
	}
	return res;
}
int main(){
	string str;
	cin>>str;
	cout<<stringReverse(str);
	return 0;
}
