#include <iostream>
using namespace std;

class A{
public:
	class B{
	public:
		B()
		{
			_sum += _num;
			++_num;
		}
	};
	int sumsolution(int n)
	{
		 _sum = 0;  _num = 1;
		B arrausum[8];//可变数组
		return _sum;
	}

private:
	static int _sum;
	static int _num;//内部类相当于外部类的友元类，可以直接访问外部类的静态成员，所以为了在内部类中直接访问这两个变量，定义为静态成员
};
int A :: _sum = 0;
int A:: _num = 1;

int main()
{
	A d;
	int sum=d.sumsolution(3);

	cout << sum << endl;
	system("pause");
	return 0;
}