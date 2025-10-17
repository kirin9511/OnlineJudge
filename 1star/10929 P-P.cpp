// Problem: 10929 - You can say 11
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=21&page=show_problem&problem=1870
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
using namespace std;

int main(){
	int es,os,i;
	string n;
	while(cin>>n){
		if(n=="0"){
			break;
		}
		es=0;
		os=0;
		for(i=0;i<n.size();i+=2){
			os+=int(n[i])-'0';
		}
		for(i=1;i<n.size();i+=2){
			es+=int(n[i])-'0';
		}
		if((es-os)%11==0){
			cout<<n<<" is a multiple of 11."<<endl;
		}else{
			cout<<n<<" is not a multiple of 11."<<endl;
		}
	}
	return 0;
}
