class Circle {
	int x, y;
	int radius;
	static int count;	// 정적 변수

public:
	Circle() : x{0}, y{0}, radius{0} {
		count++;
	}
	Circle(int x, int y, int r) : x{x}, y{y}, radius{r} {
		count++;
	}
};

int main()
{
	Circle c1;
	Circle c2;
}
