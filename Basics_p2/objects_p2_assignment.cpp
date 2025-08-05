#include <iostream>

class Ecommerce {
    public:
        std::string product;
        std::string pType;
        int price;

        void order_product() {
            std::cout << "Your product has been ordered!\n";
        }

        void return_product() {
            std::cout << "The return request for the product has been initiated\n";
        }

        void Request_product() {
            std::cout << "The product you have requested will be available soon!\n";
        }
};

int main() {
    Ecommerce p1;
    p1.product = "Banana";
    p1.pType = "Eatable";
    p1.price = 5;

    std::cout << "The product name is " << p1.product << " and it's price is: " << p1.price << '\n';
    p1.order_product();
    p1.return_product();
    p1.Request_product(); 
    return 0;
}