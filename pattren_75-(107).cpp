//                   15
//                14 13
//             12 11 10 
//          9 8 7 6  
//        5 4 3 2 1

  #include<iostream>
 using namespace std;
  int main(){
	int n=5;
	  int num=15;
  for(int i=0;i<n;i++){
  	for(int j=0;j<n-i-1;j++){
        cout<<"   ";
           }
            
    	for(int j=0;j<i+1;j++){
    	cout<<num<<" ";	
			num=num-1;
		}
   cout<<endl;
}

   return 0;
    }
  

