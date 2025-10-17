// Problem: 299 - Train Swapping
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=235
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
#include <vector>
using namespace std;

vector<int> crg;

int main(){
	int n,ni,l,i,j,num,t=0,k;
	cin>>n;
	for(ni=1;ni<=n;ni++){
		cin>>l;
		for(i=1;i<=l;i++){
			cin>>num;
			crg.push_back(num);
		}
		t=0;
		num=1;
		for(i=0;i<l;i++){
			if(crg[i]==num){
				num+=1;
				continue;
			}else{
				for(j=i+1;j<l;j++){
					if(crg[j]==num){
						t+=j-i;
						crg.erase(crg.begin()+j);
						crg.insert(crg.begin()+i,num);
						num+=1;
						break;
					}
				}
			}
		}
		cout<<"Optimal train swapping takes "<<t<<" swaps."<<endl;
		crg.clear();
	}
	return 0;
}
