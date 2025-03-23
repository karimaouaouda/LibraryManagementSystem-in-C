#include <stdbool.h>


struct BookStruct
{
    char title[100];
    char author[100];
    int year;
    bool isAvailable;

    struct BookStruct* next;
    struct BookStruct* prev;
};