/***********************************************************************
 * Module:  main.cpp
 * Author:  Emax
 * Modified: jeudi 24 novembre 17:52
 * Purpose: Launch the whole program
 ***********************************************************************/

#include	"server.hh"

void		launch_program()
{
  Server& ptr1 = Server::getInstance();

  //Voila, l'instance de server non reproductible
}

int		main(int ac, char **av)
{
  if (ac != 1)
    return 0;
  else
    launch_program();
  return 1;
}