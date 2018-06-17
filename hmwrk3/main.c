//
//  main.c
//  hmwrk3
//
//  Created by Brendan Krekeler on 6/15/18.
//  Copyright © 2018 Brendan Krekeler. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

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
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

void readFromFile(char* filename, Player* players, int index, int size)
{
    
    FILE *file = fopen(filename, "r");
    
    if (file == NULL)
    {
        printf("Could not read file");
    }
    
    Player *playersArray = malloc(sizeof(Player));
    
    for (index = 0; index < size; index++) {
        Player temp;
        
        
        
        
    }
    
    
    
    
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
    // This function will take in an array of players and calculate their slugging
    // percentage using the other variables in the structure(Singles, Doubles,
    // Triples, Homeruns).
    // Parameters
    // players – a pointer to the array of Players structures
    // size – the size of the array of structures

}


void sort_array(Player* players, int size)
{
//This function takes in an array of players and will sort this array based on Slugging      // Percentage. The formula for calculating slugging percentage can be found toward the       // bottom of the document.
// Parameters
//
// players – a pointer to the array of Player structures
// size – the size of the array
// Return - Nothing
}


void write_to_file(char* filename, Player* players, int size){
// This function will take in a structure of players and print them into the      // given
// output file, filename
// Parameters
//
// filename – the name of the output file
// players – a pointer to the array of struct players to write to the file
// size – the size of the players  array
// Return - Nothing
}


