#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define endl "\n"

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	double r,a;
	string s;
	cout<<fixed<<setprecision(6);
	while(cin>>r>>a>>s){
		if(a>180){
			a=360-a;
		}
		r+=6440;
		if(s=="deg"){
			cout<<2*r*acos(-1)*a/360<<" ";
			cout<<sqrt(2*r*r*(1-cos(a/360*2*acos(-1))))<<endl;
		}
		if(s=="min"){
			cout<<2*r*acos(-1)*a/21600<<" ";
			cout<<sqrt(2*r*r*(1-cos(a/21600*2*acos(-1))))<<endl;
		}
	}
	return 0;
}