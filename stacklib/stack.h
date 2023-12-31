#pragma once


#include <iostream>

using namespace std;
template <class T>
class TStack {
protected:
    int size;
    int top;
    T* mas;
public:
    TStack(int n = 1);
    TStack(TStack<T>& stack);
    ~TStack();
    void Push(T a);
    T Get();
    T TopView();

    int GetSize();
    int GetTop();

    //��������� ����� � ������

    bool IsFull();
    bool IsEmpty();
    void printstack();

    TStack& operator=(const TStack<T>& stack);
    friend ostream& operator<< (ostream& ostr, const TStack<T>& A);
    friend istream& operator>> (istream& istr, TStack<T>& A);
};
template <class T>
ostream& operator<< (ostream& ostr, const TStack<T>& A) {
    for (int i = 0; i < A.top; i++) {
        ostr << A.mas[i] << "\n";
        ostr << endl;
    }
    return ostr;
}
template <class T>
istream& operator>> (istream& istr, TStack<T>& A) {
    for (int i = 0; i < A.size; i++) {
        istr >> A.mas[i];
    }
    return istr;
}


//template <class T1>
//ostream& operator<< (ostream& ostr, const Vector<T1> &A) {
//  for (int i = 0; i < A.length; i++) {
//    ostr << A.x[i] << endl;
//  }
//  return ostr;
//}
//
//template <class T1>
//istream& operator >> (istream& istr, Vector<T1> &A) {
//  for (int i = 0; i < A.length; i++) {
//    istr >> A.x[i];
//  }
//  return istr;
//}

