//        0 0 0 0 0
//        1 1 1 1
//        0 0 0
//        1 1
//        0

  #include<iostream>
using namespace std;
int main(){
	int n=5;
  for(int i=5;i>0;i--){
  	for(int j=0;j<i;j++){
       if( i==5 || i==3 || i==1){ cout<<0<<" ";}
       else{ cout<<1<<" ";}
          }
       
   cout<<endl;
}
   return 0;
    }
