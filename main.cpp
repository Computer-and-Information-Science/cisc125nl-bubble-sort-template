#include <iostream>
#include <string>
using namespace std;

void print (const int a[], int n) {
	for (int i = 0; i < n; i++)
		cout << " " << a[i];
	cout << endl;
}

void exchange (int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void bubble_pass (int a[], int n) {
	for (int i = 0; i < n - 1; i++)
		if (a[i] > a[i + 1])
			exchange(a[i], a[i + 1]);
}

void bubble_sort (int a[], int n) {
	for (int i = 0; i < n - 1; i++)
		bubble_pass(a, n);
}

int main() {
	int x[] = {25,45,7,13,2,17,31,5};

	print(x, 8);
	bubble_sort(x, 8);
	print(x, 8);

	string y[] = { "dog", "turtle", "wolf", "bear", "bird", "cat" };
	//print(y, 6);
	//bubble_sort(y, 6);
	//print(y, 6);
}
