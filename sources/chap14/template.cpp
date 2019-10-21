template <typename T>		// 함수 템플릿으로 정의
void print_array(T[] a, int n)
{
	for (int i = 0; i<n; i++)
		cout << a[i] << " ";
	cout << endl;
}

template <>		// 템플릿 특수화
void print_array(char[] a, int n)	// 매개 변수가 char인 경우에는 이 함수가 호출된다.
{
	cout << a << endl;
}