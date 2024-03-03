#include <iostream>
#include <vector>

using namespace std;

typedef struct page {
    string content;
    
}
page;


typedef struct Book {
    string title;
    string description;
    page* currentPage;
    page* nextPage;
    vector<string> authors;
    int NumOfPages;

}
Book;


int main() {
    
    return 0;
}

