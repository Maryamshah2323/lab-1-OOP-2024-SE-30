#include <iostream>
#include "Product.h"
using namespace std;


int main() {
    Product product;

        // Set product details
        product.setName("Laptop");
        product.setPrice(999.99);
        product.setQuantity(10);
        // Display product details
        cout << "Product Name: " << product.getName() << endl;
        cout << "Product Price: $" << product.getPrice() << endl;
        cout << "Product Quantity: " << product.getQuantity() << endl;

    return 0;
}
