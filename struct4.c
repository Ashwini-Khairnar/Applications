#include<stdio.h>

struct book
{
    char title[25];
    char author[20];
    int pages;
    float price;
};

int main()
{
    struct book book1,book2;

    printf("Enter title,author,pages and price of book1:\n");
    gets(book1.title);
    gets(book1.author);
    scanf("%d%f",&book1.pages,&book1.price);
//    flushall();

    printf("Enter title,author,pages and price of book2:\n");
    gets(book2.title);
    gets(book2.author);
    scanf("%d%f",&book2.pages,&book2.price);

    printf("In second edition, pages of books are increase by 100\n");
    printf("Cost of book is increase by 10% \n");

    //operations on individual members

    book1.pages+=100;
    book2.pages+=100;

    book1.price=book1.price*110/100;
    book2.price=book2.price*110/100;

    printf("In Seecond edition : book1 has %d pages\n",book1.pages);
    printf("In second edition of book1 is of Rs. %f\n",book1.price);
    printf("In Seecond edition : book2 has %d pages\n",book2.pages);
    printf("In second edition of book2 is of Rs. %f\n",book2.price);

    return 0;
}