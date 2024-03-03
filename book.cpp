#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct page {
    string content;

}
page;

typedef struct book {
    page *currentPage;
    page *nextPage;

}
book;

int main() {
    page* firstPage = new (nothrow) page;
    page* secondPage = new (nothrow) page;

    book* firstBook = new (nothrow) book;
    
    if (firstPage == nullptr || secondPage == nullptr) {
        cout << "Couldn't allocate memory for page" << endl;
        return -1;

    }

    if (firstBook == nullptr) {
        cout << "Couldn't allocate memory for book" << endl;
        return -1;
    }

    firstPage->content = "HELLO WORLD";
    secondPage-> content = "SLIM SHADY";

    firstBook->currentPage = firstPage;
    firstBook->nextPage = secondPage;

    cout << firstBook->nextPage->content << endl;

    delete firstPage;
    delete secondPage;
    delete firstBook;

    return 0;

}
