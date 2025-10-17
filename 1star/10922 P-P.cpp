// Problem: 10922 - 2 the 9s
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1863
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
using namespace std;

int dgs(int n){
	int s=0;
	while(n>0){
		s+=n%10;
		n/=10;
	}
	return s;
}

int main(){
	int sum,i,t;
	string str;
	while(cin>>str){
		sum=0;
		if(str=="0"){
			break;
		}
		for(i=0;i<str.size();i++){
			sum+=int(str[i])-'0';
		}
		if(sum%9==0){
			t=1;
			while(1){
				if(sum==9){
					break;
				}else{
					t+=1;
					sum=dgs(sum);
				}
			}
			cout<<str<<" is a multiple of 9 and has 9-degree "<<t<<"."<<endl;
		}else{
			cout<<str<<" is not a multiple of 9."<<endl;
		}
	}
	return 0;
}
