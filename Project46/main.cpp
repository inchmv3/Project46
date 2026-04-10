#include "util.h"
#include "logic.h"
int main() {
	int array[DEFAULT_SIZE];

	int size;
	cout << "enter size of array: \n";
	cin >> size;

	init(array, size, 0, 100);

	print("array: ");
	print(convert(array, size));

	int max = get_max(array, size);
	int min = get_min(array, size);
	double average = calc(array, size);

	print("max:" + to_string(max));
	print("min:" + to_string(min));
	print("average:" + to_string(average));

	return 0;
}