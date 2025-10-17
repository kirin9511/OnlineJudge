// Problem: 948 - Fibonaccimal Base
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=889
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
#include <vector>
using namespace std;

vector<int> fib,num;

int main(){
	int n,ni,dec,f=0,i,max=0,k=2;
	fib.clear();
	fib.push_back(1);
	fib.push_back(2);
	while(max<=100000000){
		fib.push_back(fib[k-2]+fib[k-1]);
		max=fib[k];
		k++;
	}
	cin>>n;
	for(ni=1;ni<=n;ni++){
		cin>>dec;
		cout<<dec<<" = ";
		for(i=fib.size()-2;i>=0;i--){
			if(dec>=fib[i]){
				dec-=fib[i];
				num.push_back(1);
				f=1;
			}else{
				if(f==1){
					num.push_back(0);
				}
			}
		}
		for(i=0;i<num.size();i++){
			cout<<num[i];
		}
		cout<<" (fib)"<<endl;
		f=0;
		num.clear();
	}
	return 0;
}
