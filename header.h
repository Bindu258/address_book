#ifndef HEADER_H
#define HEADER_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
typedef enum 
{
    e_success,
    e_failure
}status;

typedef struct address
{
    char name[100];
long long    int number;
    char email[100];
    struct address *link;
}book;



//function call

status delete_node(book**, book*);


#endif
