/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 14:10:39 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/30 18:57:10 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

Etudiant::Etudiant()
{
    this->name = "";
    this->matricule = 0;
    this->nbrNotes = 0;
}

Etudiant::~Etudiant()
{
    delete[] tabNotes;
}

Etudiant::Etudiant(std::string name, float nbrNotes, int *tabNotes)
{
    if(!name.empty())
        this->name = name;
    if (nbrNotes >= 0)
        this->nbrNotes = nbrNotes;
    this->tabNotes = new int;
}

std::string Etudiant::get_name()
{
    return (this->name);
}

int     Etudiant::get_matricule()
{
    return (this->matricule);
}

float     Etudiant::get_nbrNotes()
{
    return (this->nbrNotes);
}

void    Etudiant::get_all()
{
    std::string get_name();
    int get_matricule();
    float get_nbrNotes();
}

void      Etudiant::set_matricule(int matricule)
{
    matricule++;
    this->matricule = matricule;
}

