/*
** music.c for music.c in /home/HugoFuveau/projects/scroller/hugo_m/src
**
** Made by hugo hugo.melerowicz@epitech.eu
** Login   <HugoFuveau@epitech.net>
**
** Started on  Sun Apr  2 01:59:54 2017 hugo hugo.melerowicz@epitech.eu
** Last update Mon Apr  3 00:15:21 2017 lupo hugo
*/

#include "my.h"

char	**init_music(t_game *Game)
{
  char	**music_tab;

  music_tab = malloc(sizeof(char*) * 10);
  music_tab[0] = "assets/Musics/AceOfSpadesMotorhead.ogg";
  music_tab[1] = "assets/Musics/BeforeIForgetSlipknot.ogg";
  music_tab[2] = "assets/Musics/BlackMagicSlayer.ogg";
  music_tab[3] = "assets/Musics/EyeOfTheTigerSurvivor.ogg";
  music_tab[4] = "assets/Musics/HardwiredMetallica.ogg";
  music_tab[5] = "assets/Musics/HeathensTrisomicPilots.ogg";
  music_tab[6] = "assets/Musics/KilingInTheNameRageAgainstTheMachine.ogg";
  music_tab[7] = "assets/Musics/ParanoidBlackSabbath.ogg";
  music_tab[8] = "assets/Musics/ThroughtTheFireAndFlamesDragonforce.ogg";
  music_tab[9] = "assets/Musics/WeAreHolywoodUniverse.ogg";
  music_tab[10] = NULL;
  Game->music.track1 = sfMusic_createFromFile(music_tab[0]);
  Game->music.track2 = sfMusic_createFromFile(music_tab[1]);
  Game->music.track3 = sfMusic_createFromFile(music_tab[2]);
  Game->music.track4 = sfMusic_createFromFile(music_tab[3]);
  Game->music.track5 = sfMusic_createFromFile(music_tab[4]);
  Game->music.track6 = sfMusic_createFromFile(music_tab[5]);
  Game->music.track7 = sfMusic_createFromFile(music_tab[6]);
  Game->music.track8 = sfMusic_createFromFile(music_tab[7]);
  Game->music.track9 = sfMusic_createFromFile(music_tab[8]);
  Game->music.track10 = sfMusic_createFromFile(music_tab[9]);
  return (music_tab);
}

void	launch_music(sfMusic *music, t_game *Game)
{
  sfMusic_stop(Game->music.track1);
  sfMusic_stop(Game->music.track2);
  sfMusic_stop(Game->music.track3);
  sfMusic_stop(Game->music.track4);
  sfMusic_stop(Game->music.track5);
  sfMusic_stop(Game->music.track6);
  sfMusic_stop(Game->music.track7);
  sfMusic_stop(Game->music.track8);
  sfMusic_stop(Game->music.track9);
  sfMusic_stop(Game->music.track10);
  sfMusic_play(music);
}
