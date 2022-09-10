#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

typedef struct s_item //struct s_item-> the name of the struct
{
	int key;
	int val;
	struct s_item* next;
	struct s_item* prev;
} t_Item; //type t_Item-> the name of the type
t_Item* Head = NULL;
t_Item* Tail = NULL;

//The header of the file
typedef struct
{
	int version;
	int serialNum;
	int ItemsCount; 
	char reserve[100]; //Reserve for when i'll want to add to the struct t_headerFile
} t_headerFile; //type t_headerFile-> the name of the type



int main()
{
	//return = 0 -> התכנית רצה טוב
    //return = 1 -> התכנית לא תקינה
}

