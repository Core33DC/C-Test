#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
using namespace std;

const int NAME_LEN = 40;

void ShowMenu();
void AddProd();
void SrchProd();

enum {ADD=1, SEARCH, EXIT};
enum {BOOK=1, COMPACTDISC, PHONE};

//static ���� �ʱ�ȭ
int ProductHandler::idx = 0;

//������
ProductHandler::ProductHandler()
{
	for (int i = 0; i < 100; i++)
		pobj[i] = { 0 };
}

//�Ҹ���
ProductHandler::~ProductHandler()
{
	for (int i = 0; i < idx; i++)
		delete pobj[i];
}

class Product
{
private:
	int price;
	string description;
public:
	Product(int price, string description);
	virtual void getProduct();
	virtual string ProductInfo();
};

class Book :public Product
{
private:
	string title;
	string writer;
	string publisher;
public:
	virtual void getProduct();
	virtual string ProductInfo();
};

class CD :public Product
{
private:
	string title;
	int playtime;
	string singer;
public:
	CD(int price, string description, string title, int playtime, string singer);
	virtual void getProduct();
	virtual string ProductInfo();
};

class Cellphone :public Product
{
private:
	string model;
	string manufacture;
public:
	Cellphone(int price, string description, string model, string manufacture);
	virtual void getProduct();
	virtual string ProductInfo();
};

class ProductHandler
{
private:
	Product* pobj[100];
	static int idx;
public:
	ProductHandler();
	~ProductHandler();
	void ShowMenu(void) const;
	void AddProd(void);
	void SrchProd(void);
protected:
	void ProdAddBook();
	void ProdAddCD();
	void ProdAddPhone();
	void ShowAllBookInfo(void) const;
	void ShowAllCDInfo(void) const;
	void ShowAllCellPhonInfo(void) const;
};


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
	int sel;

	cout << "��ǰ �߰�" << endl;
	cout << "1. å" << endl;
	cout << "2. �õ�" << endl;
	cout << "3. �ڵ���" << endl;
	cout << "$: "; cin >> sel;
	
	if (sel == BOOK)
		ProdAddBook();
	else if (sel == COMPACTDISC)
		ProdAddCD();
	else if(sel == PHONE)
		ProdAddPhone();
}

void SrchProd()
{
	int sel;
	
	cout << "��ȸ��ǰ ����: " << endl;
	cout << "1. å" << endl;
	cout << "2. �õ�" << endl;
	cout << "3. �ڵ���" << endl;
	cout << "$: "; cin >> sel;

	if (sel == BOOK)
		ShowAllBookInfo();
	else if (sel == COMPACTDISC)
		ShowAllCDInfo();
	else if (sel == PHONE)
		ShowAllPhoneInfo();
}

void ProdAddBook()
{
	int price;
	string title;
	string writer;
	string publisher;

	cout << "Title: "; cin >> title;
	cout << "Writer: "; cin >> writer;
	cout << "Pulisher: "; cin >> publisher;
	cout << endl;

	idx++ = new Book(title, writer, publisher);
}

void ProdAddCD()
{
	string title;
	int playtime;
	string singer;

	cout << "Title: "; cin >> title;
	cout << "Playtime: "; cin >> playtime;
	cout << "Singer: "; cin >> singer;
	cout << endl;

	idx++ = new CD(title, playtime, singer);
}

void ProdAddPhone()
{
	string model;
	string manufacture;

	cout << "Model: "; cin >> model;
	cout << "Manufacture: "; cin >> manufacture;
	cout << endl;

	idx++ = new Cellphone(model, manufacture);
}

void ShowAllBookInfo(void)
{

}
void ShowAllCDInfo(void)
{

}
void ShowAllPhoneInfo(void)
{

}