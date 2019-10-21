#include <windows.h>

class Rect {
protected:
	int x, y, width, height;
public:
	Rect(int x, int y, int w, int h) : x(x), y(y), width(h), height(h) { }
	void draw()
	{
		HDC hdc = GetWindowDC(GetForegroundWindow());
		Rectangle(hdc, x, y, x + width, y + height);
	}
};

class ColoredRect : Rect {
	int red, green, blue;
public:
	ColoredRect(int x, int y, int w, int h, int r, int g, int b) :
		Rect(x, y, h, w), red(r), green(g), blue(b) { }
	void draw()
	{
		HDC hdc = GetWindowDC(GetForegroundWindow());
		SelectObject(hdc, GetStockObject(DC_BRUSH));
		SetDCBrushColor(hdc, RGB(red, green, blue));
		Rectangle(hdc, x, y, x + width, y + height);
	}
};

int main()
{
	Rect r1(100, 100, 80, 80);
	ColoredRect r2(200, 200, 80, 80, 255, 0, 0);

	r1.draw();
	r2.draw();
	return 0;
}