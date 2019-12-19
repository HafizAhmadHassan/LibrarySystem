
#include"book.h"
#include"membership.h"
#include<iostream>
#include<conio.h>
using namespace std;
membertype::membertype() {
	for (int i = 0; i<256; i++)
		name[i] = '\0';
	for (int j = 0; j<10; j++) {
		id[j] = 0;
		
		}
	for (int m = 0; m < 100; m++)
	{
		nobb[m] = 0;//no. of books bought

		as[m] = 0;
	}
	m_price = 0;
}
void membertype::show_name() {
	cout << "\n";

	for (int i = 0; i<256; i++)
	{
		cout << name[i];

	}

	cout << "\n";

}

void membertype::set_name(char sname[256]) {
	cout << "Set MEMBER NAME ";

	int i = 0;
	cin >> sname;
	cout << "\n";

	for (int i = 0; i<256; i++) {
		name[i] = sname[i];

	}
	// ;

}

void membertype::update_name(char  upname[256]) {


	cout << "UPDATE NAME :: ";
	cin>>upname;
	cout << "\n";

	for (int i = 0; i<256; i++)
	{
		name[i] = upname[i];
	}
	cout << "\n";
	// ;

}

void membertype::show_id() {
	cout << "ID :: ";

	for (int i = 0; i<10; i++)
	{
		cout << id[i];

	}
	cout << endl;

	// ;

}

void membertype::set_id(int sid[10]) {
	cout << "Set MEMBER ID :: ";


	for (int i = 0; i<10; i++)
	{
		cin >> sid[i];

		sid[i] = id[i];

	}
	
	cout << "\n";

	//   ;

}

void membertype::update_id(int upid[10]) {
	cout << "UPDATE ID :: ";

	for (int i = 0; i<10; i++)
	{
		cin >> upid[i];
		id[i] = upid[i];

	}
	cout << "\n";
//	   

}


void membertype::show_nobb() {

	int sum = 0;
	cout << "NO. OF BOOKS BUY :: ";

	for (int i = 0; i<100; i++) {
		sum = sum + nobb[i];

	}
	cout << sum;

}
void membertype::set_nobb(int & snobb) {
	cout << "Set NO. OF BOOKS BUY :: ";

	cin >> snobb;
	
	for (int i = 0; i<100; i++) {
	
		if (nobb[i] == 0) {
			nobb[i] = snobb;
			break;
		
		}
	
	}
	

}

void membertype::update_nobb(int & upnobb) {

	cout << "UPDATE NUMBER OF BOOKS BOUGHT :: ";

	cin >> upnobb;
	
	for (int i = 0; i < 10;i++) {
	
		if (nobb[i] > 0 && nobb[i + 1]) {

			nobb[i] = upnobb;
			break;
		}
		
	}


}

void membertype::show_as() {
	cout << "TOTAL AMOUNT SPEND :: " << endl;
	int sim = 0;
	for (int i = 0; as[i] != 0; i++) 
	{
		sim = sim + as[i];
	}
	cout << sim;


}
void membertype::set_as(int & sas) {
	cout << "SET AMOUNT SPEND :: ";
	cin >> sas;
	for (int i = 0; i<100; i++) {

		if (as[i] == 0) {
			as[i] = sas;
			break;

		}

	}

}

void membertype::update_as(int & upas) {
	cout << "UPDATE AMOUNT SPEND :: ";
	cin >> upas;
	//int count = 0;
	for (int i = 0; i<100; i++) {

		if (as[i] > 0 && as[i+1]==0) {
			as[i] =upas ;
			break;

		}

	}
	cout << "\n";


}
void membertype::print() {

	cout << "NAME : ";
	for (int i = 0; name[i]!='\0'; i++)
	{
		cout << name[i];
	}
	cout << endl;

	cout << "ID : ";

	for (int j = 0; j<10; j++)
	{
		cout << id[j];
	}

	cout << endl;
	cout << "TOTAL NO. of BOOK BOUGHT : ";
	int sum = 0;
	for (int i = 0; i<100; i++) {
		sum = sum + nobb[i];

	}
	cout << sum << endl;

	show_nobb();

	cout << endl;//no. of books bought

	
	show_as();
}

booktype::booktype() {
	for (int i = 0; i<256; i++) {

		title[i] = '\0';


	}
	for (int i = 0; i<256; i++)

		author[i] = '\0';


	for (int i = 0; i<40; i++)
		publisher[i] = '\0';

	ISBN = 0;

	bprice = 0;

	pyear = 0;

	//publish year

	nocs = 0;
	noa = 0;

}
void booktype::showtitle() {

	cout << "Title is =" << title;
	cout << "\n";


}

void booktype::set_title(char stitle[256]) {
	cout << "Set title of book ";
	cin>>(stitle);
	cout << "\n";

	for (int i = 0; i<256; i++) {
		title[i] = stitle[i];
	}

	cout << "\n";
	//   

}
void booktype::decnocs() {
	
	nocs--;

}
bool booktype::check_title(char check[256]) {

	cout << "Enter your actual title :: ";
	cin>>(check);
	cout << "\n";
	for (int i = 0; i<strlen(check); i++) {
		if (check[i] != title[i]) {

			return false;
		}
	}
	return true;

	//   

}


void booktype::show_nocs() {
	cout << "No. of copies in stock is :: " << nocs;
	cout << "\n";


}
void booktype::set_nocs(int & snocs) {
	cout << "Set Num of Copies in Stock ::  ";
	cin >> snocs;
	nocs = snocs;
	cout << "\n";


}

