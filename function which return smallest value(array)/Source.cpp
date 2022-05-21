#include <iostream>
using namespace std;
#define SIZE 5

int smallest(int arr[SIZE]);

int main() {
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++) {
		cout << "array[" << i << "] = ";
		cin >> arr[SIZE];
	}
	cout << "smallest = " << smallest(arr);
	return 0;
}
int smallest(int arr[SIZE]) {
	int minElement;
	
	for (int i = 0; i < SIZE; i++) {
		minElement = arr[0];
		if (minElement < arr[i])
			minElement = arr[i];
	}
	return minElement;
}
