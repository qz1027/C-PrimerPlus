#include<iostream>
#include<string>
using namespace std;

int main(){
	char name[20] = { '0' };
	cin.getline(name,20);
	cout << "您输入的一行数据为:" << name << endl;
	//向string对象中输入一行数据
	string name1;
	getline(cin, name1);
	cout << "使用getline向string类中输入数据为:" << name << endl;


	return 0;
}
