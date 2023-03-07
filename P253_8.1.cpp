//内联函数
#include<iostream>
using namespace std;

class Person{
public:
	inline int returnAge();		//声明成内联函数
	inline void setAge(int age);
private:
	int m_age;
};
//实现内联函数
inline int Person::returnAge(){
	return this->m_age;
}
inline void Person::setAge(int age){
	this->m_age = age;
}

void test01(){
	Person a;
	cout << "请输入年龄:";
	int num = 0;
	cin >> num;
	a.setAge(num);
	cout << "您输入的年龄为:" << a.returnAge() << endl;

}

int main(){
	test01();


	return 0;
}
