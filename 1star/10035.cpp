// Problem: 10035 - Primary Arithmetic
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=976
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
using namespace std;

int main(){
	int i=0,k,t=0,p=0;
	string x,y;
	while(cin>>x>>y){
		if(x=="0"&&y=="0"){
			return 0;
		}
		if(x.size()>y.size()){
			k=x.size()-1;
			while(y.size()!=x.size()){
				y="0"+y;
			}
		}else{
			k=y.size()-1;
			while(y.size()!=x.size()){
				x="0"+x;
			}
		}
		for(i=0;i<=k;i++){
			if((int(x[k-i])+int(y[k-i])-96)>=(10-p)){
				t+=1;
				p=1;
			}else{
				p=0;
			}
		}
		if(t==0){
			cout<<"No carry operation."<<endl;
		}else{
			if(t==1){
				cout<<"1 carry operation."<<endl;
			}else{
				cout<<t<<" carry operations."<<endl;
			}
		}
		p=0;
		t=0;
	}
}
