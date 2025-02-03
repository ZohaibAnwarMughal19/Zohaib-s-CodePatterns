//    0 0 0 0 0 
//    1 1 1 1 1
//    0 0 0 0 0 
//    1 1 1 1 1
//    0 0 0 0 0
 
   #include<iostream>
 using namespace std;
 int main(){
 	int n=5,num=2;
 	  for(int i=0;i<n;i++){
 	  	for(int j=0;j<n;j++){
         if( i==0 || i==2 ||i==4 ){ cout<<0<<" ";}
           else if ( i==1 || i==3){	cout<<1<<" ";}
	}
	cout<<endl;
	}	 
	  return 0;
	  }
