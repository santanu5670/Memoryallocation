#include<iostream>
using namespace std;
class factorial{
	int f=1,i,n;
	public:
		void input(){
		  cout<<"Enter Value=";
	      cin>>n;
		}
		void calculation(){
	for(i=1;i<=n;i++){
		f=f*i;
	}
}
   void display(){
	cout<<"The fabonacci series="<<f;
}
};
int main(){
	factorial obj;
	obj.input();
	obj.calculation();
	obj.display();
}
