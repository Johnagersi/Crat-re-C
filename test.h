#ifndef COULEURS
#define COULEURS

#include <stdio.h>

#define clrscr() printf("\033[H\033[2J")

#endif

#define couleurscr(param) printf("\033[%sm",param)


