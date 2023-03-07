#include<iostream>
#include<array>
using namespace std;

int main(){
	//定义一个array数组
	array<int,3> arr = { 1, 2, 3};
	for(int i = 0; i < 3; i++){
		cout << arr[i] << "\t ";
	}
	cout << endl << endl;
	
	arr[0] = 8;
	for(int i = 0; i < 3; i++){
                cout << arr[i] << "\t ";
        }
        cout << endl;


	return 0;
}
