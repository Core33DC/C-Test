#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
using namespace std;

const int NAME_LEN = 40;

void ShowMenu();
void AddProd();
void SrchProd();

enum {ADD=1, SEARCH, EXIT};

//class Product
//{
//private:
//
//public:
//
//};
//
//class Book :public Product
//{
//
//};
//
//class CD :public Product
//{
//
//};
//
//class Cellphone :public Product
//{
//
//};



int main(void)
{	
	int choice;

	while (1)
	{
		ShowMenu();
		cout << "����: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case ADD:
			AddProd();
			break;
		case SEARCH:
			SrchProd();
			break;
		case EXIT:
			return 0;
		default:
			cout << "�ٽ� �������ּ���" << endl;
		}
	}
	return 0;
}

void ShowMenu()
{
	cout << "-----Menu-----" << endl;
	cout << "1. ��ǰ�߰�" << endl;
	cout << "2. ��ǰ��ȸ" << endl;
	cout << "3. ����" << endl;
}

void AddProd()
{
	char product[NAME_LEN];
	char name[NAME_LEN];
	int price;

	cout << "��ǰ �߰�" << endl;
	cout << "��ǰ: "; cin >> product;
	cout << "��ǰ����: "; cin >> price;
	cout << endl;
}

void SrchProd()
{

}