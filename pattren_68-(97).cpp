//            1
//           12
//          123
//         1234
//        12345
     #include<iostream>
  using namespace std;
  int main(){
	int n=5;
  for(int i=0;i<n;i++){
  	for(int j=0;j<n-i-1;j++){
      cout<<" ";
           }
             int num=1;
    	for(int j=0;j<i+1;j++){
    		cout<<num;
    		num=num+1;
		}
	     
   cout<<endl;
      
}

   return 0;
    }
