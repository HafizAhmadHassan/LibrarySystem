
class booktype {

private:

	char title[256];

	char author[256];

	char publisher[40];

	int ISBN;

	int bprice;

	int pyear;

	//publish year

	int nocs;
	int noa;//num of authors

			//number of copies in stock. 

			// To keep track of the number of authors, 

			// add another member variable. 

			//show the title, set the title, and 

			//check whether a title is the same as the actual title of the book the 

			//typical operations that can be 

			//performed on the number of copies in stock are to show the number of copies in stock, 

			//set the number of copies in stock, 

			//update the number of copies in stock,

			//and return the number of copies in stock. 

			//Add similar operations for the publisher, 

			//ISBN, book price,

			//and authors. 

			//Add the appropriate constructors and a destructor (if one is needed)l


public:

	booktype();


	void showtitle();

	void set_title(char[256]);

	bool check_title(char[256]);


	void show_nocs();

	void set_nocs(int &);

	void update_nocs(int &);

	int retun_nocs();


	void show_publisher();

	void set_publisher(char[40]);

	void update_publisher(char[40]);

	char retun_publisher();



	void show_ISBN();

	void set_ISBN(int &);

	void update_ISBN(int &);

	int retun_ISBN();



	void show_bprice();

	void set_bprice(int &);

	void update_bprice(int &);

	int retun_bprice();

	void show_author();

	void set_author(char[256]);

	void update_author(char[256]);

	void show_noa();

	void set_noa(int &);

	void update_noa(int &);

	int retun_noa();

	int search_by_title(booktype[],char [256]);

	int search_by_ISBN(booktype[],int &);


	void print();
	void decnocs();

};