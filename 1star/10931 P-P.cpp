// Problem: 10931 - Parity
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1872
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
using namespace std;

#define endl "\n"

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n,t;
	string str="";
	while(cin>>n){
		t=0;
		if(n==0){
			break;
		}
		while(n>=1){
			if(n%2==1){
				str='1'+str;
				t++;
			}else{
				str='0'+str;
			}
			n/=2;
		}
		cout<<"The parity of "<<str<<" is "<<t<<" (mod 2)."<<endl;
		str="";
	}
	return 0;
}
