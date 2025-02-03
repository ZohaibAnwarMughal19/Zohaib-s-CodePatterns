//       E E E E E
//       E
//       E E E E E
//       E 
//       E E E E E

  #include<iostream>
  using namespace std;
  int main(){
  	
  	int n=5;
  	
  	    for(int i=0;i<n;i++){
  	        for(int j=0;j<n;j++){
  	        	if(i==0  || j==0  || i==1 && j==0 ||   i==2   || i==4){cout<<"E " ;}
				else { cout<<" ";}
			  }
		    cout<<endl;
		  }
  	  return 0;
  }
