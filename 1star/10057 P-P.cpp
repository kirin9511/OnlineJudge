#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> a;

int main(){
	int n,i,j,cina,A,xat=0,t=0;
	while(cin>>n){
		for(i=1;i<=n;i++){
			cin>>cina;
			a.push_back(cina);
		}
		sort(a.begin(),a.end());
		A=a[(a.size()-1)/2];
		xat=0;
		if(a.size()%2==0){
			for(i=0;i<a.size();i++){
				if(a[i]>=a[a.size()/2-1]&&a[i]<=a[a.size()/2]){
					xat++;
				}
			}
		}else{
			for(i=0;i<a.size();i++){
				if(a[i]==A){
					xat++;
				}
			}
		}
		t=a[a.size()/2]-a[(a.size()-1)/2]+1;
		cout<<A<<" "<<xat<<" "<<t<<endl;
		a.clear();
	}
	return 0;
}
