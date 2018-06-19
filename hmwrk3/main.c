//
//  main.c
//  hmwrk3
//
//  Created by Brendan Krekeler on 6/15/18.
//  Copyright © 2018 Brendan Krekeler. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

typedef struct player{
    char Fname[25];
    char Lname[25];
    int Singles;
    int Doubles;
    int Triples;
    int Homeruns;
    int At_Bats;
    float Slugging_Percentage;
} Player;

int main(int argc, const char * argv[])
{
    
    int numOfPlayers = atoi(argv[1]);
    
    
    
    
    
    //malloc(sizeof(Player) * numOfPlayers);
    
//    printf("%s", readFromFile(argv[2], struct Player, 1, numOfPlayers));
    
    
    
    
}

void readFromFile(char* filename, Player* players, int i, int size)
{
    
    FILE *file = fopen(filename, "r");
    
    if (file == NULL)
    {
        printf("Could not read file");
    }

    for (i = 0; i < size; i++) {
        
        fscanf(file, "%s %s %d %d %d %d %d %f", &players[i].Fname[25], &players[i].Lname[25], &players[i].Singles, &players[i].Doubles,  &players[i].Triples, &players[i].Homeruns, &players[i].At_Bats, &players[i].Slugging_Percentage);
        
    }
    
    // make sure you look at the array location at each file, becasue you could overwrite sectrions of the array if you are not careful.
    // This function will read in size struct players from filename and add these
    // the players array. The function will use index to know where to start
    // writing the players to in the array.
    // Parameters
    //
    // filename – The name of the input file
    // players – a pointer to the array of player structures
    // index – The index of the array to start placing players into
    // size – The number of players in the input file
    // Return - Nothing
}

void calculate_slugging(Player* players, int size)
{
    int singles, doubles, triples, homeruns;
    
    singles = players->Singles;
    doubles = players->Doubles * 2;
    triples = players->Triples * 3;
    homeruns = players->Homeruns * 4;
    
    players->Slugging_Percentage = singles + doubles + triples + homeruns / players->At_Bats;
    
    
    // This function will take in an array of players and calculate their slugging
    // percentage using the other variables in the structure(Singles, Doubles,
    // Triples, Homeruns).
    // Parameters
    // players – a pointer to the array of Players structures
    // size – the size of the array of structures
    
    //look at typecasting under the slugging paragraph for

}


void sort_array(Player* players, int size)
{
    int i;
    int j;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i -1; j++) {
            if( (players+j)->Slugging_Percentage > (players+j)->Slugging_Percentage){
                Player temp;
                
                temp.Slugging_Percentage = players[j].Slugging_Percentage;
                players[j].Slugging_Percentage = players[j+1].Slugging_Percentage;
                players[j+1].Slugging_Percentage = temp.Slugging_Percentage;

            }
        }
    }
    
    //you can use the bubble sort that you used from lab, just make sure that it works correctly
    
//This function takes in an array of players and will sort this array based on Slugging      // Percentage. The formula for calculating slugging percentage can be found toward the       // bottom of the document.
// Parameters
//
// players – a pointer to the array of Player structures
// size – the size of the array
// Return - Nothing
}


void write_to_file(char* filename, Player* players, int size){
    
    //write the sorted array DECENDING ORDER
    
// This function will take in a structure of players and print them into the      // given
// output file, filename
// Parameters
//
// filename – the name of the output file
// players – a pointer to the array of struct players to write to the file
// size – the size of the players  array
// Return - Nothing
}


