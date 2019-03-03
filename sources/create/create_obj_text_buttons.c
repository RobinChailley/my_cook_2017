/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** create.c
*/

#include "my.h"

object_t			create_object(sfVector2f pos, sfIntRect rect,\
int offset, int size_max, sfTexture *texture, o_type_t type)
{
	object_t object;

	object.sprite = sfSprite_create();
	object.rect = rect;
	object.offset = offset;
	object.size_max = size_max;
	object.pos = pos;
	object.type = type;
	sfSprite_setTexture(object.sprite, texture, sfTrue);
	sfSprite_setPosition(object.sprite, object.pos);
	sfSprite_setTextureRect(object.sprite, object.rect);
	return (object);
}

button_t			create_button(b_type_t type, sfVector2f size,\
sfVector2f pos, int offset, sfIntRect rect, sfTexture *texture,\
void (*callback)(all_t *all))
{
	button_t button;

	button.shape = sfRectangleShape_create();
	button.type = type;
	button.pos = pos;
	button.size = size;
	button.rect = rect;
	button.offset = offset;
	button.callback = callback;
	button.enable = 1;
	sfRectangleShape_setTexture(button.shape, texture, sfTrue);
	sfRectangleShape_setPosition(button.shape, button.pos);
	sfRectangleShape_setTextureRect(button.shape, button.rect);
	sfRectangleShape_setSize(button.shape, button.size);
	return (button);
}

char 				*my_strcpy(char *s)
{
	char *ns = malloc(sizeof(char) * 1000);
	int i = 0;

	for (i = 0; i < my_strlen(s); i++)
		ns[i] = s[i];
	ns[i] = '\0';
	return (ns);
}

text_t				create_text(char *str, sfVector2f pos,\
unsigned int size, sfFont *font, sfColor color)
{
	text_t text;

	text.text = sfText_create();
	text.str = my_strcpy(str);
	text.pos = pos;
	text.size = size;
	sfText_setColor(text.text, color);
	sfText_setString(text.text, text.str);
	sfText_setFont(text.text, font);
	sfText_setPosition(text.text, text.pos);
	sfText_setCharacterSize(text.text, text.size);
	return (text);
}