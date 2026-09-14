#include <iostream>
using namespace std;

class Book {
    // Data members (attributes)
    string title;
    string author;
    float price;

public:
    // Default constructor - used when book is added with default details
    Book() {
        title = "Unknown";
        author = "Unknown";
        price = 0.0;
    }

    // Parameterized constructor - used when full details are provided
    Book(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
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
    // Object created using default constructor (default details)
    Book b1;

    // Object created using parameterized constructor (complete information)
    Book b2("The Alchemist", "Paulo Coelho", 12.99);

    cout << "Book 1 (default details):" << endl;
    b1.displayDetails();

    cout << "\nBook 2 (complete details):" << endl;
    b2.displayDetails();

    return 0;
}