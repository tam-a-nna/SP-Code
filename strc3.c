#include <stdio.h>

#define MAX_BOOKS 10

// Define the Book structure
struct Book {
    char title[100];
    char author[100];
    float price;
    int publication_year;
};

int main() {
    struct Book books[MAX_BOOKS];

    int n;

    printf("Enter the number of books (maximum %d): ", MAX_BOOKS);
    scanf("%d", &n);

    if (n <= 0 || n > MAX_BOOKS) {
        printf("Invalid number of books.\n");
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        printf("\nEnter details for book %d:\n", i + 1);

        printf("Enter title: ");
        scanf("%s", books[i].title);

        printf("Enter author: ");
        scanf("%s", books[i].author);

        printf("Enter price: ");
        scanf("%f", &books[i].price);

        printf("Enter publication year: ");
        scanf("%d", &books[i].publication_year);
    }

    printf("\nDetails of Books:\n");
    for (int i = 0; i < n; ++i) {
        printf("\nBook %d\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
        printf("Publication Year: %d\n", books[i].publication_year);
    }

    return 0;
}
