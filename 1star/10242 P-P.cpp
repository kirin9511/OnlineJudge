// Problem: 10242 - Fourth Point !!
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1183
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double x1,y1,x2,y2,x3,y3,x4,y4;
	cout<<fixed<<setprecision(3);
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4){
		if(x1==x3&&y1==y3){
			cout<<x1+(x2-x1+x4-x3)<<" "<<y1+(y2-y1+y4-y3)<<endl;
		}
		if(x1==x4&&y1==y4){
			cout<<x1+(x2-x1+x3-x4)<<" "<<y1+(y2-y1+y3-y4)<<endl;
		}
		if(x2==x3&&y2==y3){
			cout<<x2+(x1-x2+x4-x3)<<" "<<y2+(y1-y2+y4-y3)<<endl;
		}
		if(x2==x4&&y2==y4){
			cout<<x2+(x1-x2+x3-x4)<<" "<<y2+(y1-y2+y3-y4)<<endl;
		}
	}
	return 0;
}