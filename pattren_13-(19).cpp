//  1 0 1 0 1
//  0 1 0 1 0 
//  1 0 1 0 1
//  0 1 0 1 0
//  1 0 1 0 1

  #include<iostream>
 using namespace std;
 int main(){
 	int n=5,num=2;
 	  for(int i=0;i<n;i++){
 	  	for(int j=0;j<n;j++){
         if( (i+j)%2==1 ){
         	cout<<0<<" ";}
		 else{ cout<<1<<" ";}
	}
	cout<<endl;
	}	 
	   return 0;
}
