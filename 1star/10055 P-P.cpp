// Problem: 10055 - Hashmat the Brave Warrior
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=996
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
using namespace std;

int main(){
	long long int x,y;
	while(cin>>x>>y){
		if(x>=y){
			cout<<x-y<<endl;
		}else{
			cout<<y-x<<endl;
		}
	}
	return 0;
}
