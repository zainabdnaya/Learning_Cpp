/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 12:03:37 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/01 16:33:56 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

int Etudiant::matricule;

void Etudiant::affichage()
{
    std::cout << "L'affichage de L'etudiant " << get_name() << ":" << std::endl;
    std::cout << "\t - Matricule : " << matricule << std::endl;
    std::cout << "\t - Nombre des notes : " << get_nbrNotes() << std::endl;
    std::cout << "\t - Notes : ";
    get();
}

void Etudiant::saisie()
{
    std::cout << "Saisie des notes : " << std::endl;
    set_notes();
}
bool Etudiant::admis()
{
    if (moyenne() >= 10)
        return (true);
    else
        return (false);
}

float Etudiant::moyenne()
{
    float m = 0;

    for (int i = 0; i < nbrNotes; i++)
        m += this->tabNotes[i];
    return (m / nbrNotes);
}
bool Etudiant::comparer(float a, float b)
{
    if (a == b)
        return (true);
    else
        return (false);
}