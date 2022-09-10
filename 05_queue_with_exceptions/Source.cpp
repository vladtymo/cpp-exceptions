#include "Queue.h"
#include "Queue.cpp"
#include <ctime>
#include <cstdlib>
#include "iostream"
#include <conio.h>

void main()
{
	srand(time(0));

	// Створення черги
	Queue<int> q(5);

	// Добавляємо 5 елементів в чергу
	for (int i = 0; i < 5; i++)
		q.Enqueue(rand() % 30);

	try
	{
		q.Enqueue(10);
		q.Enqueue(10);
		q.Enqueue(10);
	}
	catch (exception& ex)
	{
		cout << ex.what() << endl;
	}

	// Показ черги
	q.Show();
	// Вилучення елемента
	std::cout << "Element: " << q.Dequeue() << std::endl;
	// Показ черги
	q.Show();

	while (!q.IsEmpty())
	{
		std::cout << "Element: " << q.Dequeue() << std::endl;
		_getch();
	}

	try
	{
		std::cout << "Element: " << q.Dequeue() << std::endl;
	}
	catch (exception& ex)
	{
		cout << ex.what() << endl;
	}
	

	system("pause");
}