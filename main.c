/**
 * @File main.c
 *
 * Main - driver for the Game as a whole
 *
 */



#include <stdio.h>
#include <windows.h>
#include "main.h"


int main()
{
    char choice;

    START:
    system("cls");
    system("color 0e");
printf(
"888888P dP  a88888b. d888888P  .d888888   a88888b. d888888P  .88888.   88888888\n"
"  88    88 d8\'   `88    88    d8\'    88  d8\'   `88    88    d8\'   `8b  88  \n"
"  88    88 88           88    88aaaaa88a 88           88    88     88 a88aaaa \n"
"  88    88 88           88    88     88  88           88    88     88  88     \n"
"  88    88 Y8.   .88    88    88     88  Y8.   .88    88    Y8.   .8P  88     \n"
"  dP    dP  Y88888P\'    dP    88     88   Y88888P\'    dP     `8888P\'   88888888\n"
);
    printf("\n ===========================\n");
    printf("\t WELCOME!!!\n");
    printf(" ===========================\n");
    BEGIN:
    Sleep(500);
    printf("\n============================\n");
    printf("How do you wish to play?\n");
    printf("A. Against the computer\n");
    printf("B. Against a friend\n\n");
    printf("X. Exit Game\n\t\t==> ");
    scanf("%s", &choice);

    if (choice == 'A' || choice == 'a')
    {
        system("color 04");
        singlePlayer();
    }
    else if (choice == 'B' || choice == 'b')
    {
        system("color 05");
        multiPlayer();
    }
    else if (choice == 'X' || choice == 'x')
    {
        printf("\nTHANKS! See you later....\n");
        Sleep(2000);
        system("color 0c;
        exit(0);
    }
    else 
        printf("ERROR! Invalid Option\n\n");
        goto BEGIN;

    printf("START OVER?");
    goto START;
    return 0;
}
