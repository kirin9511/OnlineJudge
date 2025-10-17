// Problem: 11461 - Square Numbers
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2456
// Memory Limit: 32 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b,qa,qb;
	while(cin>>a>>b){
		if(a==0&&b==0){
			break;
		}
		qa=sqrt(a);
		qb=sqrt(b);
		if(sqrt(a)>qa){
			qa+=1;
		}
		cout<<qb-qa+1<<endl;
	}
	return 0;
}