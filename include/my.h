/*
** EPITECH PROJECT, 2018
** my_cook_2017
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>

typedef struct 			all_t all_t;

typedef struct 			my_clock_t
{
	sfTime 			time;
	sfClock 		*clock;
	int 			n;
	int 			n2;
	float 			seconds;
}				my_clock_t;

typedef struct 			orders_t orders_t;
struct	orders_t
{
	sfSprite		*sprite;
	sfVector2f		pos;
	sfVector2f 		pos_clock;
	int 			*recipe;
	int			terminated;
	int 			nb_ing;
	my_clock_t		clock;
	char 			*clock_str;
	sfText 			*clock_text;
	int 			time;
	orders_t		*next;
};

typedef struct 			list_recipe_t list_recipe_t;
struct 	list_recipe_t
{
	orders_t 		*first;
};

typedef enum 			o_type_e
{
	BG, RECIPE, ING
}				o_type_t;

typedef enum 			b_type_e
{
	KEYBOARD, MOUSE
}				b_type_t;

typedef struct 			ptr_tab_s
{
	int			nb_fptr;
	sfKeyCode		key_code;
	void			(*fptr)(all_t *, int);
}				ptr_tab_t;

typedef struct 			text_s
{
	sfText 			*text;
	char 			*str;
	sfVector2f 		position;
	int 			size;
	sfVector2f 		pos;
}				text_t;


typedef struct 			object_s
{
	o_type_t 		type;
	sfSprite 		*sprite;
	sfVector2f 		pos;
	sfIntRect 		rect;
	int 			offset;
	int 			size_max;
}				object_t;

typedef struct 			button_s
{
	b_type_t 		type;
	sfRectangleShape	*shape;
	sfVector2f 		size;
	sfVector2f 		pos;
	sfIntRect		rect;
	int 			offset;
	void			(*callback)(all_t *);
	int 			enable;
}				button_t;

typedef struct 			font_s
{
	sfFont 			*font;
	sfFont 			*font2;
}				font_t;

typedef struct 			scene_s
{
	object_t 		*object;
	button_t		*button;
	text_t			*text;
	int 			nb_text;
	int 			nb_button;
	int			nb_object;
}				scene_t;

typedef struct 			textures_s
{
	sfTexture 		*coin_spritesheet;
	sfTexture 		*defeat_scene;
	sfTexture		*enter;
	sfTexture		*bowl;
	sfTexture 		*settings;
	sfTexture		*egg;
	sfTexture		*flour;
	sfTexture		*applejam;
	sfTexture		*puffpastery;
	sfTexture		*cutapples;
	sfTexture		*sugar;
	sfTexture		*butter;
	sfTexture		*milk;
	sfTexture		*canabis;
	sfTexture		*custard;
	sfTexture		*strawberry;
	sfTexture		*furnace;
	sfTexture		*dish;
	sfTexture 		*button;
	sfTexture 		*main_menu;
	sfTexture 		*pause;
	sfTexture 		*htp;
	sfTexture 		*game;
	sfTexture 		*circle;
	sfTexture 		*recipe_apple_pie;
	sfTexture 		*recipe_pound_cake;
	sfTexture 		*recipe_space_cake;
	sfTexture 		*recipe_strawberry_pie;
	sfTexture		*puff_pastry_ing;
	sfTexture 		*apple_jam_ing;
	sfTexture 		*cut_apples_ing;
	sfTexture 		*sugar_ing;
	sfTexture 		*bowl_ing;
	sfTexture 		*butter_ing;
	sfTexture 		*cannabis_ing;
	sfTexture 		*egg_ing;
	sfTexture 		*flour_ing;
	sfTexture 		*milk_ing;
	sfTexture 		*custard_ing;
	sfTexture 		*strawberry_ing;
	sfTexture		*sugar_strawberry_pie_ing;
	sfTexture 		*cooked_apple_pie;
	sfTexture 		*cooked_strawberry_pie;
	sfTexture		*cooked_space_cake;
	sfTexture 		*cooked_pound_cake;
	sfTexture		*dish_ing;
	sfTexture 		*egg_pound_cake_ing;
	sfTexture 		*flour_pound_cake_ing;
	sfTexture 		*sugar_pound_cake_ing;
	sfTexture 		*butter_pound_cake_ing;
}				textures_t;

typedef struct 			sounds_s
{
	sfMusic 		*ouais;
}				sounds_t;

typedef struct 			window_s
{
	sfRenderWindow 		*window;
	sfEvent 		event;
}				window_t;

typedef struct 			game_info_s
{
	int 			recipe_id;
	int			*current_recipe;
	int 			button_pressed;
	int 			place_in_recipe;
	int 			nb_recipes;
	int 			random_frequence;
	int 			money;
	int 			difficulty;
}				game_info_t;

typedef struct 			ing_ig_s
{
	sfSprite		*sprite[8];
	int 			*display;
	sfVector2f		*pos;
}				ing_ig_t;

typedef struct 			scoreboard_s
{
	int 			served_orders;
	int 			lost_orders;
	int 			max_profit;
}				scoreboard_t;

typedef struct 			all_t
{
	game_info_t 		game_info;
	ptr_tab_t 		*ptr_tab;
	font_t 			font;
	my_clock_t		my_clock;
	window_t 		window;
	textures_t 		textures;
	sounds_t 		sounds;
	scene_t			*scenes;
	list_recipe_t		*list_recipe;
	ing_ig_t		ing_ig;
	scoreboard_t 		scoreboard;
	int 			current_scene;
}				all_t;

//CREATE//
window_t 			create_window(void);
all_t 				create_all(void);

//CORE//
void 				loop_game(all_t *all);

//DISPLAY//
void 				draw_scene(all_t *all);
void 				draw_recipes(all_t *all);
void 				display_animation(all_t *all);

//MAIN//
int 				rand_ab(int a, int b);

//EVENT_MANAGEMENT//
void 				event_management(all_t *all);
void 				keyboard_event_management(all_t *all);

//GESTION_MOUSE//
int 				button_is_clicked(button_t button,\
sfVector2i click_position);
void 				hover_button_gestion(all_t *all);

//GO_TO_SCENES//
void 				my_exit(all_t *all);
void 				go_to_scene_0(all_t *all);
void 				go_to_scene_1(all_t *all);
void 				go_to_scene_2(all_t *all);
void 				go_to_scene_3(all_t *all);
void 				go_to_scene_4(all_t *all);

//GAME_DIFICULTY//
void 				difficulty_1(all_t *all);
void 				difficulty_2(all_t *all);
void 				difficulty_3(all_t *all);
void				difficulty_choice(all_t *all);

//CREATE_OBJ_TEXT_BUTTONS//
object_t			create_object(sfVector2f pos, sfIntRect rect,\
int offset, int size_max, sfTexture *texture, o_type_t type);
button_t			create_button(b_type_t type, sfVector2f size,\
sfVector2f pos, int offset, sfIntRect rect, sfTexture *texture,\
void (*callback)(all_t *all));
text_t				create_text(char *str, sfVector2f pos,\
unsigned int size, sfFont *font, sfColor color);

//CREATE_GAME_SCENE//
object_t			*create_object_game_scene(all_t all);
button_t			*create_button_game_scene(all_t all);
text_t				*create_ing_game_scene(all_t all);
text_t				*create_letter_game_scene(all_t all);

//INIT_STRUCT//
my_clock_t 			create_clock(void);
textures_t 			create_textures(void);
font_t				create_font(void);

//INIT_STRUCT2//
list_recipe_t 			*init_list_recipe(all_t *all);
ing_ig_t			init_ing_ig(void);
scoreboard_t			create_scoreboard(void);

//CREATE_SCENE//
scene_t				create_main_scene(all_t all);
scene_t				create_pause_scene(all_t all);
scene_t 			create_game_scene(all_t all);
scene_t				create_setting_scene(all_t all);
scene_t				*create_all_scene(all_t all);

//PTR_TAB//
ptr_tab_t			*init_ptr_tab(void);

//CREATE_RECIPES//
int				*create_apple_pie_recipe(void);
int				*create_pound_cake_recipe(void);
int				*create_space_cake_recipe(void);
int 				*create_strawberry_pie_recipe(void);

//CREATE_INFO//
game_info_t			create_game_info(void);

//INSERT_ING1//
void 				put_puffpastry(all_t *all, int i);
void 				put_applejam(all_t *all, int i);
void 				put_cutapples(all_t *all, int i);
void 				put_suggar(all_t *all, int i);
void 				put_egg(all_t *all, int i);

//INSERT_ING2//
void 				put_flour(all_t *all, int i);
void 				put_butter(all_t *all, int i);
void 				put_milk(all_t *all, int i);
void 				put_cannabis(all_t *all, int i);
void 				put_custard(all_t *all, int i);

//INSERT_ING3//
void 				put_strawberry(all_t *all, int i);
void 				put_furnace(all_t *all, int i);
void 				put_bowl(all_t *all, int i);
void 				put_serve(all_t *all, int i);
void 				put_dish(all_t *all, int i);

//RECIPE_MANAGEMENT//
void 				insert_orders(all_t *all);
sfTexture 			*generate_texture_of_random_recipe\
(int random, all_t all);
int 				*generate_random_recipe\
(all_t *all, int random);
int 				delete_terminated_recipe\
(all_t *all);
void 				reset_current_recipe\
(all_t *all);

//CREATE_DEFEAT_SCENE//
scene_t				create_defeat_scene(all_t all);

//DRAW_RECIPES//
void 				draw_apple_pie(all_t *all);
void 				draw_strawberry_pie(all_t *all);
void 				draw_space_cake(all_t *all);
void 				draw_pound_cake(all_t *all);

//DISPLAY_ING//
void 				set_texture_space_cake(all_t *all);
void 				set_texture_pound_cake(all_t *all);

//DEFEAT//
void				reset_game(all_t *all);
void				set_all_string_defeat_scene(all_t *all);
void 				get_max_profit(all_t *all);

//CLOCK_MANAGEMENT//
void				main_clock_management(all_t *all);
void				random_insert_recipe(all_t *all);

void 				draw_ing_current_recipe(all_t *all);
int 				draw_all_ing(all_t *all);

int 				generate_nb_ing(int random);
int 				delete_wasted_recipe(all_t *all);
void 				my_getcharstar(int nb, char *str);
int 				my_strlen(char *str);
int 				guess_which_current_recipe_id(all_t *all);
int 				generate_time_with_difficult(all_t *all);
void 				create_ing_game_scene_2(scene_t *scene,\
all_t all);
void 				create_setting_scene_2(scene_t *scene,\
all_t all);
void 				create_textures_1(textures_t *textures);
void 				create_textures_2(textures_t *textures);
void 				create_textures_3(textures_t *textures);
void 				button_management(all_t *all);
void 				guess_which_current_recipe_id_core(all_t *all);
int 				int_array_cmp(int *a, int *b, int size);
void 				create_letter_game_scene_2(scene_t *scene,\
all_t all);
void 				draw_strawberry_pie_core(all_t *all);

#endif /* !MY_H_ */