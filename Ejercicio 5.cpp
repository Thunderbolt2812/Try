#include <iostream>
#include <iomanip>
#include <stdio.h>  
#include <stdlib.h> 
using namespace std;
int main(int argc, char** argv) {
	string acum;
	int num,fil,col;
	const char* nume;
	for(int p = 0; p<argc;p++){
		if(p!=0){
			acum+=argv[p];
		}
	}
	for(int x = 0;x<acum.length();x++){
		if(x==0){
			fil=(int)(acum.at(x))-((int)'0');	
		}else if(x==1){
			col=(int)(acum.at(x))-((int)'0');
		}
	}
	int a[fil][col];
	for(int i = 0;i<fil;i++){
		for(int j = 0;j<col;j++){
			a[i][j] = (i+1)*(j+1);
			cout<<"a["<<i<<"]["<<j<<"]="<<setw(3)<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
