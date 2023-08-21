#include <stdio.h>
#include <string.h>
struct book
{
    char Book[20];
    int Quantity;
};

int main()
{
    struct book Sample1;
    strcpy(Sample1.Book, "Harry Potter");
    Sample1.Quantity = 5;
    printf("Book-1: %s\n", Sample1.Book);
    printf("Quantity: %d\n", Sample1.Quantity);
    printf("*******************************\n");
    typedef struct book Book; // Changed the struct name book to Book
    Book Sample2 = {"Dopamin Detox", 10};
    printf("Book-2: %s\n", Sample2.Book);
    printf("Quantity: %d\n", Sample2.Quantity);
    return 0;
}