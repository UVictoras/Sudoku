#include <stdio.h>
#include <stdlib.h>

struct Grid
{   
    int size;
    int caseValue;
    int nbDivisions;
    int nbStartingValues;
    char** gridValues[size][size];
}

struct Player
{
    int difficulty;
    int lives;
    char* bestTimeEasy;
    char* bestTimeMedium;
    char* bestTimeHard;
}