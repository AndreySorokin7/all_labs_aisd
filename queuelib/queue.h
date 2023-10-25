#ifndef _MY_VECTOR_
#define _MY_VECTOR_

#include <iostream>

using namespace std;

template <class T>
class TQueue : {
protected:
	int size;
	int ind;
	int end;
	int count;
	T* mas;

public:
	TQueue(int n = 0);
	TQueue(TQueue <T>& q);
	~TQueue();

	void Push(T a);
	T Get();

	bool IsFull();
	bool IsEmpty();

	//операторы вводы и выводы
};


#endif