#include <iostream>
using namespace std;

#define endl "\n"

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,t,b,l,r,u,d,temp;
	string act;
	while(cin>>n){
		if(n==0){
			break;
		}
		t=1;
		b=6;
		l=3;
		r=4;
		u=2;
		d=5;
		for(int i=0;i<n;i++){
			cin>>act;
			if(act=="north"){
				temp=t;
				t=d;
				d=b;
				b=u;
				u=temp;
				continue;
			}
			if(act=="south"){
				temp=t;
				t=u;
				u=b;
				b=d;
				d=temp;
				continue;
			}
			if(act=="east"){
				temp=t;
				t=l;
				l=b;
				b=r;
				r=temp;
				continue;
			}
			if(act=="west"){
				temp=t;
				t=r;
				r=b;
				b=l;
				l=temp;
				continue;
			}
		}
		cout<<t<<endl;
	}
	return 0;
}