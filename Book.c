// a program of a book in c structures
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

    strcpy(myBook.Title,"Introduction to programming");
    strcpy(myBook.Author,"John Smith");
    myBook.Publication_Year=2022;
    strcpy(myBook.ISBN,"9780131103627");
    myBook.Price=49.99;

    //print the details about the book
    printf("Title:%s\n",myBook.Title);
    printf("Author:%s\n",myBook.Author);
    printf("Publication Year:%d\n",myBook.Publication_Year);
    printf("ISBN:%s\n",myBook.ISBN);
    printf("Price:%.2f\n",myBook.Price);

    return 0;

}
