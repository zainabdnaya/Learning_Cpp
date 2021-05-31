/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringstream.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 11:02:40 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/05/31 10:52:06 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.hpp"
#include <sstream>
#include <iostream>
#include <sstream>
#include <string>

int main()
{
    std::stringstream ss;
    ss << "stringstream";
    std::cout << "ss = " << ss << std::endl;
    std::cout << "ss.str() = " << ss.str() << std::endl;
    std::string str;
    ss >> str;
    std::cout << "str = " << str << std::endl;
}