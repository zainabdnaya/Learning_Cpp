/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vects.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 19:57:12 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/07/06 21:34:43 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

struct Vertex
{
    float x, y, z;
};

std::ostream &operator<<(std::ostream &stream, const Vertex &vertex)
{
    stream << vertex.x << ", " << vertex.y << ", " << vertex.z;

    return (stream);
};

int main()
{
    std::vector<int> g1;

    for (int i = 1; i <= 5; i++)
        g1.push_back(i);
 for (int i = 0 ; i <= 5 ; ++i)
        std::cout << i << std::endl;
    return (0);
}