#include <iostream>
using namespace std;

class Foo{
	public: //���� 
		//������ �ʵ� 
		int x;
		int y;
		
		Foo(){ //�μ� ���� ������ 
			x = 10;
			y = 10;
		}
		
		void p(){
			//���� x�� FooŬ���� ���� ������ �ʵ�
			//�̰� �Լ� p()�ȿ��� �ʱⰪ 20�� ���� ������ ���� 
			int x = 20;
			//x�� y�� public�̶� �Լ� ���ο��� ���� ���� 
			cout << "x is " << x <<endl;
			cout << "y is " << y << endl;
		}
};

int main(){
	Foo foo; //��ü ���� 
	foo.p(); //�Լ� ȣ�� 
	
	return 0;
}
