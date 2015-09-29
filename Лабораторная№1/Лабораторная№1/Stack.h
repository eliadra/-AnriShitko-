#pragma once

class Steck 
{
	static struct NodeStack  // переменная сохраняет свое состояние между вызовами этой функции.
	{
		double numb;
		NodeStack*next;
	};

	NodeStack*head;
public:
	Steck(); //конструктор
	Steck(Steck&copy); //конструктор копирования
	~Steck(); //деструктор
	void interNumber(double inter); // функция ввода числа
	double outNumber(); // вывод числа
	double getNumber(); 
	void print(); //печатаем
	bool check0(); //проверка на отрицательность
};