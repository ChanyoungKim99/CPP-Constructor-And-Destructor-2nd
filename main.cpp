#include <iostream>

class Point2D
{
	int mX ;
	int mY ;

public:
	Point2D()		// �����ڰ� �Ҹ��� ���� = �ν��Ͻ�ȭ �� ����
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
					���� �Ű� ������ �޾ƿ� �ʱ�ȭ�ϴ� �͵� ����
	*/				

	void Print()
	{
		std::cout << "(" << mX << ", " << mY << ")" << std::endl;
	}
};

int main()
{
	Point2D pt1;	// �ν��Ͻ�ȭ ��, �����ڷ� ����! �ʱ�ȭ �� �ٽ� ���ƿ´�!
	
	// Point2D pt1(1, 1); ���� �Ű� ������ �ѱ� �� �ִ�.

	pt1.Print();


	Point2D pt2;
	pt2.Print();
}