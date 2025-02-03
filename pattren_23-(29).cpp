//    E D C B A
//    E D C B A 
//    E D C B A
//    E D C B A
//    E D C B A

     #include<iostream>
 using namespace std;
 int main(){
 	int n=5;

 	  for(int i=0;i<n;i++){
 	  	  char ch='E';
 	  	for(int j=0;j<n;j++){
 	  	   cout<<ch<<" "; 
		    ch= ch-1;   
 	  	  }
            
		
		  cout<<endl;	   
 }
 	  return 0;	
 }
