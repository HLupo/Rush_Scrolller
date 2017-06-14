/*
** my.h for my.h in /home/HugoFuveau/projects/scroller/hugo_m
**
** Made by hugo hugo.melerowicz@epitech.eu
** Login   <HugoFuveau@epitech.net>
**
** Started on  Fri Mar 31 22:41:42 2017 hugo hugo.melerowicz@epitech.eu
** Last update Sun Apr  2 23:31:18 2017 lupo hugo
*/

#ifndef MY_H_
# define MY_H_

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

# define SCREEN_WIDTH 1920
# define SCREEN_HEIGHT 1080

/* Hugo_L */
typedef struct		s_sp
{
  sfSprite		*s;
  sfVector2f		scale;
  sfVector2f		pos;
  char			*path;
}			t_sp;

typedef	struct		s_spri
{
  t_sp			blue;
  t_sp			yell;
  t_sp			sol;
  t_sp			sol2;
  t_sp			montagne;
  t_sp			montagne2;
  t_sp			montagne3;
  t_sp			grey_c;
  t_sp			grey_c2;
  t_sp			white_c;
  t_sp			white_c2;
  t_sp			airline;
}			t_spri;

typedef	struct		s_init
{
  sfRenderWindow	*window;
  sfTexture		*texture;
  sfFont		*font;
  sfText		*text;
  sfMusic		*music;
  sfEvent		event;
}			t_init;

void			my_create_sprite(t_init *, t_sp *, float, float);
void			my_move_sol(t_sp *, t_sp *);
void			my_move_montagne(t_sp *, t_sp *, t_sp *);
void			my_move_montagne_t(t_sp *, t_sp *, t_sp *);
void			my_move_cloud(t_sp *, t_sp *);
void			my_move_cloud_t(t_sp *, t_sp *);
void			to_do(t_spri *);
void			my_background(t_init *, t_spri *);
void			my_set_sprite(t_init *, t_spri *);

/* Hugo_m */
typedef	struct		s_music
{
  sfMusic		*track1;
  sfMusic		*track2;
  sfMusic		*track3;
  sfMusic		*track4;
  sfMusic		*track5;
  sfMusic		*track6;
  sfMusic		*track7;
  sfMusic		*track8;
  sfMusic		*track9;
  sfMusic		*track10;
}			t_music;

typedef	struct		s_sprite
{
  sfSprite		*title;
  sfSprite		*wallpaper;
  sfSprite		*wallpaper2;
  sfSprite		*musics;
}			t_sprite;

typedef	struct		s_texture
{
  sfTexture		*title;
  sfTexture		*wallpaper;
  sfTexture		*musics;
}			t_texture;

typedef	struct		s_game
{
  sfEvent		event;
  sfVector2f		wall_pos;
  sfVector2f		wall_pos2;
  sfVector2f		title_pos;
  t_texture		texture;
  t_sprite		sprite;
  t_music		music;
  int			title_move;
  int			wall_move;
  int			check_menu;
}			t_game;

void			check_keys(t_game *, t_init *, t_spri *);
int			init_game(t_game *);
int			loop_menu(t_game *, t_init *, t_spri *);
void			init_sprite_positions(t_game *);
void			init_sprites(t_game *);
void			launch_music(sfMusic *, t_game *);
void			menu(t_game *, t_init *);
void			move_sprites(t_game *);
char			**init_music(t_game *);

#endif /* !MY_H_ */
