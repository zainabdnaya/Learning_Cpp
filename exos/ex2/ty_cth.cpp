/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ty_cth.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 13:47:08 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/27 17:11:24 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <iostream>

bool age(int age)
{
    bool res = true;
    if (age < 0)
        res = false;
    return (res);
}

int main()
{
    bool ts;
    ts = age(-1);
    try
    {
        if (ts == false)
        {
            throw std::exception();
            std::cout << "here" << std::endl;
        }
        else
            std::cout << "all good" << std::endl;
    }
    catch (std::exception e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}