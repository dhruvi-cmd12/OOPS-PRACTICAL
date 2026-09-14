#include <iostream>
using namespace std;

class Book {
    // Data members (attributes)
    string title;
    string author;
    float price;

public:
    // Function to take book details from the staff
    void recordDetails() {
        cout << "Enter book title: ";
        cin >> title;

        cout << "Enter author name: ";
        cin >> author;

        cout << "Enter price: ";
        cin >> price;
    }

    // Function to display book details
    void displayDetails() {
        cout << "\n----- Book Details -----" << endl;
        cout << "Title  : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "Price  : " << price << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {
    Book b1;   // creating an object of class Book

    cout << "Enter details of the book:" << endl;
    b1.recordDetails();

    cout << "\nDisplaying book information:" << endl;
    b1.displayDetails();

    return 0;
}