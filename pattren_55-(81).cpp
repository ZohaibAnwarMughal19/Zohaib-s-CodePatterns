//        1 1 1 1 1
//        0 0 0 0 
//        1 1 1
//        0 0 
//        1

  #include<iostream>
using namespace std;
int main(){
	int n=5;
  for(int i=5;i>0;i--){
  	for(int j=0;j<i;j++){
       if( i==5 || i==3 || i==1){ cout<<1<<" ";}
       else{ cout<<0<<" ";}
          }
       
   cout<<endl;
}
   return 0;
    }
