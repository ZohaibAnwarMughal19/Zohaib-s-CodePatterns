//     1 2 3 4 5
//     6 7 8 9
//     10 11 12
//     13 14
//     15
    
      #include<iostream>
using namespace std;
int main(){
	int n=5,num=1;
  for(int i=5;i>0;i--){
  	for(int j=0;j<i;j++){
       cout<<num<<" ";
       num=num+1;
   }
       
   cout<<endl;
}
   return 0;
    }
