// Problem: 11005 - Cheapest Base
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1946
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
using namespace std;

#define endl "\n"

int cost[37];

string tran(int cost,int base){
	if(cost==0){
		return "0";
	}
	string s="";
	while(cost>=1){
		s=char(cost%base+'0')+s;
		cost/=base;
	}
	return s;
}

int trancost(string tran){
	int s=0;
	for(int i=0;i<tran.size();i++){
		s+=cost[int(tran[i]-'0')];
	}
	return s;
}

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n,nn,qu,min=1000000000;
	cin>>n;
	for(int t=1;t<=n;t++){
		cout<<"Case "<<t<<":"<<endl;
		for(int i=0;i<36;i++){
			cin>>cost[i];
		}
		cin>>nn;
		for(int i=1;i<=nn;i++){
			cin>>qu;
			cout<<"Cheapest base(s) for number "<<qu<<":";
			min=1000000000;
			for(int i=2;i<=36;i++){
				if(min>trancost(tran(qu,i))){
					min=trancost(tran(qu,i));
				}
			}
			int count=0;
			for(int i=2;i<=36;i++){
				if(trancost(tran(qu,i))==min){
					cout<<" "<<i;
				}
			}
			cout<<endl;
		}
		if(t!=n){
			cout<<endl;
		}
	}
	return 0;
}
