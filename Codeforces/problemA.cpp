#include<iostream>
using namespace std;

void inc(int n){ // 7
	if(n == 0){
		return;
	}
	inc(n-1); //6
	cout<<n<<endl;
	return ;
}



// 1 2 3 4 5 6 7

int main(){
	inc(7); // 1 2 3 4 5 6 7
	
	return 0;
}