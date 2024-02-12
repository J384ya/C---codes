#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Product class
class Product {
public:
    int id;
    string name;
    string description;
    double price;

    Product(int id, string name, string description, double price)
        : id(id), name(name), description(description), price(price) {}
};

// User class
class User {
public:
    int id;
    string name;
    string address;
    string email;
    string password;

    User(int id, string name, string address, string email, string password)
        : id(id), name(name), address(address), email(email), password(password) {}
};

// Cart class
class Cart {
private:
    vector<Product> items;

public:
    void addProduct(const Product& product) {
        items.push_back(product);
    }

    void removeProduct(int productId) {
        for (auto it = items.begin(); it != items.end(); ++it) {
            if (it->id == productId) {
                items.erase(it);
                break;
            }
        }
    }

    void viewCart() {
        cout << "Cart items:" << endl;
        for (const auto& item : items) {
            cout << "  " << item.name << " - $" << item.price << endl;
        }
    }

    double getTotalValue() const {
        double total = 0;
        for (const auto& item : items) {
            total += item.price;
        }
        return total;
    }
};

// Catalog class
class Catalog {
private:
    vector<Product> products;

public:
    void addProduct(const Product& product) {
        products.push_back(product);
    }

    void removeProduct(int productId) {
        for (auto it = products.begin(); it != products.end(); ++it) {
            if (it->id == productId) {
                products.erase(it);
                break;
            }
        }
    }

    Product findProductById(int productId) {
        for (const auto& product : products) {
            if (product.id == productId) {
                return product;
            }
        }
        // Return an empty product if not found
        return Product(-1, "", "", 0.0);
    }

    // Method to access products
    vector<Product> getProducts() const {
        return products;
    }
};

int main() {
    // Initialize catalog with some products
    Catalog catalog;
    catalog.addProduct(Product(1, "Apple", "Description of Product 1", 10.99));
    catalog.addProduct(Product(2, "Mango ", "Description of Product 2", 20.49));
    catalog.addProduct(Product(3, "Papaya", "Description of Product 3", 15.75));

    // Initialize user
    User user(1, "John Doe", "123 Main St", "john@example.com", "password");

    Cart cart;

    // Main menu loop
    bool quit = false;
    while (!quit) {
        cout << "Main Menu:" << endl;
        cout << "1. Browse Catalog" << endl;
        cout << "2. View Cart" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter choice: ";
        
        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Product Catalog:" << endl;
                // Display product catalog
                for (const auto& product : catalog.getProducts()) {
                    cout << product.id << ". " << product.name << " - $" << product.price << endl;
                }
                cout << "Enter product ID to add to cart (0 to go back): ";
                int productId;
                cin >> productId;
                if (productId != 0) {
                    Product selectedProduct = catalog.findProductById(productId);
                    if (selectedProduct.id != -1) {
                        cart.addProduct(selectedProduct);
                        cout << "Product added to cart." << endl;
                    } else {
                        cout << "Invalid product ID." << endl;
                    }
                }
                break;
            }
            case 2:
                cart.viewCart();
                break;
            case 3:
                quit = true;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    // Display total cart value on quit
    cout << "Total cart value: $" << cart.getTotalValue() << endl;

    return 0;
}
