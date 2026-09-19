

#include <iostream>
using namespace std;



void initArr(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

void showArr(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		
		cout << arr[i] << " ";
		
	}
	cout << endl;
}



void selectSort(int arr[], int size) {
	int temp, index;
	for (int i = 0; i < size; i++)
	{
		index = i;
		temp = arr[i];
		for (int j = i+1; j < size; j++)
		{
			if (arr[j]<temp)
			{
				temp = arr[j];
				index = j;
			}
		}
		if (index != i)
		{
			arr[index] = arr[i];
			arr[i] = temp;
		}
	}
}

void bubble(int arr[], int size) {
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = size-1; j < i; j--)
		{
			if (arr[j-1]>arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1]=arr[j];
				arr[j] = temp;
			}
		}

	}
}

void shaker(int arr[], int size) {
	int j, index = size - 1;
	int left = 1;
	int right = size-1;
	int temp;
	do
	{
		for ( j = right; j >= left; j--)
		{
			if (arr[j-1]>arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
			index = j;
		}
		left = index + 1;
		for ( j = left; j <= right; j++)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
			index = j;
		}
		right = index - 1;
	} 
	while (left<right);
}


void bubble0(int arr[], int size); 
void bubble1(int arr[], int size); 

void choose(int arr[], int size, int parametr) {
	if (parametr == 0)
	{
		bubble0(arr, size);
	}
	else if (parametr == 1)
	{
		bubble1(arr, size);

	}
	showArr(arr, size);
}

void initArr1(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 40 -20;
	}
}


int findStart(int arr[], int size) {
	int start = -1;
	for (int i = 0; i < size; i++)
	{
		if (arr[i]<0)
		{
			return i;
		}
	}
	return -1;
	
}
int findEnd(int arr[], int size) {
	int end = -1;
	for (int i = size - 1; i >= 0; i--)
	{
		if (arr[i] < 0)
		{
			return i;
		}
	}
	return -1;
}



void bubbleSE(int arr[], int start,int end) {
	int temp;
	for (int i = start; i < end; i++)
	{
		for (int j = end; j > i; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}

	}
}
void initArr2(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = i+1;
	}
	for (int i = 0; i < size; i++)
	{
		int j = rand() % size;

		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}

int linearSearch(int arr[], int size, int key) {

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}
	return -1;
}

void bubble0(int arr[], int size) { //за зростанням 
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}

	}
}
void bubble1(int arr[], int size) { //за спаданням
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j - 1] < arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}

	}
}

void incr(int arr[], int size, int index) {
	int temp; 
	for (int i = index+1; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void dcr(int arr[], int size, int index) {
	int temp;
	for (int i = 0; i < index-1; i++)
	{
		for (int j = index - 1; j > i; j--)
		{
			if (arr[j - 1] < arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void showIndexArr(int arr[], int size,int index) {
	for (int i = 0; i < size; i++)
	{
		if (i==index)
		{
			cout << "[" << arr[i] << "]";
		}
		else
		{
			cout << arr[i] << " ";
		}
	}
	cout << endl;
}
int main()
{
	srand(time(0));

	//const int size = 10;
	//int arr[size];
	// 
	//initArr(arr, size);
	//showArr(arr, size);

	//cout << endl;

	/*bubble(arr, size);*/
	//shaker(arr, size);
	//showArr(arr, size);



	/*selectSort(arr, size);
	showArr(arr, size);*/


	/*int search, indexFind;
	cout << "enter search key" << endl;
	cin >> search;
	indexFind = linearSearch(arr, size, search);
	if (indexFind!=-1)
	{
		cout << "element [" << search << "] found in index [" << indexFind << "]" << endl;
	}
	else
	{
		cout << "element " << search << " not found" << endl;
	}*/





	//1
	
	/*const int size = 10;
	int arr[size];
	 
	initArr(arr, size);
	showArr(arr, size);

	int parametr;
	cout << "0-increase sort|1-decrease sort" << endl;
	cin >> parametr;

	choose(arr, size, parametr);*/


	//2 start=1 end neg num-1


	//const int size = 20;
	//int arr[size];

	//initArr1(arr, size);
	//showArr(arr, size);

	//int start = findStart(arr, size);
	//int end = findEnd(arr, size);

	//cout << "start = " << start << endl;
	//cout << "end = " << end << endl;

	//cout << endl;

	//bubbleSE(arr, start, end);
	//showArr(arr, size);

	//3

	const int size = 20;
	int arr[size];

	initArr2(arr, size);
	showArr(arr, size);

	int key = rand() % 20 + 1;
	int index = linearSearch(arr, size, key);

	cout << "random num is " << key << endl;
	cout << "its index: " << index << endl;

	incr(arr, size, index);
	dcr(arr, size, index);

	showIndexArr(arr, size,index);

}