/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 12:03:37 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/31 13:57:07 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

void Etudiant::affichage()
{
    std::cout << "L'affichage de L'etudiant" << get_name() << ":" << std::endl;
    std::cout << "\t - Matricule :" << get_matricule() << std::endl;
    std::cout << "\t - Nombre des notes :" << get_nbrNotes << std::endl;
    
}