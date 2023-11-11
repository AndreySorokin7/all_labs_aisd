#pragma once
#include <math.h>

#include "stack.h"
template <class T>
void TStack<T>:: Push (T a) {
	if (IsFull())throw "StackFull";
	this->mas[top] = a;
	top++;
}
template <class T>
T TStack<T>::Get() {
	if (IsEmpty())throw "StackEmpty";
	top--;
	return mas[top];
}
template <class T>
TStack<T>::TStack(int n = 1) {
	if (n < 0)
		throw "Error size" ;
	else
		if (n == 0) {
			size = 0;
			top = 0;
		}
		else {
			size = n;
			mas = new T[n];
			top = 0;
		}
}
template <class T>
void TStack<T>::printstack()
{
	for (int i = top - 1; i >= 0; i--)
		cout << " " << mas[i];
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
	return (top >= size);
}


template <class T>
int TStack<T>::GetSize()
{
	return size;
}

template <class T>
int TStack<T>::GetTop()
{
	return top;
}
template <class T>
T TStack<T>::TopView()
{
	return mas[top];
}
template <class T>
TStack<T>& TStack<T>::operator=(const TStack<T>& a)
{
	if (this != &a)
	{
		delete[] mas;
		top = a.top;
		size = a.size;
		mas = new T[size];
		for (int i = 0; i < size; i++)
			mas[i] = a.mas[i];
	}
	return *this;
}
