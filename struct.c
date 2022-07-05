#include <stdio.h>
#include <cstring>

struct Book{
    char author[30];
    char title[30];
    int pageNo;
};

int main(){
    
    struct Book firstBook;
    firstBook.pageNo = 232;
    
    strcpy(firstBook.author, "Chinua Achebe");
    strcpy(firstBook.title, "Things Fall Apart");
    
    printf("First Book\n");
    printf("%s\n", firstBook.author);
    printf("%s\n", firstBook.title);
    printf("%d\n", firstBook.pageNo);
    
    
    struct Book secondBook = {"Chinua Achebe", "Arrow of God", 125};
    printf("\nSecond Book\n");
    printf("%s\n", secondBook.author);
    printf("%s\n", secondBook.title);
    printf("%d\n", secondBook.pageNo);
    
    return 0;
}
