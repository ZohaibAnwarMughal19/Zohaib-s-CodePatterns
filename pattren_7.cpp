//     1 3 5 7 9
//     11 13 15 17 19
//     21 23 25 27 29
//     31 33 35 37 39
//     41 43 45 57 49

 #include<iostream>
 using namespace std ;
 int main (){
 	int n=5,num=1;
 	for( int i=0;i<n;i++){
 		for(int j=0;j<n;j++){
 			cout<<num<<" ";
 			num=num+2;
		}
		cout<<endl;
	 }
	  
	  return 0;
 } 
