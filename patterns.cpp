#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a No:";
	cin>>n;
//	
//	for(int i=0;i<n;i++){
//		
//		for(int k=0;k<n-i;k++){
//												*
//			cout<<" ";						   ***       
//		} 								      *****           
//		for(int j=0;j<2*i+1;j++){            *******              
//			
//				cout<<"*";
//		}
//		cout<<endl;
//	}


		

			for(int i=0;i<n;i++){
					int k=1;		
				
				for(int j=0;j<2*n;j++){
					
				if(j>=n-i-1 && j<=4+i-1 && k){
					cout<<"*";
					k=0;
					}	
				else
					cout<<" ";	
					k=1;
				}
				cout<<endl;
			}








}


