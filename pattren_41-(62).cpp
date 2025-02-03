//     0
//     0 1
//     0 1 0
//     0 1 0 1
//     0 1 0 1 0
//     0 1 0 1 0 1

 #include<iostream>
using namespace std;
int main(){
	int n=6;
  for(int i=0;i<n;i++){
  	for(int j=0;j<i+1;j++){
  	     if (j==1 || j==3 || j==5){cout<<1<<" ";}
         else{ cout<<0<<" "; }   
		}
	  
	cout<<endl;
}
  return 0;
}