void booktype::update_nocs(int & upnocs) {
	cout << "Wanna update Copies in Stock ::  "
		;
	cin >> upnocs;
	nocs = upnocs;

	cout << "\n";

}

int booktype::retun_nocs() {

	return nocs;

}


void booktype::show_publisher() {

	cout << "Publisher is :: " << publisher;
	cout << "\n";


}

void booktype::set_publisher(char spublisher[40]) {
	cout << "Enter Publisher Name :: ";
	cin>>(spublisher);
	for (int i = 0; i<strlen(spublisher); i++) {
		publisher[i] = spublisher[i];
	}
	cout << "\n";
	//   

}

void booktype::update_publisher(char upublisher[40]) {

	cout << "Wanna update Publisher :: ";

	cin>>(upublisher);

	for (int i = 0; i<strlen(upublisher); i++) {

		publisher[i] = upublisher[i];

	}

	cout << "\n";

	   

}

char booktype::retun_publisher() {
	
	for (int i = 0; publisher[i] != '\0'; i++) {
		
		return publisher[i];
	}
	


}



void booktype::show_ISBN() {
	cout << "ISBN ::  " << ISBN;
	cout << "\n";

}

void booktype::set_ISBN(int & sISBN) {
	cout << "Wanna Set value :: ";
	cin >> sISBN;
	ISBN = sISBN;
	cout << "\n";

}

void booktype::update_ISBN(int & upISBN) {

	cout << "Enter your desired ISBN  ::  ";
	cin >> upISBN;
	
	cout << "\n";
	
	ISBN = upISBN;

}

int booktype::retun_ISBN() {
	cout << "cant assign";
	
	return ISBN;

}



void booktype::show_bprice() {
	cout << "Price of Book is :: " << bprice;
	cout << "\n";

}

void booktype::set_bprice(int & sbprice) {
	cout << "Wanna Set value :: ";

	cin >> sbprice;
	bprice = sbprice;

	cout << "\n";

}

void booktype::update_bprice(int & upbprice) {
	cout << "Wanna Update book price put value :: ";
	cin >> upbprice;
	bprice = upbprice;
	cout << "\n";

}

int booktype::retun_bprice() {
	return bprice;

}

void booktype::show_author() {
	cout << "Author of book is :: " << author;
	cout << "\n";


}

void booktype::set_author(char sauthor[256]) {

	cout << "Set your DERSIRED AUTHOR :: ";
	cin>>(sauthor);
	cout << "\n";

	for (int i = 0; i<strlen(sauthor); i++) {
		author[i] = sauthor[i];
	}
	//   


}

void booktype::update_author(char upauthor[256]) {
	cout << " Wanna Update Author name put value :: ";

	cin>>(upauthor);

	cout << "\n";

	for (int i = 0; i<strlen(upauthor); i++) {
		author[i] = upauthor[i];
	}

	cout << "\n";

//	cin.clear();

}

void booktype::show_noa() {

	cout << "Number of  Author :::  " << noa;
}

void booktype::set_noa(int & snoa) {
	cout << "Enter number of authors :: ";

	cin >> snoa;
	if (snoa>4) {

		cout << "You cannot enter more than 4 authors :: ";

		set_noa(snoa);
	}
	else {
		noa = snoa;
	}
	cout << "\n";

}
void booktype::update_noa(int & upnoa) {
	cout << "Enter number for update value :: ";
	cin >> upnoa;
	if (upnoa >4) {
		cout << "invalid input";
		update_noa(upnoa);
	}
	else {

		noa = upnoa;
	}


}
int booktype::retun_noa() {
	return noa;

}

int booktype::search_by_ISBN(booktype  obj[],int & ISBN1) {

	cout << "Enter ISBN No. u want to search :: ";
	cin >> ISBN1;
	for (int i = 0; i<10; i++) {
		if (ISBN1 == obj[i].ISBN) {
			return i;

		}
		else {
			return -1;

		}
	}

}

int booktype::search_by_title(booktype   obj[],char search [256]) {
	cout << "Enter Word u want to Search ::  ";
	cin>>(search);
	 ;
	for (int i = 0; i<strlen(search); i++) {
		if (search[i]== obj[i].title[i]) {
			return i;

		}
		else {
			return -1;

		}
	}


}
void booktype::print() {
	cout << "\n";
	cout << "tITILE :: ";

	for (int j = 0; j<256; j++) {


		cout << title[j];

	}

	cout << "\n";
	cout << "AUTHOR :: ";

	for (int k = 0; k<256; k++) {

		cout << author[k];
	}

	cout << "\n";
	cout << "NUMBER OF AUTHORS :: ";
	cout << noa;


	cout << "\n";
	cout << "PUBLISHER :: ";
	for (int i = 0; i<40; i++) {

		cout << publisher[i];


	}
	cout << "\n";
	cout << "PUBLISHING YEAR :: ";

	cout << pyear;


	cout << "\n";

	cout << "ISBN NUMBER:: ";
	cout << ISBN;
	cout << "\n";
	cout << "PRICE :: ";

	cout << bprice;
	cout << "\n";
	//publish year
	cout << "NUMBER OF COPIES IN STOCK :: ";

	cout << nocs;
	cout << "\n";


	

}
int membertype::price_pay() {
	
	m_price=10;

	return m_price;
}
/*bookstore::bookstore() {
	
	bmember = new booktype();

	
	member = new membertype();

	
	nonmember = new booktype();

	ptr = new bookstore();

}
bool bookstore::criteria() {


	int w = member->price_pay();
	if (w == 10)
	{
		return true;
	}

	return false;

}
*/