//const int size = 10;
//int arr[size] = { 10,5,7,11,45,6,8,2,3,6 };

//Buble Бульбашкою
/*for (int i = 0; i < size-1; i++) {
	for (int j = 0; j < size-i-1; j++) {
		if (arr[j] > arr[j + 1]) {
			int temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
	}
}*/
//Select Вибіркою
/*for (int i = 0; i < size; i++) {
	for (int j = i+1; j < size; j++) {
		if (arr[i]>arr[j]) {
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
}*/
//Insert Вставкою
/*int temp;
int indexPrev;
for (int i = 1; i < size; i++) {
	temp = arr[i];
	indexPrev = i - 1;
	while (arr[indexPrev] > temp && indexPrev>=0) {
		arr[indexPrev + 1] = arr[indexPrev];
		arr[indexPrev] = temp;
		indexPrev--;
	}
}*/
//SHOW
//show(arr, size);

#include"Header.h"

using namespace std;

int main() {
	srand(time(0));
	const int size = 10;
	int arr[size];
	int choose = 0;
	/*for (int i = 0; i < 100; i++) {
		arr[i] = 0;
	}*/
	do {
		cout << "1. Full array with random" << endl;
		cout << "2. Show array" << endl;
		cout << "3. Search evelment" << endl;
		cout << "4. Sort" << endl;
		cout << "5. Avarage" << endl;
		cout << "6. Count Multiple" << endl;
		cout << "7. Move" << endl;
		cout << "8. Exit" << endl;
		cout << "\t Choose: ";
		cin >> choose;
		switch(choose){
		case 1:
			fill(arr, size);
			break;
		case 2:
			show(arr, size);
			break;
		case 3:

			break;
		case 4:
			sort(arr, size);
			break;
		case 5:

			break;
		case 6:

			break;
		case 7:

			break;
		case 8: 
			cout << "Bye";
			system("pause");
			return 0;
			break;
		}
	} while (true);
}