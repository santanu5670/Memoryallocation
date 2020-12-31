#include<iostream>
using namespace std;
int main(){
	int n,i,rem,sum=0;
	cout<<"Enter the number";
	cin>>n;
	for(i=1;i<n;i++){
        rem=n%i;
		if(rem==0){
			sum=sum+i;
		}
	}
	if(sum==n){
		cout<<"\n The number is perfect";
	}
	else{
		cout<<"\n The number is not a perfect number";
	}
	return 0;
}
