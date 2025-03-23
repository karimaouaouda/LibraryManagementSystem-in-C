#include <screens.h>
#include <stdlib.h>
#include <validator.h>
#include <book.h>
#include <loans.h>
#include <borrower.h>
#include <beaty_screen.h>

#if __WORK_WITH_FILE__
Book* head = loadBooks();
#else
Book* head = NULL;
#endif


void addBookScreen(Book**){
    // getting information

    //create the node

    //push the node to the list

}

void* functions[] = {
    &addBookScreen,
    &removeBookScreen,
    &searchBookScreen,
    &listBooksScreen,
    &borrowBookScreen,
    &returnBookScreen,
    &showBookScreen,
    &showTransactionsScreen,
    &searchTransactionScreen
};

void startScreen(int screen_index, Book** books){
    void (*screen)(Book**) = functions[screen_index];

    screen(books);
}

int showMenuScreen(){
    int choice;
    system("cls");
    printf("1. Option 1\n");
    printf("2. Option 2\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}