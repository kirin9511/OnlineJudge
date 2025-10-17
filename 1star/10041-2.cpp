#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

#define endl "\n"

int num[1024][505];

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,nn;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>nn;
		for(int j=0;j<nn;j++){
			cin>>num[i][j];
		}
		sort(num[i],num[i]+nn);
		int sum=0,mid;
		mid=num[i][nn/2];
		for(int j=0;j<nn;j++){
			sum+=abs(num[i][j]-mid);
		}
		cout<<sum<<endl;
	}
	
	return 0;
}