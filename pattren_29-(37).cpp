//     5
//     4 4
//     3 3 3
//     2 2 2 2
//     1 1 1 1 1

    #include<iostream>
 using namespace std;
 int main(){
 	 int n=5;
 	 
 	  for(int i=5;i>0;i--){
 	  	for(int j=5;j>=i;j--){
 	  		cout<<i<<" ";
		   }
		   cout<<endl;
	   }
    return 0;
 }
