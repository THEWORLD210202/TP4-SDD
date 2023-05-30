#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "hash.h"



unsigned int hash_string(const char *str)
{
    unsigned int hash = 5381; /*fonction de hachage de D.J. Bernstein*/
    const char *s;
    for (s = str; *s; s++)
    hash = ((hash << 5) + hash) + tolower(*s);
    return (hash & 0x7FFFFFFF)%HASH_MAX;
}


/** 
 * @brief Creer une table de hachage
 * @return : la table majeur de la table de hachage créée
 */
cell_t ** create_hash_table()
{
    cell_t* table_majeure[HASH_MAX];

    for (int i = 0; i<HASH_MAX; i++)
    {
        table_majeure[i] = NULL;
    }

    return table_majeure;

}


/** 
 * @brief Recherche dans une table de hachage
 * @param [in] key: la clé de la valeur à rechercher
 * @return la valeur correspondant à la clé fournie
 */

char * research_in_hash_table()
{
    return "A";
}