#include<iostream>
using namespace std;

double test01(double x){
	return x * x;
}

double test02(double& x){
	return x * x;
}

void test03(){
	double a = 0;
	cout << "Please input a num:";
	cin >> a;
	cout << "The num square is:" << test01(a) << endl; 
}



int main(){
	test03();

	return 0;
}
