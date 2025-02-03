//       0
//       1 2
//       3 5 8
//       13 21 34 55
//       89 144 233 377 610

#include<iostream>
using namespace std;
int main(){
	int n=5;
  int r,num1=0,num2=1;
  for(int i=0;i<n;i++){
  	for(int j=0;j<i+1;j++){
  		cout<<r<<" ";
  		r=num1+num2;
  		num1=num2;
  		num2=r;
	  }
	cout<<endl;
  }
  return 0;
}
