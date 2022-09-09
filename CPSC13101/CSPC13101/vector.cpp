#include "vector.h"
#include <iostream>
using namespace std;

//construct a dynamic array with a fixed size of 1 
//int storage_limit keep track of the size of the array
//current_storage keep track of the amount of elements is in the array
template<typename T>
vector131<T>::vector131()
{
	arr = new T[1];
	storage_limit = 1;
	current_storage = 0;
}

//destructor for deleting arr;
template<typename T>
vector131<T>::~vector131()
{
	delete[] arr;
}

//put an element at the first index of an array
template<typename T>
void vector131<T>::push_front(T var) {
	//create a temporary array
	//Put the value from the argument var into the temporary array, making it first index
	//add the rest of the values from original array
	//delete original arr, increase size of the original array by 1
	//finally reassign temp arr to the original arr
	//increase storage by 1
	if (current_storage == storage_limit) {
		T* temp_arr = new T[2 * storage_limit];
		temp_arr[0] = var;
		for (int i = 0; i < current_storage; i++) {
			temp_arr[i + 1] = arr[i];
		}
		delete[] arr;
		storage_limit++;
		arr = temp_arr;
	}
	else {
		T* temp_arr = new T[storage_limit];
		temp_arr[0] = var;
		for (int i = 0; i < current_storage; i++) {
			temp_arr[i + 1] = arr[i];
		}
		delete[] arr;
		arr = temp_arr;
	}
	current_storage++;
}



//put an element at the end of the array
template<typename T>
void vector131<T>::push_back(T var)
{
	//create a temporary array
	//add all the values of the original array into the temporary arr
	//delete the original array
	//reassign the temporary arr into the now cleared original arr
	//add var argument to the end of the array
	if (current_storage == storage_limit) {
		T* temp_arr = new T[2 * storage_limit];
		for (int i = 0; i < current_storage; i++) {
			temp_arr[i] = arr[i];
		}
		delete[] arr;
		storage_limit++;
		arr = temp_arr;
	}
	arr[current_storage] = var;
	current_storage++;
}

//resize array
template<typename T>
void vector131<T>::resize(int size)
{
	//if resize to smaller
	//reduce the amount of element you can access in the array
	if (size < current_storage) {
		;
		for (int i = 0; current_storage != size; i++) {
			current_storage--;
		}
	}
	//if resize to bigger
	//create temporary array that is twice the size and fill it with elements in the original array
	//delete original array and reassign temporary array to the original
	//fill up the newly added space in the original array with the value 0
	else {
		storage_limit = size;
		T* temp_arr = new T[size * 2];
		for (int i = 0; i < current_storage; i++) {
			temp_arr[i] = arr[i];
		}
		delete[] arr;
		arr = temp_arr;
		for (int i = current_storage; i < size; i++) {
			arr[i] = 0;
		}
		current_storage = size;
	}
}

//if resize to smaller
//reduce the amount of element you can access in the array
template<typename T>
void vector131<T>::resize(int size, T var)
{
	if (size < current_storage) {
		;
		for (int i = 0; current_storage != size; i++) {
			current_storage--;
		}
	}
	//if resize to bigger
	//create temporary array that is twice the size and fill it with elements in the original array
	//delete original array and reassign temporary array to the original
	//fill up the newly added space in the original array with the value of var
	else {
		storage_limit = size;
		T* temp_arr = new T[size * 2];
		for (int i = 0; i < current_storage; i++) {
			temp_arr[i] = arr[i];
		}
		delete[] arr;
		arr = temp_arr;
		for (int i = current_storage; i < size; i++) {
			arr[i] = var;
		}
		current_storage = size;
	}
}

//Print out all the elements inside the vector
template<typename T>
void vector131<T>::print()
{
	for (int i = 0; i < current_storage; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

//Get the number of elements inside the vector
template<typename T>
int vector131<T>::size()
{
	return current_storage;
}