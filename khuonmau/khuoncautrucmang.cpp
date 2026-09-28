#include <iostream>

using namespace std;

template <typename T>
struct Mang {
	int n;
	T a[100];
};

template <typename T>
void nhap(Mang<T>& m);

template <typename T>
void xuat(Mang<T> m);

int main() {
	Mang<int> m1;
	nhap(m1);
	xuat(m1);

	Mang<float> m2;
	nhap(m2);
	xuat(m2);
	return 0;
}
template <typename T>
void nhap(Mang<T>& m) {
	cin >> m.n;
	for (int i = 0; i < m.n; ++i)
		cin >> m.a[i];
}

template <typename T>
void xuat(Mang<T> m) {
	for (int i = 0; i < m.n; ++i)
		cout << m.a[i] << " ";
}
