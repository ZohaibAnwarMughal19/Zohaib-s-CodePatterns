//       1
//       0 0
//       1 1 1
//       0 0 0 0
//       1 1 1 1 1

 #include<iostream>
using namespace std;
int main(){
	int n=5;
  int r,num1=0,num2=1;
  for(int i=0;i<n;i++){
  	for(int j=0;j<i+1;j++){
  	     if(i==0||i==2||i==4){cout<<1<<" ";}
		   else{ cout<<0<<" ";}
		   }	     
	cout<<endl;
}
  return 0;
}
