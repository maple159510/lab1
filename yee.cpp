#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	cout<<n;
	while(true){
		if(n==1){
			cout<<endl;
			break;
		}
		if(n%2!=0){ 
			n=3*n+1;
			cout<<" "<<n;
		}
		else{
			n=n/2;
			cout<<" "<<n;
		}
	}
	return 0;
}
