#include <iostream>
using namespace std;

int addNumbers(int a, int b) {
	return a + b;
}

void testAddNumbers() {
	int result = addNumbers(5, 6);

	if (result == 11)
		cout << "Correct Result" << endl;
}

int main() {
	testAddNumbers();
	return 0;
}