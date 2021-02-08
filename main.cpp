#include<iostream>
using namespace std;
int main (){
	int val[]={60,100,120};
	int wt[]={10,20,30};
	int W=50;
	int n=sizeof(val);
	cout<< knapSack(W, wt, val, n);
	return 0;

}

