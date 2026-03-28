#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct song{
    int id;
    char title[50];
    char artist[50];
    double duration;
}song;

void addsong(song library[], int *count);
void displaySongs(song library[], int count);

void main()
{
    song library[100];
    int count = 0;
    int choice;

    do{
        printf("\nEnter 1 to add song");
        printf("\nEnter 2 to display songs library");
        printf("\nEnter 3 to exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);   

        if(choice == 1)
        {
            addsong(library, &count);
        }
        else if(choice == 2)
        {
            displaySongs(library, count);
        }
        else if(choice == 3)
        {
            printf("\nExiting...");
        }
        else
        {
            printf("\nInvalid choice!");
        }

    } while(choice != 3);
}

void addsong(song library[], int *count)
{
    printf("\nEnter Song ID: ");
    scanf("%d", &library[*count].id);

    printf("Enter Song Title: ");
    scanf(" %[^\n]", library[*count].title);

    printf("Enter Artist Name: ");
    scanf(" %[^\n]", library[*count].artist);

    printf("Enter Duration: ");
    scanf("%lf", &library[*count].duration);

    (*count)++;

    printf("\nSong added successfully!");
}

void displaySongs(song library[], int count)
{
    int i;

    if(count == 0)
    {
        printf("\nNo songs in library!");
        return;
    }

    printf("\n*** Song Library ***");

    for(i = 0; i < count; i++)
    {
        printf("\n\nSong %d", i + 1);
        printf("\nID: %d", library[i].id);
        printf("\nTitle: %s", library[i].title);
        printf("\nArtist: %s", library[i].artist);
        printf("\nDuration: %.2lf", library[i].duration);
    }
}