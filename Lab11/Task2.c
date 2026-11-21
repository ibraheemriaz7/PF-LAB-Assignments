#include <stdio.h>

struct Product {
    int id;
    char name[50];
    char category[30];
    float price;
    int stock;
};

void displayProductDetails(struct Product p) {
    float finalPrice = p.price - (p.price * 0.05);
    printf("Product ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Category: %s\n", p.category);
    printf("Original Price: %.2f\n", p.price);
    printf("Final Price (after 5%% discount): %.2f\n", finalPrice);
    printf("Available Stock: %d\n\n", p.stock);
}

int main() {
    struct Product p1 = {101, "Laptop", "Electronics", 80000.0, 15};
    struct Product p2 = {102, "Headphones", "Accessories", 5000.0, 40};

    displayProductDetails(p1);
    displayProductDetails(p2);

    return 0;
}
