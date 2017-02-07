// Nabil Sawan njs62@zips.uakron.edu
//
// Ordered_list.hpp: Definition of the Ordered_list class

#ifndef ORDERED_LIST_HPP
#define ORDERED_LIST_HPP

struct node {
	int value;
	node *ptr;
	node *next;

	node(int value) {
		this->value = value;
		ptr = 0;
		next = 0;
	};
};

class Ordered_list {
private:
	int _count; // the elements that are actually utilized
//	int* my_list; // the list of elements
//	node* next; // the next node in the list

//	bool search(int); // pass in pointer?
//	void insert(int); //
	node *head; // List the head pointer

public:
	Ordered_list(); // Constructor
	~Ordered_list(); // Destructor

	int count(); // returns # of elements in the list
	bool search(int); // returns true if int is found int he list
	bool insert(int); // insert an integer into the list
	bool remove(int); // remove an integer from the list
	bool is_empty(); // returns if the list is empty
	void clear(); // clears the list
	void display(); // displays the list

};

#endif
