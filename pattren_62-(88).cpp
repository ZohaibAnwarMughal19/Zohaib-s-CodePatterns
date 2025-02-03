//             A B C D E
//             A B C D
//             A B C
//             A B
//             A

 #include<iostream>
  using namespace std;
  int main(){
	int n=5;
	
  for(int i=5;i>0;i--){
  	char ch='A';
  	for(int j=0;j<i;j++){
      cout<<ch<<" ";
        ch=ch+1;
          }
       
   cout<<endl;
}
   return 0;
    }
