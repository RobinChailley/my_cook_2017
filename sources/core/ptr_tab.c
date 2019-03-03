/*
** EPITECH PROJECT, 2017
** PSU_my_cook_2017
** File description:
** sources/core/ptr_tab.c
*/

#include "my.h"

ptr_tab_t			*init_ptr_tab_3(void)
{
	ptr_tab_t *ptr_tab = malloc(sizeof(ptr_tab_t) * 15);

	ptr_tab[0].nb_fptr = 15;
	ptr_tab[0].key_code = sfKeyA;
	ptr_tab[0].fptr = &put_puffpastry;
	ptr_tab[1].key_code = sfKeyZ;
	ptr_tab[1].fptr = &put_applejam;
	ptr_tab[2].key_code = sfKeyE;
	ptr_tab[2].fptr = &put_cutapples;
	ptr_tab[3].key_code = sfKeyQ;
	ptr_tab[3].fptr = &put_egg;
	ptr_tab[4].key_code = sfKeyS;
	ptr_tab[4].fptr = &put_suggar;
	return (ptr_tab);
}

ptr_tab_t			*init_ptr_tab_2(void)
{
	ptr_tab_t *ptr_tab = init_ptr_tab_3();

	ptr_tab[5].key_code = sfKeyD;
	ptr_tab[5].fptr = &put_flour;
	ptr_tab[6].key_code = sfKeyR;
	ptr_tab[6].fptr = &put_bowl;
	ptr_tab[7].key_code = sfKeyI;
	ptr_tab[7].fptr = &put_butter;
	ptr_tab[8].key_code = sfKeyO;
	ptr_tab[8].fptr = &put_milk;
	return (ptr_tab);
}

ptr_tab_t			*init_ptr_tab(void)
{
	ptr_tab_t *ptr_tab = init_ptr_tab_2();

	ptr_tab[9].key_code = sfKeyP;
	ptr_tab[9].fptr = &put_cannabis;
	ptr_tab[10].key_code = sfKeyK;
	ptr_tab[10].fptr = &put_custard;
	ptr_tab[11].key_code = sfKeyL;
	ptr_tab[11].fptr = &put_strawberry;
	ptr_tab[12].key_code = sfKeyM;
	ptr_tab[12].fptr = &put_dish;
	ptr_tab[13].key_code = sfKeyU;
	ptr_tab[13].fptr = &put_furnace;
	ptr_tab[14].key_code = sfKeyReturn;
	ptr_tab[14].fptr = &put_serve;
	return (ptr_tab);
}