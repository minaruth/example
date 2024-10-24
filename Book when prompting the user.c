//a program of c structures
#include <stdio.h>
#include <string.h>
struct Book{
    char Title[30];
    char Author[30];
    int Publication_Year;
    char ISBN[30];
    float Price;
};
     int main(){
         struct Book myBook;
// prompt the user to enter the variables

//strcpy(Title,"Introduction to programming")
printf("Title:");
scanf(" %[^\n]",myBook.Title);

//strcpy(Author,"John Smith")
printf("Author:");
scanf(" %[^\n]",myBook.Author);

//Publication year=2022at
printf("Publication_Year:");
scanf("%d",&myBook.Publication_Year);

//strcpy("ISBN")
printf("ISBN:");
scanf(" %[^\n]",myBook.ISBN);

//Price
printf("Price:");
scanf(" %[^\n]",&myBook.Price);

// print the book details
printf("\nBook details:\n");
printf("Title:%s\n",myBook.Title);
printf("Author:%s\n",myBook.Author);
printf("Publication_year:%d\n",myBook.Publication_Year);
printf("ISBN:%s\n",myBook.ISBN);
printf("Price;%.2f\n",myBook.Price);

return 0;
     }
