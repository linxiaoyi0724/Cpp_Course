#pragma once

struct Book
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

typedef struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
}Books;


void printBook(struct Book book);
void printBook(struct Book *book);