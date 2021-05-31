/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 18:03:14 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/31 19:55:39 by zdnaya           ###   ########.fr       */
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
    int nbrNotes;
    int *tabNotes;
public:
    Etudiant();
    ~Etudiant();
    Etudiant(std::string na, int Notes);
    std::string get_name(void);
    int get_matricule(void);
    int get_nbrNotes(void);
    // void get_all(void);
    void set_notes(int *tabNotes, int nbrNotes);
    void affichage();
};

#endif