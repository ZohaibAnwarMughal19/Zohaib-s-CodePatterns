//        A A A A A
//        B B B B
//        C C C
//        D D
//        E

 #include<iostream>
  using namespace std;
  int main(){
	int n=5;
	char cha='A';
  for(int i=5;i>0;i--){
  	for(int j=0;j<i;j++){
          cout<<cha<<" "; 
          }
       cha=cha+1;
   cout<<endl;
}
   return 0;
    }

