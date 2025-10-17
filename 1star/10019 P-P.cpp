// Problem: 10019 - Funny Encryption Method
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=960
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

int main(){
	int n,ni,num,i=0,temp;
	cin>>n;
	for(ni=1;ni<=n;ni++){
		cin>>num;
		cout<<bitset<32>(num).count();
		i=0;
		temp=num;
		num=0;
		while(temp>=1){
			if(temp%10!=0){
				num+=pow(16,i)*(temp%10);
				i++;
			}
			temp/=10;
		}
		cout<<" "<<bitset<32>(num).count()<<endl;
	}
	return 0;
}
