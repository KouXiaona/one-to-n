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
		B arrausum[8];//�ɱ�����
		return _sum;
	}

private:
	static int _sum;
	static int _num;//�ڲ����൱���ⲿ�����Ԫ�࣬����ֱ�ӷ����ⲿ��ľ�̬��Ա������Ϊ�����ڲ�����ֱ�ӷ�������������������Ϊ��̬��Ա
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