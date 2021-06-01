/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 14:10:39 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/01 16:35:29 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

Etudiant::Etudiant()
{
    this->name = "";
    this->nbrNotes = 0;
}

Etudiant::Etudiant(std::string na, int Notes)
{
    if (name.empty())
        this->name = na;
    if (Notes > 0)
    {
        this->nbrNotes = Notes;
        tabNotes = new int[nbrNotes];
        matricule++;
    }
    else
    {
        std::cout << "Error : nbrNotes should be > 0";
        exit(0);
    }
}

std::string Etudiant::get_name()
{
    return (this->name);
}

int Etudiant::get_nbrNotes()
{
    return (this->nbrNotes);
}

int *Etudiant::get_tabNotes()
{

    return (this->tabNotes);
}

void Etudiant::set_notes()
{
    std::stringstream str;
    std::string line;

    for (int i = 0; i < get_nbrNotes(); i++)
    {
        std::cout << " Donner la note " << i + 1 << " : ";
        std::getline(std::cin, line);
        tabNotes[i] = std::stoi(line);
    }
    std::cout << "\n";
}

void Etudiant::get()
{
    for (int i = 0; i < get_nbrNotes(); i++)
    {
        std::cout << tabNotes[i] << " ";
    }
    std::cout << "\n";
}

Etudiant::Etudiant(const Etudiant &etd)
{
    matricule = etd.matricule;
    matricule++;
    name = "jack";
    nbrNotes = etd.nbrNotes;
    tabNotes = new int[nbrNotes];
    int i = 0;
    while (i < nbrNotes)
    {
        tabNotes[i] = etd.tabNotes[i];
        i++;
    }
}


Etudiant::~Etudiant()
{
    delete[] tabNotes;
}

