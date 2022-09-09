#ifndef VECTOR_H
#define VECTOR_H

//prototypes
template <typename T> class vector131 {
public:
	int storage_limit;
	int current_storage;
	T* arr;
	vector131();
	~vector131();
	void push_front(T var);
	void push_back(T var);
	void resize(int size);
	void resize(int size, T var);
	void print();
	int size();
};

#endif