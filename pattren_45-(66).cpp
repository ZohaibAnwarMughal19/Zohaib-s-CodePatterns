//             A
//             A B
//             A B C
//             A B C D
//             A B C D E

  #include<iostream>
using namespace std;
int main(){
	int n=5;
  for(int i=0;i<n;i++){
  	char ch='A';
  	for(int j=0;j<i+1;j++){
  		cout<<ch<<" ";
  		  ch=ch+1; 		  
	  }	 
	  cout<<endl;
}
   return 0;
   
   }
