/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloca_01.c++                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:20:37 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/30 17:43:20 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Student{
    private:
        std::string _login;
    public:
        Student() : _login("bka")
        {
            std::cout << "Student " << this->_login << " is born" << std::endl;
        }
        ~Student()
        {
            std::cout << "Student " << this->_login << " died" << std::endl;
        }
};

int main()
{
    /*// Student bla = Student("bla");
    // Student *puf = new Student("puf");
    Student* students = new Student[13];
    delete [] students;*/
    //Refrence
    int x = 10;
    int &ref = x;
    int *p = &x;
    // int z = 15;
    // ref is a reference to x.

    // Value of x is now changed to 20
    // ref = 20;
    std::cout << "x = " << x <<  "\t ref = " << ref <<  "\tp= " << p <<  std::endl;

    // Value of x is now changed to 30
    x = 30;
    p = &ref;
    std::cout << "x = " << ref << "\t ref = " << x << "\tp= " << p << std::endl;
    // int &y = ref;

    // std::cout << "y = " << y << "\t ref = " << ref << "\t x = " << x << std::endl;

    // y = 40;
    // std::cout << "y = " << y << "\t ref = " << ref << "\t x = " << x << std::endl;

    // ref = 50;
    // std::cout << "y = " << y << "\t ref = " << ref << "\t x = " << x << std::endl;

    return (0);
}
