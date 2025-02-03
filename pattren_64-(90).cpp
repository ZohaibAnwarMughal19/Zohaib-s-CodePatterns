//        E D C B A
//        E D C B 
//        E D C
//        E D
//        E

   #include<iostream>
  using namespace std;
  int main(){
	int n=5;
  for(int i=5;i>0;i--){
  	char ch='E';
  	for(int j=0;j<i;j++){
      cout<<ch<<" ";
        ch=ch-1;
          }
   cout<<endl;
}
   return 0;
    }
