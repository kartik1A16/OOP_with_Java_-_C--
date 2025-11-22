#include <iostream>
#include <string>
using namespace std;

class Item {
private:
    string title;
    string author;
    int id;

protected:
    bool isBorrowed;

public:
    Item(string t, string a, int i) {
        title = t;
        author = a;
        id = i;
        isBorrowed = false;
    }

    void setDetails(string t, string a, int i) {
        title = t;
        author = a;
        id = i;
    }
    string getTitle() { 
        return title; 
    }
    string getAuthor() { 
        return author; 
    }
    int getId() { 
        return id; 
    }

    void display() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ID: " << id << endl;
    }
    virtual double calculateFine(int overdueDays) = 0;
};

class Book : public Item {
public:
    Book(string t, string a, int i) : Item(t, a, i) {}
    double calculateFine(int overdueDays) override {
        return overdueDays * 2.0;
    }
};

class Magazine : public Item {
public:
    Magazine(string t, string a, int i) : Item(t, a, i) {}
    double calculateFine(int overdueDays) override {
        return overdueDays * 1.0;
    }
};

class DVD : public Item {
public:
    DVD(string t, string a, int i) : Item(t, a, i) {}
    double calculateFine(int overdueDays) override {
        return overdueDays * 5.0;
    }
};
int main() {
    Book b("C++ Basics", "Bjarne Stroustrup", 101);
    Magazine m("Science Weekly", "John Doe", 202);
    DVD d("Interstellar", "Christopher Nolan", 303);

    cout << " Library Items" << endl;

    b.display();
    cout << "Fine for 3 days overdue: " << b.calculateFine(3) << endl << endl;

    m.display();
    cout << "Fine for 3 days overdue: " << m.calculateFine(3) << endl << endl;

    d.display();
    cout << "Fine for 3 days overdue: " << d.calculateFine(3) << endl << endl;

    return 0;
}
