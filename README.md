# variableScope
변수 scope가 충돌할 시 어떤 값이 사용될까 확인해보기

변수 scope가 충돌시 가까운 것이 이김.

**인스턴스와 정적 변수의 범위는 변수가 선언된 위치에 상관없이 클래스 전체가 됨.
*데이터 필드는 변수로 선언되며 클래스 안에서 모든 생성자와 함수에 접근이 가능

클래스 멤버를 순서에 상관없이 배치할 수 있지만, C++에서 일반적으로 사용하는 유형은 첫 번째로 공용 멤버를 선언 -> 전용 멤버를 선언함.

ex_
/*
class Circle
{
public:
    Circle();
    Circle(double);
    double getArea();
    double getRadius();
    void setRadius(double);
private:
    double radius;
};
*/

ex_안 좋은 예_
/*
class Circle
{
public:
    Circle();
    Circle(double);
private:
    double radius;
public:
    double getArea();
    double getRadius();
    void setRadius(double);
};
*/
