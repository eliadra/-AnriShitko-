#pragma once

class Steck 
{
	static struct NodeStack  // ���������� ��������� ���� ��������� ����� �������� ���� �������.
	{
		double numb;
		NodeStack*next;
	};

	NodeStack*head;
public:
	Steck(); //�����������
	Steck(Steck&copy); //����������� �����������
	~Steck(); //����������
	void interNumber(double inter); // ������� ����� �����
	double outNumber(); // ����� �����
	double getNumber(); 
	void print(); //��������
	bool check0(); //�������� �� ���������������
};