#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};
//struct  node *start=NULL,*temp,*new1*,*after,*prev;
//void create();
void display();
void insertfirst();
void insertlast();
void insertmiddle();
void deletefirst();
void deletelast();
void deletemiddle();
void countnode();
void searchelement();

int main()
{
    int choice;
    do
    {
        printf("------------------------ LINKED LIST MENU -------------------------------\n");
        printf(" Press 1 for creating linked list :\n");
        printf(" Press 2 for displaying linked list elments :\n");
        printf(" Press 3 for inseting element at first in linked :\n");
        printf(" Press 4 for inserting element at last in linked list :\n");
        printf(" Press 5 for inserting element at middle in linked list :\n");
        printf(" Press 6 for deleting element from first from linked list :\n");
        printf(" Press 7 for deleting element from last from linked list :\n");
        printf(" Press 8 for deleting element from middle from linked list :\n");
        printf(" Press 9 for countnode from linked list :\n");
        printf(" Press 10 for search element from linked list :\n");
        printf(" Press 11 for existing from linked list :\n");
        printf("---------------------------------------------------------------------------\n");
        printf(" Enter your choice :\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insertfirst();
            break;
        case 4:
            insertlast;
            break;
        case 5:
            insertmiddle();
            break;
        case 6:
            deletefirst();
            break;
        case 7:
            deletelast();
            break;
        case 8:
            deletemiddle();
            break;
        case 9:
            countnode();
            break;
        case 10:
            searchelement();
            break;
        case 11:
            printf(" Existing from linked list :\n");
        default:
            printf(" Wrong choice .\n");
            break;
        }
    }while (choice!=11);
    return 0;
}
