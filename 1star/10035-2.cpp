#include <iostream>
using namespace std;

int main(){
	int a,b,p,t;
	while(cin>>a>>b){
		t=0;
		p=0;
		if(a==0&&b==0){
			break;
		}
		while(a!=0||b!=0){
			if((a%10+b%10)>=(10-p)){
				p=1;
				t+=1;
			}else{
				p=0;
			}
			a/=10;
			b/=10;
		}
		if(t==0){
			cout<<"No carry operation."<<endl;
		}else{
			if(t==1){
				cout<<"1 carry operation."<<endl;
			}else{
				cout<<t<<" carry operations."<<endl;
			}
		}
	}
	return 0;
}
