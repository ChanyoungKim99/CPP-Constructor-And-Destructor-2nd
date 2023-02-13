#include <iostream>

class Point2D
{
	int mX ;
	int mY ;

public:
	Point2D()		// 생성자가 불리는 시점 = 인스턴스화 된 다음
	{	
		mX = 0;
		mY = 0;
	}

	/*
	Point2D(int x, int y)
	{
		mX = x;
		mY = y;
	}
					같이 매개 변수를 받아와 초기화하는 것도 가능
	*/				

	void Print()
	{
		std::cout << "(" << mX << ", " << mY << ")" << std::endl;
	}
};

int main()
{
	Point2D pt1;	// 인스턴스화 후, 생성자로 간다! 초기화 후 다시 돌아온다!
	
	// Point2D pt1(1, 1); 같이 매개 변수를 넘길 수 있다.

	pt1.Print();


	Point2D pt2;
	pt2.Print();
}