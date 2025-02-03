//     1
//     2 3
//     3 4 5
//     4 5 6 7
//     5 6 7 8 9

  #include<iostream>
 using namespace std;
 int main(){
 	 int n=5;
 	 
 	  for(int i=0;i<n;i++){
 	  	for(int j=1;j<=i+1;j++){
 	  		cout<<i+j<<" ";
		   }
		   cout<<endl;
	   }
    return 0;
 }
