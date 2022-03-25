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
		cout << "선택: ";
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
			cout << "다시 선택해주세요" << endl;
		}
	}
	return 0;
}

void ShowMenu()
{
	cout << "-----Menu-----" << endl;
	cout << "1. 상품추가" << endl;
	cout << "2. 상품조회" << endl;
	cout << "3. 종료" << endl;
}

void AddProd()
{
	char product[NAME_LEN];
	char name[NAME_LEN];
	int price;

	cout << "물품 추가" << endl;
	cout << "물품: "; cin >> product;
	cout << "물품가격: "; cin >> price;
	cout << endl;
}

void SrchProd()
{

}