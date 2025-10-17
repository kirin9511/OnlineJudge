// Problem: 10193 - All You Need Is Love
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1134
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int i,j,n,temp;
	long long int x1=0,y1=0,L=1;
	string x,y;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>x>>y;
		for(j=0;j<x.size();j++){
			x1+=(int(x[j])-'0')*pow(2,x.size()-j-1);
		}
		for(j=0;j<y.size();j++){
			y1+=(int(y[j])-'0')*pow(2,y.size()-j-1);
		}
		while(y1!=0){
			temp=y1;
			y1=x1%y1;
			x1=temp;
		}
		L=x1;
		if(L==1){
			cout<<"Pair #"<<i<<": Love is not all you need!"<<endl;
		}else{
			cout<<"Pair #"<<i<<": All you need is love!"<<endl;
		}
		x1=0;
		y1=0;
	}
	return 0;
}
