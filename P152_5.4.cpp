//基于范围的for循环
#include<iostream>
#include<vector>
using namespace std;


int main(){
	int a[5] = {1, 2 ,3, 4 ,5 };
	//使用基于范围的for循环对数组进行输出
	for(auto x: a){
		cout << x << "\t";
	}
	cout << endl;
	//使用基于范围的for循环对数组元素进行修改
	for(auto& x : a){
		x += 1;		//让数组中的每个元素自加1
	}

	//输出自加后的数组
	cout << endl << "利用基于范围的for循环输出数组为: ";
	for(auto x : a){
		cout << x << "\t";
	}
	cout << endl << endl;
	//使用基于范围的for循环输出容器里面的数据
	vector<int> v;
	for(int i = 0; i < 5; i++){
		v.push_back(i);
	}
	cout << "使用基于范围的for循环输出vector容器里面的内容为: ";
	for(auto x : v){
		cout << x << "\t";
	}
	cout << endl;


	return 0;
}
