#include<iostream>
using namespace std;

int swap(bool a) {
	if (a) {
		a = false;
	}
	else { a = true; }
	return a;
}

int main()
{
	bool a[100] = {};
	for (int i = 1; i <= 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (j+1 == i ||j%(i+1) == i) {
				a[j] = swap(a[j]);
			}
			else
				continue;
		}
		if (i == 100) {
			for (int n = 0; n < 100; n++) {
				if (a[n]) {
					cout << n + 1 << " ";
				}
			}
		}
		else
			continue;
	}

}