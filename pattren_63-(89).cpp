//          E E E E E
//          D D D D
//          C C C
//          B B
//          A

   #include<iostream>
  using namespace std;
  int main(){
	int n=5;
	char ch='E';
  for(int i=5;i>0;i--){
  	
  	for(int j=0;j<i;j++){
      cout<<ch<<" ";
    
          }
       ch=ch-1;
   cout<<endl;
}
   return 0;
    }
