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
#define CLIENT "/home/pamoda/SyncTest/SyncClient/"
#define SERVER "dvios-2@192.248.8.242:pamoda/SyncClient/"
//#define SERVER "/home/pamoda/SyncTest/SyncServer/"
/*
 * 
 */
int main() {
    printf("Syncing....\n");
    printf("Sending changes to the server....\n");
    system("rsync -avrue 'ssh' " CLIENT " " SERVER ); // sync the latest changes of the client to the server
    printf("Receiving changes from the server....\n");
    system("rsync -avrue 'ssh' " SERVER " " CLIENT ); // sync the latest changes of the server to the client

    printf("Synchronization complete\n");
}

