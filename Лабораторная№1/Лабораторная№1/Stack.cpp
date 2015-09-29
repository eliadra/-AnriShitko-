#include"stdafx.h"
#include"stack.h"
#include<iostream>

using namespace std;

Steck::Steck() 
{
	head = 0;
	int l = rand() % 5 + 1;
	while (l--)
	{
		interNumber (rand() % 13 - 2);
	}
}

Steck::Steck(Steck&copy) 
{
	NodeStack*temp = copy.head;
	while (temp != 0)
	{
		interNumber (temp->numb);
		temp = temp->next;
	}
}

Steck::~Steck()
{
	NodeStack*temp = head;
	while (temp != 0)
	{
		NodeStack*del = temp;
		temp = temp->next;
		delete del;
	}
}

double Steck::getNumber() //получаем число
{
	if (head)
	{
		return head->numb;
	}
	else
	{
		return NULL;
	}
}

double Steck::outNumber() 
{
	double temp = head->numb;
	NodeStack*del = head;
	head = head->next;
	delete del;
	return temp;
}

void Steck::interNumber(double inter)
{
	NodeStack*temp = head;
	head = new NodeStack;
	head->numb = inter;
	head->next = temp;
}

void Steck::print()
{
	NodeStack*temp = head;
	while (temp != 0)
	{
		cout << temp->numb;
		temp = temp->next;
		if (temp)
		{
			cout << " ";
		}
	}
}

bool Steck::check0() // проверка на отрицательность
{
	NodeStack*temp = head;
	while (temp)
	{
		if (temp->numb < 0)
		{
			return 1;
		}
		temp = temp->next;
	}
	return 0;
}