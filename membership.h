#include<iostream>

using namespace std;

class membertype {

private:
	char name[256];

	int id[10];

	int nobb[100];//no. of books bought

	int as[100];

	int m_price;
	
	public:


	membertype();

	void show_name();

	void set_name(char[256]);

	void update_name(char[256]);

	void show_id();

	void set_id(int[10]);

	void update_id(int[10]);

	void show_nobb();

	void set_nobb(int &);

	void update_nobb(int &);

	void show_as();

	void set_as(int &);

	void update_as(int &);
	
	int price_pay();
	
	void print();
};
class bookstore :public membertype,public booktype {
	bool m;
	int count_book;
public:

	bookstore() {
	
		m = true;
		count_book = 0;
	}
	void setmem() {
		
		int i;
		cin >> i;

		if (i == 1) {
			m = true;
		
		}
		else {
		
			m = false;
		}
	
	}
	bool getm() {
	
	
		return m;

	}

	bool criteria() {
		int a = price_pay();
		if (a > 0 && m==true)
		{
			return true;

		}
		else
			{
				return false;

		}
	}
	int discount() {
		if (m == true) {
			int d = retun_bprice();
			int s = d / 100 * 20;
			return d - s;
		}
		else {
			return 0;
		
		}

	}

	void offer() {
		
		bool p = criteria();
		if (p == true && m==true) {
			int r = discount();

			cout << "offer price is " << r;
		}
		

	}

	void purchase() {
	
		count_book++;
	
	}

	void reset_amount() {
	
		int i = 0;
		if (count_book == 10) {
		
			membertype::set_as(i);
		
		}
	
	
	}
	//11111111111void average();

	
	void nonmem_purchase() {
		bool p = criteria();

		if (p == false && m==false) {
		
			int a = booktype::retun_bprice();

			cout << a;
		
		}
	
	
	}

};