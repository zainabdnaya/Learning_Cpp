/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   absract.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:45:25 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/16 15:06:09 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <strstream>
#include <string.h>


class ADatabase
{
    protected:
        std::string name;

    public:
        virtual void getName() = 0;
};



class Manager : public ADatabase{

    public :
        void getName()
        {
            std::cout << "Manager  Class" << std::endl;
        }
};

class Accountant  : public ADatabase{
    public:
    void getName()
    {
        std::cout << "Account Class" << std::endl;
    }
};

class Customers : ADatabase{
    
    public:
    void getName()
    {
        std::cout << "Customers Class" << std::endl;
    }
};


int main()
{
    ADatabase *ptr;
    Manager m;
    ptr = &m;
    ptr->getName();
    Accountant a;
    a.getName();
    Customers c;
    c.getName();
}