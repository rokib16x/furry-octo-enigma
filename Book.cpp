#include <iostream>
using namespace std;

class Book{
public:
    string title;
    string author;
    int pages;
    int publishingYear;
    Book(string title1, string author1, int page1, int publishingDate1){
        title=title1;
        author=author1;
        pages=page1;
        publishingYear=publishingDate1;
    }
    void printAll(){
        cout<<"Tittle of the Book: "<< title<<endl;
        cout<<"Author of the Book: "<< author<<endl;
        cout<<"Pages of the Book: "<< pages<<endl;
        cout<<"Publishing Year of the Book: "<< publishingYear<<endl;
    }
    bool hasPage300Plus(){
        if (pages>=300)
        return true;
        else return false;
    }
};
int main() {
    Book b1("Requiem for a DREAM","Hubert Selby Jr",288,1978);
    Book b2("One Flew Over the Cuckoo's Nest","Ken Kesey",320,1962);
    if (b1.hasPage300Plus()==1)
        cout<<b1.title<<" has more than 300 pages"<<endl;
    else cout<<b1.title<<" has not more than 300 pages"<<endl;

    if (b2.hasPage300Plus()==1)
        cout<<b2.title<<" has more than 300 pages"<<endl;
    else cout<<b2.title<<" has not more than 300 pages"<<endl;

    b1.printAll();
    cout<<endl;
    b2.printAll();
    return 0;
}
