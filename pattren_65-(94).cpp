//       A
//       B C
//       D E F
//       G H I J
//       K L M N O

   #include<iostream>
  using namespace std;
  int main(){
	int n=5;
	char ch='A';
  for(int i=0;i<n;i++){
  	for(int j=0;j<i+1;j++){
      cout<<ch<<" ";
        ch=ch+1;
          }
   cout<<endl;
}
   return 0;
    }
