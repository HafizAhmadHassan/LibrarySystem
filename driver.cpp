#include<iostream>
#include<conio.h>
#include<windows.h>
#include"book.h"
#include"membership.h"


using namespace std;
void main() {
	
	bookstore type1[10];

	//membertype type2[10];
	
	bookstore type[20];

	char sname[256];

	char upname[256];

	
	int sid[10];

	int upid[10];

	int n = -1;

	char stitle[256];

	char sauthor[256];

	char upauthor[256];

	int m = 8;

	int n1 = 9;

	int o,a;

	bool p = true;

	char spublisher[40];

	char upublisher[40];

	int i;

	int choice=0;
	
s1:cout << "Enter Your Index choice to Access Member Type or Book Type :: ";

	cin >> i;

	cout << ":: Are You Member ??  Press 1 or 0 ??::";
	type1[i].setmem();
	system("cls");

	while (choice!=-1) {
		
		cout << "Press Number According to following details :\n";
		cout << "1. Print Book details :\n 2. Show Member Name\n 3.Set Member Name\n 4.Update Member Name \n 5.Show ID \n";
		cout << "6. Set ID : \n 7. Update ID \n 8. Show Number Of BOOKS BUYS :\n 9 Set NUMBER OF BOOKS BUY \n 10.UPDATE NUMBER OF BOOKS BOUGHT \n";
		cout << "11. Show Amount Spend :\n 12.Set Amount Spend \n 13.Update Amount Spend \n 14. Print Member Details \n";
		cout << "15. Show Title \n 16. Set Title \n17. Check Title \n 18. Show PUBLISHER \n19.SET PUBLISHER \n 20. Update PUBLISHER\n21. Show No. OF COPIES IN STOCK :\n 22.Set No. OF COPIES IN STOCK :\n";
		cout << "23. Update NUMber OF COPIES IN STOCK :\n 24. Returning Value of N O C S  NUMBER \n25.Show ISBN \n26.Set ISBN\n";
		cout << "27. Update ISBN \n 28.Returning Value of I S B N: \n 29.Show Author \n30. Set Author : \n 31. Update Author \n ";
		cout << "\n32. Change Index ";
		cout << endl;
		//char choice;
		cin >> choice;
		
		switch (choice) {

		//case 1: 
			//type1[i].print();
	
		//	break;
			
		case 2:

			type1[i].show_name();

			break;
		case 3:

			type1[i].set_name(sname);

			break;
		case 4:


			type1[i].update_name(upname);

		break;
		case 5:

			type1[i].show_id();

			break;
		case 6:

			type1[i].set_id(sid);

			break;
		case 7:

			type1[i].update_id(upid);

			break;
		case 8:
			
			type1[i].show_nobb();

			break;
		case 9:
		
			type1[i].set_nobb(n);

			break;
		case 10:

			
			type1[i].update_nobb(n);

			break;
		case 11:
		
			type1[i].show_as();
			
			break;
		case 12:

			type1[i].set_as(n);

			break;
		case 13:
			
			type1[i].update_as(n);

			break;
	//	case 14:
			
		//	type1[i].print();

			//break;
		case 15:

			type[i].showtitle();

			break;
		case 16:

			type[i].set_title(stitle);

			break;
		case 17:
	 
			p = type[i].check_title(stitle);

			
			cout << p << endl;
			break;

		case 18:
			type[i].show_publisher();

			break;
		case 19:

			type[i].set_publisher(spublisher);

			break;
		case 20:
			type[i].update_publisher(upublisher);
			break;
			
		case 21:
			
			type[i].show_nocs();

			break;
		
		case 22:
		
			type[i].set_nocs(n);

			break;
		
		case 23:
			type[i].update_nocs(m);

			break;
		
		case 24:
		
			o = type[i].retun_nocs();

			cout << "Returning Value is :: " << o << endl;

			break;
		
		case 25:
			type[i].show_ISBN();

			break;
		
		case 26:

			type[i].set_ISBN(n1);

			break;
		case 27:

			type[i].update_ISBN(n1);

			break;
		case 28:

			a = type[i].retun_ISBN();


			cout << "Returning ISBN Value is :: " << a << endl;

			break;
		case 29:
			type[i].show_author();

			break;
		
		case 30:
		
			type[i].set_author(sauthor);

			
		break;
			
		case 31:
		
	
		type[i].update_author(upauthor);

				break;
		
		case 32:
			
			goto s1;
			break;
		case 0:
			system("cls");

		case  33:
			type1[i].offer();

			break;
		case  34:
			type1[i].discount();

			break;

		case  35:
			type1[i].setmem();
			break;

		case  36:
			type1[i].purchase();
			break;
		case  38:


			type1[i].reset_amount();

				break;

		case  37:
			type1[i].nonmem_purchase();

				break;
}

}

	system("pause");

}