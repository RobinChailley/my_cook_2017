/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** create.c
*/

#include "my.h"

text_t				*create_ing_game_scene(all_t all)
{
	scene_t scene;

	create_ing_game_scene_2(&scene, all);
	scene.text[23] = create_text("Milk", (sfVector2f){650, 415}, 20,\
	all.font.font, sfWhite);
	scene.text[24] = create_text("Weed", (sfVector2f){650, 505}, 20,\
	all.font.font, sfWhite);
	scene.text[25] = create_text("Custard", (sfVector2f){650, 600},\
	20, all.font.font, sfWhite);
	scene.text[26] = create_text("Strawberry", (sfVector2f){650, 685},\
	20, all.font.font, sfWhite);
	scene.text[27] = create_text("Dish", (sfVector2f){650, 780}, 20,\
	all.font.font, sfWhite);
	scene.text[28] = create_text("Furnace", (sfVector2f){650, 880}, 20,\
	all.font.font, sfWhite);
	scene.text[29] = create_text("Serve", (sfVector2f){350, 960}, 50,\
	all.font.font, sfWhite);
	return (scene.text);
}

void 				create_button_game_scene_3(scene_t *scene,\
all_t all)
{
	scene->button[4] = create_button(KEYBOARD, (sfVector2f){350, 80},\
	(sfVector2f){50, 660}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, my_exit);
	scene->button[5] = create_button(KEYBOARD, (sfVector2f){350, 80},\
	(sfVector2f){50, 755}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, my_exit);
	scene->button[6] = create_button(KEYBOARD, (sfVector2f){350, 80},\
	(sfVector2f){50, 850}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, my_exit);
	scene->button[7] = create_button(KEYBOARD, (sfVector2f){350, 80},\
	(sfVector2f){450, 300}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, my_exit);
	scene->button[8] = create_button(KEYBOARD, (sfVector2f){350, 80},\
	(sfVector2f){450, 390}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, my_exit);
}

void 				create_button_game_scene_2(scene_t *scene,\
all_t all)
{
	scene->button = malloc(sizeof(button_t) * 15);
	scene->button[0] = create_button(KEYBOARD, (sfVector2f){350, 80},\
	(sfVector2f){50, 300}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, my_exit);
	scene->button[1] = create_button(KEYBOARD, (sfVector2f){350, 80},\
	(sfVector2f){50, 390}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, my_exit);
	scene->button[2] = create_button(KEYBOARD, (sfVector2f){350, 80},\
	(sfVector2f){50, 480}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, my_exit);
	scene->button[3] = create_button(KEYBOARD, (sfVector2f){350, 80},\
	(sfVector2f){50, 570}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, my_exit);
}

void				create_button_game_scene_4(scene_t *scene,\
all_t all)
{
	scene->button[9] = create_button(KEYBOARD, (sfVector2f){350, 80},\
	(sfVector2f){450, 480}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, my_exit);
	scene->button[10] = create_button(KEYBOARD, (sfVector2f){350, 80},\
	(sfVector2f){450, 570}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, my_exit);
	scene->button[11] = create_button(KEYBOARD, (sfVector2f){350, 80},\
	(sfVector2f){450, 660}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, my_exit);
	scene->button[12] = create_button(KEYBOARD, (sfVector2f){350, 80},\
	(sfVector2f){450, 755}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, my_exit);
	scene->button[13] = create_button(KEYBOARD, (sfVector2f){350, 80},\
	(sfVector2f){450, 850}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, my_exit);
	scene->button[14] = create_button(KEYBOARD, (sfVector2f){750, 90},\
	(sfVector2f){50, 950}, 550, (sfIntRect){0, 0, 550, 157},\
	all.textures.button, my_exit);
}

button_t			*create_button_game_scene(all_t all)
{
	scene_t scene;

	create_button_game_scene_2(&scene, all);
	create_button_game_scene_3(&scene, all);
	create_button_game_scene_4(&scene, all);
	return (scene.button);
}