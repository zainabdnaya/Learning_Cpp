/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 14:10:39 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/31 19:56:04 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

Etudiant::Etudiant()
{
    this->name = "";
    this->matricule = 0;
    this->nbrNotes = 0;
}



Etudiant::Etudiant(std::string na, int Notes)
{
    if(name.empty())
        this->name = na;
    if (nbrNotes >= 0)
        this->nbrNotes = Notes;
    this->matricule = 0;
}

std::string Etudiant::get_name()
{
    return (this->name);
}

int     Etudiant::get_matricule()
{
    this->matricule++;
     return (this->matricule);
}

int     Etudiant::get_nbrNotes()
{
    return (this->nbrNotes);
}

// void    Etudiant::get_all()
// {
//     std::string get_name();
//     int get_matricule();
//     float get_nbrNotes();
// }

void    Etudiant::set_notes(int *tabNotes, int nbrNotes)
{
    int i = 0;
    if (nbrNotes > 0)
    {
        tabNotes = new int[nbrNotes];
        while (  i < nbrNotes)
        {
            
        }
        
    }
}

Etudiant::~Etudiant()
{
    // delete[] tabNotes;
}

