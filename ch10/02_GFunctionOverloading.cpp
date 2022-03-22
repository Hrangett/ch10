#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point (int x = 0,int y= 0):xpos(x),ypos(y)
	{}
	void ShowPosition()const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
	friend Point operator+(const Point& pos1, const Point& pos2); //friend는 정보은닉에 위배되어 가급적 사용하지안지만 연산자 오버로딩 시 사용된다.
	friend Point operator+(int n, const Point& pos2); //friend는 정보은닉에 위배되어 가급적 사용하지안지만 연산자 오버로딩 시 사용된다.

};

Point operator+(const Point& pos1, const Point& pos2)
{
	Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
	return pos;
}
Point operator+(int n, const Point& pos2)
{
	Point pos(n + pos2.xpos, n + pos2.ypos);
	return pos;
}

int main()
{
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1 + pos2;
	Point pos4 = 100 + pos2;

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	pos4.ShowPosition();

	return 0;

}