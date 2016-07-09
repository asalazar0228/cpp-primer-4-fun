//
//  main.cpp
//  First Program
//
//  Created by Alejandro Salazar on 6/25/16.
//  Copyright (c) 2016 Alejandro Salazar. All rights reserved.
//



#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total;
    
    std::cout << "Gimme trans numbers pls" << std::endl;
    
    if (std::cin >> total)
    {
        Sales_item trans;
        
        while (std::cin >> trans)
        {
            if (total.isbn() == trans.isbn())
            {
                total += trans;
            }
            else
            {
                std::cout << total << std::endl;
            }
        }
        std::cout << total << std::endl;
    }
    
    else
    {
        std::cout << "No data" << std::endl;
        return -1;
    }
    
    return 0;
}
