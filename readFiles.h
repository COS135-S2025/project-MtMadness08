#ifndef READFILES_H
#define READFILES_H
/*
Header file for all difficulty structs
*/

#define HINTS_REMAIN 5

// Bookshelf struct to define the letter of the bookshelf, the amount of books, and how many it can hold
// Readfile to define the number of the pokemon and its hints
typedef struct Pokemon{
    char NatDex_Number;
    int HintsRemain;
    char Hint1;
    char Hint2;
    char Hint3;
    char Hint4;
    char Hint5;
    char Answer;
} Pokemon;

// TODO: Create a function to initialize a BookShelf struct.
BookShelf* createBookShelf(char leter);

// TODO: Create a function to free a BookShelf struct (include freeing the books in the bookshelf)
void freeBookShelf(BookShelf* aBookShelf);

// TODO: Create a function to add a book to a bookshelf.
// If the BookShelf is full, double the size of the bookshelf first.
void addBook(Book* Book, BookShelf* Bookshelf);



#endif