//   0 1 0 1 0 1
//   0 1 0 1 0 1
//   0 1 0 1 0 1
//   0 1 0 1 0 1
//   0 1 0 1 0 1

    #include<iostream>
 using namespace std;
 int main(){
 	int n=5,num=2;
 	  for(int i=0;i<n;i++){
 	  	for(int j=0;j<n;j++){
         if( j == 0 || j == 2 || j == 4){cout<<0<<" ";}
	else if( j == 1 || j == 3){cout<<1<<" ";}
	}
	cout<<endl;
	}	 
	   return 0;
}
