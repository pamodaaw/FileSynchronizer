/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: pamoda
 *
 * Created on June 8, 2017, 1:38 AM
 */

#include <stdio.h>
#include <stdlib.h>
#define ROOT "/home/network"
#define DESTINY ROOT"/backups"
/*
 * 
 */
int main(int argc, char** argv) {
    printf("Backing Up....\n");
    system("rsync -avu " ROOT " " DESTINY);
    printf("Back Up complete\n");
}

