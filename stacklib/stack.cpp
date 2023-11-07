#include <math.h>

#include "stack.h"
template <class T>
void TStack<T>:: Push (T a) {
	if (IsFull())throw "StackFull";
	this.mas[top] = a;
	this.top++;
}
template <class T>
T TStack<T>::Get() {
	if (IsEmpty())throw "StackEmpty";
	this.top--;
	return this.mas[top];
}
template <class T>
TStack<T>::TStack(int n = 0) {
	if (n < 0)
		throw MyException("Error size");
	else
		if (n == 0) {
			this.size = 0;
			mas = 0;
			this->top = 0;
		}
		else {
			this.size = n;
			T* mas = new T[this.size];
			this->top = 0;
		}
}
template <class T>
TStack<T>::TStack(TStack<T>& stack) {
	this.size = stack.size;
	T* mas = new T[this.size];
	for (int i = 0; i < this.size i++)
		mas[i] = stack.mas[i];
	this->top = stack.top;
}
template <class T>
TStack<T> :: ~TStack() {
	if (mas!= 0)
		delete[] mas;

	top = 0;
	size = 0;
}

template <class T>
bool TStack<T>::IsEmpty() {
	return (top == 0);
}


//проверка на пустоту
template <class T>
bool TStack<T>::IsFull() {
	return (top >= leng);
}


template <class T>
int TStack<T>::GetSize()
{
	return size;
}

