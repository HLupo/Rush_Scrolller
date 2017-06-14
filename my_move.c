/*
** my_move.c for my_move.c in /home/Tekaa/Epitech/final
** 
** Made by lupo hugo
** Login   <hugo.lupo@epitech.eu>
** 
** Started on  Sun Apr  2 11:27:54 2017 lupo hugo
** Last update Mon Apr  3 00:15:50 2017 lupo hugo
*/

#include "my.h"

void		my_move_montagne(t_sp *m, t_sp *m2, t_sp *m3)
{
  m->pos = sfSprite_getPosition(m->s);
  m2->pos = sfSprite_getPosition(m2->s);
  m3->pos = sfSprite_getPosition(m3->s);
  if (m->pos.x < SCREEN_WIDTH)
    ++m->pos.x;
  else
    m->pos.x = m3 ->pos.x - 1280;
  if (m2->pos.x < SCREEN_WIDTH)
    ++m2->pos.x;
  else
    m2->pos.x = m->pos.x - 1280;
  if (m3->pos.x < SCREEN_WIDTH)
    ++m3->pos.x;
  else
    m3->pos.x = m2->pos.x - 1280;
  sfSprite_setPosition(m->s, m->pos);
  sfSprite_setPosition(m2->s, m2->pos);
  sfSprite_setPosition(m3->s, m3->pos);
}

void		my_move_cloud(t_sp *c, t_sp *c2)
{
  c->pos = sfSprite_getPosition(c->s);
  c2->pos = sfSprite_getPosition(c2->s);
  if (c->pos.x < SCREEN_WIDTH)
    ++c->pos.x;
  else
    c->pos.x = c2->pos.x - 2560;
  if (c2->pos.x <= SCREEN_WIDTH)
    ++c2->pos.x;
  else
    c2->pos.x = c->pos.x - 2560;
  sfSprite_setPosition(c->s, c->pos);
  sfSprite_setPosition(c2->s, c2->pos);
}

void		my_move_sol(t_sp *sol, t_sp *sol2)
{
  sol->pos = sfSprite_getPosition(sol->s);
  sol2->pos = sfSprite_getPosition(sol2->s);
  if (sol->pos.x < SCREEN_WIDTH)
    ++sol->pos.x;
  else
    sol->pos.x =sol2->pos.x - 2550;
  if (sol2->pos.x < SCREEN_WIDTH)
    ++sol2->pos.x;
  else
    sol2->pos.x = sol->pos.x - 2550;
  sfSprite_setPosition(sol->s, sol->pos);
  sfSprite_setPosition(sol2->s, sol2->pos);
}
