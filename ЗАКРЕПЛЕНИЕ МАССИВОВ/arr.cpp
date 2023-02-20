#include <iostream>
#include <cstdlib>  // arr[i] = rand() % (10 + 1 - 1) + 1; // [1 ...10] Случайные числа  массива
#include <ctime> //srand(time(NULL)); Случайные числа  массива
#include <algorithm> // функция  stor  Быстрая сортировка std::sort(arr, arr + size);  
// функцию swap Сортировка через сравнениемассивов std::swap(arr[j], arr[j + 1]);

int main() {
	setlocale(LC_ALL, "Rus");

	/*Task 1
		In a one - dimensional array with a size of 10 elements
		find the arithmetic mean.Also count
		number of elements whose value is less
		found arithmetic mean.*/
	const int size = 10;
	int arr[size];
	std::cout<<"Initial mass:\n";
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % (50 + 1 - 0) + 0; //[0...50]
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;	
	//Find the arithmetic mean.	
	std::cout<<"Find the arithmetic mean.\n";
	int sum = 0;
	int counter = 0;
	for (int i = 0; i < size; i++) {		
		sum += arr[i];		
	}
	std::cout << (double) sum / size << "\n";
	// The count number of elements, whose value is less found arithmetic mean.
	for (int i = 0; i < size; i++) {		
		if (arr[i] < (double) sum / size)
			counter++;
	}
	std::cout << "Elements in the array : " << counter << " hat are less than " << (double) sum / size << " the given arithmetic mean.\n";
	std::cout << std::endl;


	/*Task 2
		Given two two - dimensional arrays of size 5 by 5
		elements.You need to put them together.
		Print the results of pairwise addition to the console
		elements of both arrays, which are located in
		the same coordinates.*/

	const int size1 = 5;
	int arr1[size1][size1];
	
	std::cout << "Initial mass1:\n";
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size1; j++) {
			arr1[i][j] = rand() % (10 + 1 - 1) + 1; // [1 ...10]
			std::cout << arr1[i][j] << '\t';
		}
		std::cout << "\n\n";
	}
	const int size2 = 5;
	int arr2[size2][size2];
	std::cout << "Initial mass2:\n";
	
	for (int i = 0; i < size2; i++) {
		for (int j = 0; j < size2; j++) {
			arr2[i][j] = rand() % (10 + 1 - 1) + 1; // [1 ...10]
			std::cout << arr2[i][j] << '\t';
		}
		std::cout << "\n\n";
	}
	//Outputting the result of pairwise addition
	std::cout << "Outputting the result of pairwise addition:\n";
	
	for (int i = 0; i < 1; i++) {
		for (int i = 0; i < size2; i++) {
			for (int j = 0; j < 1; j++) {
				for (int j = 0; j < size2; j++) {				 
					sum = arr1[i][j] + arr2[i][j];
					std::cout << sum << '\t';
				}
					std::cout << "\n\n";
			}
		}
	}

	/*Task 3
		The user enters a six - digit number.If
		the number is entered incorrectly, the program ends its
		work.Otherwise, the program in a loop puts all of it
		numbers into a one - dimensional array of 6 elements and
		brings it to the screen.*/
	int n;
	std::cout << "Enters a six - digit number -> ";
	std::cin >> n;
   



	return 0;
}