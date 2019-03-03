/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** create.c
*/

#include "my.h"

text_t				*create_letter_game_scene(all_t all)
{
	scene_t scene;

	create_letter_game_scene_2(&scene, all);
	scene.text[8] = create_text("I", (sfVector2f){500, 315}, 40,\
	all.font.font, sfWhite);
	scene.text[9] = create_text("O", (sfVector2f){490, 400}, 40,\
	all.font.font, sfWhite);
	scene.text[10] = create_text("P", (sfVector2f){490, 495}, 40,\
	all.font.font, sfWhite);
	scene.text[11] = create_text("K", (sfVector2f){490, 585}, 40,\
	all.font.font, sfWhite);
	scene.text[12] = create_text("L", (sfVector2f){490, 675}, 40,\
	all.font.font, sfWhite);
	scene.text[13] = create_text("M", (sfVector2f){490, 770}, 40,\
	all.font.font, sfWhite);
	scene.text[14] = create_text("U", (sfVector2f){490, 865}, 40,\
	all.font.font, sfWhite);
	return (scene.text);
}

void 				create_ing_game_scene_2(scene_t *scene,\
all_t all)
{
	scene->text = create_letter_game_scene(all);
	scene->text[15] = create_text("Puff pastery", (sfVector2f){210, 330},\
	20, all.font.font, sfWhite);
	scene->text[16] = create_text("Apple jam", (sfVector2f){210, 415},\
	20, all.font.font, sfWhite);
	scene->text[17] = create_text("Cut apples", (sfVector2f){210, 510},\
	20, all.font.font, sfWhite);
	scene->text[18] = create_text("Egg", (sfVector2f){210, 595}, 20,\
	all.font.font, sfWhite);
	scene->text[19] = create_text("Sugar", (sfVector2f){210, 685}, 20,\
	all.font.font, sfWhite);
	scene->text[20] = create_text("Flour", (sfVector2f){210, 780}, 20,\
	all.font.font, sfWhite);
	scene->text[21] = create_text("Bowl", (sfVector2f){210, 880}, 20,\
	all.font.font, sfWhite);
	scene->text[22] = create_text("Butter", (sfVector2f){650, 330},\
	20, all.font.font, sfWhite);
}