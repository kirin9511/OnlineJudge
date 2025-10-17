// Problem: 10056 - What is the Probability ?
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=997
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	int ni,n,to,tar,i;
	double p,pr;
	cin>>n;
	cout<<fixed<<setprecision(4);
	for(ni=1;ni<=n;ni++){
		cin>>to>>p>>tar;
		pr=0;
		for(i=tar-1;i<=tar-1+to*100000;i+=to){
			pr+=pow(1-p,i)*p;
		}
		cout<<pr<<endl;
	}
	return 0;
}
