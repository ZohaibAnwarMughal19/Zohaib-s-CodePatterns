//              0 1 0 1 0          
//              0 1 0 1  
//              0 1 0            
//              0 1
//              0         

  #include<iostream>
  using namespace std;
  int main(){
	int n=5;
  for(int i=5;i>0;i--){
  	for(int j=0;j<i;j++){
       if( j==0 || j==2 || j==4){ cout<<0<<" ";}
       else{ cout<<1<<" ";}
          }
       
   cout<<endl;
}
   return 0;
    }
