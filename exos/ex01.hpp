/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 18:03:14 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/31 13:59:32 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_HPP
#define EX01_HPP
#include <iomanip>
#include <string>
#include <iostream>

class Etudiant
{
private:
    int matricule;
    std::string name;
    float nbrNotes;
    int *tabNotes;
public:
    Etudiant();
    ~Etudiant();
    Etudiant::Etudiant(std::string na, float Notes);
    std::string get_name();
    int get_matricule();
    float get_nbrNotes();
    void get_all();
    void set_notes(int *tabNotes, int nbrNotes);
    void affichage();
};

#endif;