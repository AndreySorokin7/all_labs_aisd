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
	this.size = n;
	T* mas = new T[this.size];
	this->top = 0;
}
template <class T>
TStack<T>::TStack(TStack<T>& stack) {
	this.size = stack.size;
	T* mas = new T[this.size];
	this->top = stack.top;
}
