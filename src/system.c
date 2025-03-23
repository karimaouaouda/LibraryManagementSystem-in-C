#include <system.h>
#include <stdio.h>
#include <screens.h>

#define __WORK_WITH_FILE__ 0


void startSystem(){
    int choice = -1;

    while( (choice = showMenuScreen()) != 0 ){
        if( choice > SCREENS_COUNT || choice < 0 ){
            showError("invalid choice %d", choice);
            continue;
        }

        startScreen(choice - 1, &head);
    }

    #if __WORK_WITH_FILE__
    saveBooks(head);
    #endif

    freeBooks(head);

}