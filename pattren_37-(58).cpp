//       0
//       0 1
//       0 1 1
//       0 1 1 2
//       0 1 1 2 3

   #include<iostream>
using namespace std;
int main(){
	int n=5;
  int r,num1=0,num2=1;
  for(int i=0;i<n;i++){
  	for(int j=0;j<i+1;j++){
  	     if(j==0){cout<<0<<" ";}
  	    else if (j==1 || j==2){cout<<1<<" ";}
  	    else if( j==3){ cout<<2<<" ";}
  	    else if (j==4){ cout<<3<<" ";}
		   
		}
	  
	cout<<endl;
}
  return 0;
}
