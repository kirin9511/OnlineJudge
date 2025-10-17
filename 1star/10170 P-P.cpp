// Problem: 10170 - The Hotel with Infinite Rooms
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=13&page=show_problem&problem=1111
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
using namespace std;

int main(){
	int s;
	long long int d;
	while(cin>>s>>d){
		while(d>0){
			d-=s;
			s++;
		}
		cout<<s-1<<endl;
	}
}
