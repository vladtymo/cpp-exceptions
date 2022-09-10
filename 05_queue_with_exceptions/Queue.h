#pragma once

// Черга - динамічна структура даних, що представляє із
// себе упорядкований набір елементів, в якій діє принцип
// FIFO (First In First Out) або «перший прийшов перший пішов»
template <class T>
class Queue
{
	// Черга
	T * data;
	// Максимальний розмір черги
	int maxSize;
	// Теперішній розмір черги
	int size;

public:
	Queue() = default;
	// Конструктор
	Queue(int maxSize);
	// Деструктор
	~Queue();

	// Добавлення елемента в чергу
	void Enqueue(T elem);
	// Вилучення елемента з черги
	T Dequeue();
	// Перевірка чи черга є порожньою
	bool IsEmpty() const;
	// Перевірка чи черга є повна
	bool IsFull() const;
	// Кількість елементів в черзі
	int GetCount() const;
	// Очистка черги
	void Clear();
	// Показ елементів в черзі
	void Show() const;
};
