template<typename T>
void copy_array(T a[], T b[], int n)
{
	for (int i = 0; i < n; ++i)
		a[i] = b[i];
}