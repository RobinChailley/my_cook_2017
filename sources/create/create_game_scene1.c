/*
** EPITECH PROJECT, 2017
** my_cook_2017
** File description:
** create.c
*/

#include "my.h"

void 				create_object_game_scene3(scene_t *scene,\
all_t all)
{
	scene->object[6] = create_object((sfVector2f){140, 765},\
	(sfIntRect){0, 0, 50, 50}, 0, 0, all.textures.flour, ING);
	scene->object[7] = create_object((sfVector2f){140, 860},\
	(sfIntRect){0, 0, 50, 49}, 0, 0, all.textures.bowl, ING);
	scene->object[8] = create_object((sfVector2f){550, 320},\
	(sfIntRect){0, 0, 50, 41}, 0, 0, all.textures.butter, ING);
	scene->object[9] = create_object((sfVector2f){550, 400},\
	(sfIntRect){0, 0, 40, 58}, 0, 0, all.textures.milk, ING);
}

void 				create_object_game_scene2(scene_t *scene,\
all_t all)
{
	scene->object = malloc(sizeof(object_t) * 17);
	create_object_game_scene3(scene, all);
	scene->object[0] = create_object((sfVector2f){0, 0},\
	(sfIntRect){0, 0, 1920, 1080}, 0, 0, all.textures.game, BG);
	scene->object[1] = create_object((sfVector2f){140, 320},\
	(sfIntRect){0, 0, 50, 40}, 0, 0, all.textures.puffpastery, ING);
	scene->object[2] = create_object((sfVector2f){140, 400},\
	(sfIntRect){0, 0, 50, 57}, 0, 0, all.textures.applejam, ING);
	scene->object[3] = create_object((sfVector2f){140, 505},\
	(sfIntRect){0, 0, 50, 30}, 0, 0, all.textures.cutapples, ING);
	scene->object[4] = create_object((sfVector2f){140, 580},\
	(sfIntRect){0, 0, 50, 50}, 0, 0, all.textures.egg, ING);
	scene->object[5] = create_object((sfVector2f){140, 670},\
	(sfIntRect){0, 0, 50, 50}, 0, 0, all.textures.sugar, ING);
}

object_t			*create_object_game_scene(all_t all)
{
	scene_t scene;

	create_object_game_scene2(&scene, all);
	scene.object[10] = create_object((sfVector2f){550, 490},\
	(sfIntRect){0, 0, 50, 50}, 0, 0, all.textures.canabis, ING);
	scene.object[11] = create_object((sfVector2f){550, 580},\
	(sfIntRect){0, 0, 50, 50}, 0, 0, all.textures.custard, ING);
	scene.object[12] = create_object((sfVector2f){550, 670},\
	(sfIntRect){0, 0, 50, 55}, 0, 0, all.textures.strawberry, ING);
	scene.object[13] = create_object((sfVector2f){550, 780},\
	(sfIntRect){0, 0, 70, 34}, 0, 0, all.textures.dish, ING);
	scene.object[14] = create_object((sfVector2f){550, 865},\
	(sfIntRect){0, 0, 50, 49}, 0, 0, all.textures.furnace, ING);
	scene.object[15] = create_object((sfVector2f){720, 970},\
	(sfIntRect){0, 0, 50, 49}, 0, 0, all.textures.enter, ING);
	scene.object[16] = create_object((sfVector2f){860, 955},\
	(sfIntRect){0, 0, 50, 50}, 50, 500, all.textures.coin_spritesheet,\
	ING);
	return (scene.object);
}

void 				create_letter_game_scene_2(scene_t *scene,\
all_t all)
{
	scene->text = malloc(sizeof(text_t) * 30);
	scene->text[0] = create_text("100 EUROS", (sfVector2f){915, 940}, 64,\
	all.font.font2, sfWhite);
	scene->text[1] = create_text("A", (sfVector2f){90, 315}, 40,\
	all.font.font, sfWhite);
	scene->text[2] = create_text("Z", (sfVector2f){90, 400}, 40,\
	all.font.font, sfWhite);
	scene->text[3] = create_text("E", (sfVector2f){90, 495}, 40,\
	all.font.font, sfWhite);
	scene->text[4] = create_text("Q", (sfVector2f){90, 585}, 40,\
	all.font.font, sfWhite);
	scene->text[5] = create_text("S", (sfVector2f){90, 675}, 40,\
	all.font.font, sfWhite);
	scene->text[6] = create_text("D", (sfVector2f){90, 770}, 40,\
	all.font.font, sfWhite);
	scene->text[7] = create_text("R", (sfVector2f){90, 865}, 40,\
	all.font.font, sfWhite);
}