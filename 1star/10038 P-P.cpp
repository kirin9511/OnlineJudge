// Problem: 10038 - Jolly Jumpers
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=979
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> num,ab;

int main(){
	int n,i,s,flag=1;
	while(cin>>n){
		for(i=1;i<=n;i++){
			cin>>s;
			num.push_back(s);
		}
		for(i=1;i<=num.size()-1;i++){
			ab.push_back(abs(num[i]-num[i-1]));
		}
		sort(ab.begin(),ab.end());
		for(i=1;i<ab.size();i++){
			if((ab[i]-ab[i-1])!=1){
				flag=0;
				break;
			}
		}
		if(flag==1){
			cout<<"Jolly"<<endl;
		}else{
			cout<<"Not jolly"<<endl;
		}
		flag=1;
		num.clear();
		ab.clear();
	}
	return 0;
}
