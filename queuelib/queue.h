#ifndef _MY_VECTOR_
#define _MY_VECTOR_

#include <iostream>

using namespace std;

template <class T>
class TQueue  {
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

	friend std::ostream& operator<<(std::ostream& os, const TQueue<T>& q) {
		for (int i = q.start, j = 0; j < q.count; ++j, i = (i + 1) % q.size) {
			os << q.mas[i] << " ";
		}
		return os;
	}

	friend std::istream& operator>>(std::istream& is, TQueue<T>& q) {
		for (int i = 0; i < q.size; i++) {
			istr >> q.mas[i];
		}
		return istr;
	}
};


#endif