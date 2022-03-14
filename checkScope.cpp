#include <iostream>
using namespace std;

class Foo{
	public: //공용 
		//데이터 필드 
		int x;
		int y;
		
		Foo(){ //인수 없는 생성자 
			x = 10;
			y = 10;
		}
		
		void p(){
			//위에 x는 Foo클래스 내의 데이터 필드
			//이건 함수 p()안에서 초기값 20의 지역 변수로 선언 
			int x = 20;
			//x랑 y가 public이라 함수 내부에서 접근 가능 
			cout << "x is " << x <<endl;
			cout << "y is " << y << endl;
		}
};

int main(){
	Foo foo; //객체 생성 
	foo.p(); //함수 호출 
	
	return 0;
}
