#include <iostream>
#include <string>
using namespace std;
class LibraryItem {
protected:
    string title;
    int id;
public:
    LibraryItem(string t, int i) : title(t), id(i) {}

    void showBasicInfo() {
        cout << "Title: " << title << "\nID: " << id << endl;
    }
};
class Book : public LibraryItem {
protected:
    string author;
public:
    Book(string t, int i, string a) : LibraryItem(t, i), author(a) {}

    void showBookInfo() {
        showBasicInfo();
        cout << "Author: " << author << endl;
    }
};
class Magazine : public LibraryItem {
protected:
    int issueNumber;
public:
    Magazine(string t, int i, int issue) : LibraryItem(t, i), issueNumber(issue) {}

    void showMagazineInfo() {
        showBasicInfo();
        cout << "Issue Number: " << issueNumber << endl;
    }
};

class ReferenceBook : public Book {
private:
    string subject;
public:
    ReferenceBook(string t, int i, string a, string s)
        : Book(t, i, a), subject(s) {}

    void showReferenceBookInfo() {
        showBookInfo();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    cout << "=== Library System ===\n";
    Book b1("The Great Gatsby", 101, "F. Scott Fitzgerald");
    Magazine m1("National Geographic", 202, 56);
    ReferenceBook rb1("C++ Programming", 303, "Bjarne Stroustrup", "Computer Science");
    cout << "\n-- Book Details --\n";
    b1.showBookInfo();
    cout << "\n-- Magazine Details --\n";
    m1.showMagazineInfo();
    cout << "\n-- Reference Book Details --\n";
    rb1.showReferenceBookInfo();
    return 0;
}
