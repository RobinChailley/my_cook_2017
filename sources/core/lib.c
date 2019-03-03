/*
** EPITECH PROJECT, 2017
** PSU_my_cook_2017
** File description:
** lib.c
*/

#include "my.h"

int 		my_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void		reverse_str(char *str)
{
	int i = 0;
	int j = 0;
	char c;

	for (i = 0, j = my_strlen(str)-1; i<j; i++, j--) {
		c = str[i];
		str[i] = str[j];
		str[j] = c;
	}
}

void 		my_getcharstar(int nb, char *str)
{
	int i = 0;
	int sign = nb;

	if (sign < 0)
		nb = -nb;
	do {
		str[i++] = nb % 10 + '0';
	} while ((nb /= 10) > 0);
	if (sign < 0)
		str[i++] = '-';
	str[i] = '\0';
	reverse_str(str);
}