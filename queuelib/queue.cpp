#include <math.h>
#include "queue.h"

template <class T>
TQueue<T>::TQueue(int n = 0) {
	if (n < 0)
		throw "Error size";
	else
		if (n == 0) {
			size = 0;
			ind = 0;
			end = 0;
			count = 0;
		}
		else {
			size = n;
			mas = new T[n];
			ind = 0;
			end = 0;
			count = 0;
		}
}

template <class T>
TQueue<T>::TQueue(TQueue <T>& q) {
  size = q.size;
  ind = q.ind;
  end = q.end;
  count = q.count;
  mas = new T[size];
  for (int i = 0; i < size; ++i) {
	  mas[i] = q.mas[i];
  }		
}

template <class T>
TQueue<T>::~TQueue() {
	delete[] mas;
}
template <class T>
void TQueue<T>::Push(T a) {
    if (!IsFull()) {
        mas[end] = a;
        end = (end + 1) % size;
        count++;
    }
    else {
        throw "Error size";
    }
}
template <class T>
T TQueue<T>::Get() {
    if (!IsEmpty()) {
        T a = mas[ind];
        ind = (ind + 1) % size;
        count--;
        return a;
    }
    else {
        throw "Error size";
    }
}
template <class T>
bool TQueue<T>::IsFull(){
    return count == size;
}
template <class T>
bool TQueue<T>::IsEmpty() {
    return count == 0;
}
