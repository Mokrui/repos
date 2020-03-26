#include "Header.h"

void fill(int arr[], int size) {
	
	int max = 0;
	int min = 0;
	cout << "Choose a range: ";
	cout << "Max:";
	cin >> max;
	cout << "Min:";
	cin >> min;

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % max + min;
	}
}

void show(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}
}

void search(int arr[], int size) {
	int el = 0;
	bool isExist = false;
	cout << "Enter what element you are looking for: ";
	cin >> el;

	for (int i = 0; i < size; i++) {
		if (arr[i] == el) {
			cout << i << " ";
		}
	}
	
	if (!isExist) {
		cout << "Such element doesn't exists" << endl;
	}
}

void sort(int arr[], int size){

	for (int i = 0; i < size/2; i++) {
		int begin = i;
		int end = size - 1 - i;

		int temp_1 = arr[begin];	
		int temp_2 = arr[end];

		int indexmin = 0;
		int indexmax = 0;

		int min = arr[(size/2)-1];
		int max = arr[size/2];

		for (int j = i; j < size - i; j++) {
			if (min > arr[j]) {
				min = arr[j];
			}
			if (max < arr[j]) {
				max = arr[j];
			}
		}

		for (int o = i; o < size-i; o++) {
			if (arr[o] == min) {
				indexmin = o;
			}
			if (arr[o] == max) {
				indexmax = o;
			}
		}

			arr[begin] = arr[indexmin];
			arr[end] = arr[indexmax];

			arr[indexmin] = temp_1;
			arr[indexmax] = temp_2;
		}
	}

void avarage(int arr[], int size){
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	cout << "Avarage = " << (sum / size) << endl;
}

void multiple(int arr[], int size){
	int count = 0;
	int digit = 0;
	cout << "Enter to which digit count multiple: ";
	cin >> digit;
	for (int i = 0; i < size; i++) {
		if (arr[i] % digit == 0) {
			count++;
		}
	}
	cout << "Amount multiple to " << digit << ": " << count << endl;
}

void move(int arr[], int size){

}