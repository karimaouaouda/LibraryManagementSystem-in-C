#pragma once

#include <stdbool.h>


typedef struct BookStruct Book;

/**
 * @brief function to create a new book
 * @param author the author of the book
 * @param title the title of the book
 * @param year the year of the book
 * @return Book pointer to the book struct
 */
Book* createBook(char* author, char* title, int year);

/**
 * @b
 */
