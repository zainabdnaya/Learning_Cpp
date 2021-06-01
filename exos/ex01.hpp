/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 18:03:14 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/01 16:29:23 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_HPP
#define EX01_HPP
#include <iomanip>
#include <string>
#include <iostream>
#include <sstream>

class Etudiant
{
private:
    static int matricule;
    std::string name;
    int nbrNotes;
    int *tabNotes;
public:
    Etudiant();
    ~Etudiant();
    Etudiant(std::string na, int Notes);
    std::string get_name(void);
    int get_nbrNotes(void);
    void set_notes();
    void affichage();
    void saisie();
    int *get_tabNotes(void);
    void get(void);
    Etudiant(const Etudiant &etd);
    float moyenne();
    bool admis();
    static bool comparer(float a, float b);
};

#endif