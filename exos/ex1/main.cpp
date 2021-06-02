/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 18:02:54 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/01 16:39:13 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

/**Enoncé****

L'objectif de cet exercice est de gérer les notes des étudiants d’une institution à l’aide d’une classe C++ Etudiant définie par :

Les attributs suivants :

matricule: l’identifiant de l’étudiant (auto incrémenté)
nom: nom d’un étudiant
nbrNotes: le nombre de notes de l’étudiant
*tabNotes: tableau contenant les notes d’un étudiant (allocation dynamique).
Les méthodes suivantes :

Un constructeur d’initialisation
Un constructeur avec arguments
Un destructeur ~Etudiant ()
Un constructeur de recopie Etudiant (const Etudiant &)
Les getters et setters
void saisie () : permettant la saisie des note d’un étudiant
void affichage () : permettant l’affichage des informations d’un étudiant
float moyenne () : retourne comme résultat la moyenne des notes de l’étudiant.
bool admis () : retourne comme résultat la valeur true, si un étudiant est admis et la valeur false, sinon. Un étudiant est considéré comme étant admis lorsque la moyenne de ses notes est supérieure ou égale à 10.
bool comparer(): qui compare la moyenne des deux étudiants, retourne comme résultat la valeur true, si deux étudiants ont la même moyenne et la valeur false, sinon.
//Source : www.exelib.net

******/

int main()
{
    std::string name = "joe";
    int k = 3;
    Etudiant etd(name, k);
    etd.saisie();
    etd.affichage();
    std::cout << "\t - La moyen  d'etudiant " << etd.get_name() << " : " << etd.moyenne() << std::endl;
    ;
    if (etd.moyenne()>= 10)
        std::cout << "L'etudiant " << etd.get_name() << " est admis " << std::endl;
    else
        std::cout << "L'etudiant " << etd.get_name() << " n'est pas admis " << std::endl;
    std::cout << "\n";
    Etudiant a = etd;
    a.saisie();
    a.affichage();
    std::cout << "\t - La moyen  d'etudiant " << a.get_name() << " : " << a.moyenne() << std::endl;
    ;
    if (a.moyenne() >= 10 )
        std::cout << "L'etudiant " << a.get_name() << " est admis " << std::endl;
    else
        std::cout << "L'etudiant " << a.get_name() << " n'est pas admis " << std::endl;

    if (Etudiant::comparer(a.moyenne(), etd.moyenne()))
    std::cout << "L'etudiants " << a.get_name() << "et" << etd.get_name() << " ont la meme moyenne" << std::endl;
    else
        std::cout << "L'etudiants " << a.get_name() << " " << etd.get_name() << " n'ont  pas la meme moyenne" << std::endl;
}
