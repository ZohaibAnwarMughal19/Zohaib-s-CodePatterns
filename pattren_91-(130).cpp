//                      1
//                     1 2
//                    1 2 3
//                   1 2 3 4
//                  1 2 3 4 5

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
    		cout<<num<<" ";
    		num=num+1;
		}
	
   cout<<endl;
}
   return 0;
    }
