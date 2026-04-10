#include "util.h"
int main() {
	int array[DEFAULT_SIZE];

	int size;
	cout << "enter size of array: \n";
	cin >> size;

	init(array, size, 0, 100);

	print("array: ");
	print(convert(array, size));


	return 0;
}