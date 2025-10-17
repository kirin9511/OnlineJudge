// Problem: 10190 - Divide, But Not Quite Conquer!
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1131
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
using namespace std;

int n[1024];

int main(){
	int i=1,t,num,base;
	while(cin>>num>>base){
		t=1;
		if(base==0||base==1||num==0||num==1){
			cout<<"Boring!"<<endl;
			continue;
		}
		while(num%base==0){
			n[t]=num;
			num/=base;
			t++;
		}
		n[t]=num;
		if(num==1){
			for(i=1;i<=t-1;i++){
				cout<<n[i]<<" ";
			}
			cout<<n[i];
		}else{
			cout<<"Boring!";
		}
		cout<<endl;
	}
	return 0;
}
