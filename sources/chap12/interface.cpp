class RemoteControl {
	// 순수 가상 함수 정의
	virtual void turnON() = 0;	// 가전 제품을 켠다.
	virtual void turnOFF() = 0;	// 가전 제품을 끈다.
}
class Television : public RemoteControl {
	void turnON() 
	{
		// 실제로 TV의 전원을 켜기 위한 코드가 들어 간다.
	}
	void turnOFF()
	{
		// 실제로 TV의 전원을 끄기 위한 코드가 들어 간다.
	}
}