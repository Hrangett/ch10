#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{}
	void ShowPosition()const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}

	Point add(const Point& other)
	{
		return other.xpos + xpos, ypos + other.ypos;
	}
	Point operator+(const Point& ref)
	{
		Point pos(xpos + ref.xpos, ypos + ref.ypos);
		return pos;
	}
	Point operator+(int n)
	{
		Point pos(xpos + n, ypos + n);
		return pos;
	}
};

int main()
{
	Point pos1(3, 4);
	Point pos2(10, 20);
	//Point pos3 = pos1.operator+(pos2);
	//Point pos3 = pos1.operator+(pos2);//연산자 오버로딩
	//Point pos4 = pos1 + 10;//연산자 오버로딩
	Point pos4 = pos1.operator+(10);//연산자 오버로딩

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos4.ShowPosition();

}