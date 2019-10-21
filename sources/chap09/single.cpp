#include <iostream>
using namespace std;

class Camera
{
public:
	static Camera *getInstance();
private:
	Camera() {}
	static Camera *instance;
public:
	void capture() {
		cout << "사진 촬영이 수행되었음!" << endl;
	}
};

Camera* Camera::instance = 0;
Camera* Camera::getInstance() {
	if (!instance) {
		instance = new Camera();
		cout << "첫 번째 객체가 생성됨" << endl;
		return instance;
	}
	else {
		cout << "이전 객체를 반환함" << endl;
		return instance;
	}
}

int main()
{
	Camera* s1 = Camera::getInstance();
	Camera* s2 = Camera::getInstance();
	Camera* s3 = Camera::getInstance();
	s1->capture();
	return 0;
}