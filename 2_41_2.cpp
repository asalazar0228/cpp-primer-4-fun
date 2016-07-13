#include <iostream>
#include <string>

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    
};

int main()
{
    Sales_data book1, book2;
    double price1, price2;
    std::cout << "Please give me the first book"<< std::endl;
    std::cin >> book1.bookNo >> book1.units_sold >> price1;
    std::cout << "Please give me second book" << std::endl;
    std::cin >> book2.bookNo >> book2.units_sold >> price2;
    std::cout << "Thank you!" << std::endl;
    book1.revenue = book1.units_sold * price1;
    book2.revenue = book2.units_sold * price2;
    
    if (book1.bookNo == book2.bookNo)
    {
        unsigned total_sum = book1.units_sold + book2.units_sold;
        double total_revenue = book1.revenue + book2.revenue;
        std::cout << book1.bookNo << " " << total_sum << " " << total_revenue << " ";
        if (total_sum != 0)
            std::cout << "Average Price" << total_revenue / total_sum << std::endl;
        else
            std::cout << "(no sales)" << std::endl;
        return 0;
    }
    else
    {
        std::cerr << "Data must refer to same ISBN" << std::endl;
        return -1;
    }
}
