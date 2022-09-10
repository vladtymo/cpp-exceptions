#include "Queue.h"
#include <iostream>
#include <exception>
using namespace std;

template <class T>
Queue<T>::Queue(int maxSize)
{
	// Отримуємо максимальний розмір черги
	this->maxSize = maxSize;
	// Створюємо черу
	data = new T[maxSize];
	// На початку черга порожня
	size = 0;
}
template <class T>
Queue<T>::~Queue()
{
	// Видалення черги
	delete[]data;
}

template <class T>
void Queue<T>::Enqueue(T elem)
{
	// Якщо черга має місце,
	// тоді добавляємо новий елемент
	// і змільшуємо розмір черги
	if (!IsFull())
		data[size++] = elem;
	else
		throw exception("Queue is full!");
}

template <class T>
T Queue<T>::Dequeue()
{
	// Якщо черга порожня, тоді генеруємо exception
	if (IsEmpty()) throw exception("Queue is empty!");
	
	// Зберігаємо перший елемент
	T first = data[0];
	// Підсовуємо всі елементи
	for (int i = 1; i < size; i++)
	{
		data[i-1] = data[i];
	}

	// Проста черга
	--size;						// зменшуємо розмір черги

	// Кільцева черга
	//data[size - 1] = first;	// переносимо перший елемент вкінець
								// не змінюючи розмір черги

	return first;				// повертаємо збережений елемент
}

template <class T>
bool Queue<T>::IsEmpty() const
{
	// Порожня?
	return size == 0;
}

template <class T>
bool Queue<T>::IsFull() const
{
	// Максимально заповнена?
	return size == maxSize;
}

template <class T>
int Queue<T>::GetCount() const
{
	// Розмір черги
	return size;
}

template <class T>
void Queue<T>::Clear()
{
	// Очистка черги
	size = 0;
}

template <class T>
void Queue<T>::Show() const
{
	std::cout << "\n-----------------------------------\n";
	// Показ черги
	for (int i = 0; i < size; i++)
		std::cout << data[i] << " ";
	std::cout << "\n-----------------------------------\n";
}
