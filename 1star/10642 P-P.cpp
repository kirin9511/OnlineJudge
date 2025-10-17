// Problem: 10642 - Can You Solve It?
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1583
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
using namespace std;

int main(){
	int n,ni,x1,y1,x2,y2,i;
	long long int a=0,b=0;
	cin>>n;
	for(ni=1;ni<=n;ni++){
		cin>>x1>>y1>>x2>>y2;
		a=x1+y1;
		for(i=a-1;i>=1;i--){
			a+=i;
		}
		a+=x1+1;
		b=x2+y2;
		for(i=b-1;i>=1;i--){
			b+=i;
		}
		b+=x2+1;
		cout<<"Case "<<ni<<": "<<b-a<<endl;
	}
	return 0;
}