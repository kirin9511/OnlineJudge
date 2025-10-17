// Problem: 11349 - Symmetric Matrix
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2324
// Memory Limit: 32 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long int> matr;

int main(){
	int n,i,s,f=1;
	long long int num;
	cin>>n;
	for(int ni=1;ni<=n;ni++){
		cin.ignore();
		cin.ignore();
		cin.ignore();
		cin.ignore();
		cin>>s;
		f=1;
		for(i=1;i<=s*s;i++){
			cin>>num;
			matr.push_back(num);
		}
		cout<<"Test #"<<ni<<": ";
		for(i=0;i<matr.size();i++){
			if(matr[i]<0){
				f=0;
				break;
			}
			if(matr[i]!=matr[matr.size()-1-i]){
				f=0;
				break;
			}
		}
		if(f==1){
			cout<<"Symmetric."<<endl;
		}else{
			cout<<"Non-symmetric."<<endl;
		}
		matr.clear();
	}
	return 0;
}

