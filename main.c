#include "header.h"

int main()
{
    book *head = NULL;
    char option;
    int ret;
    while(1)
    {
	printf("A - Add contact\nE - Edit contact\nS - Search contact\nL - List all contacts\nD - Delete contact\nC - Save to file\nX - Exit\n");
puts("Enter your option");	
scanf("%c",&option);
	switch(option)
	{
	    case 'a':
	    case 'A':
		printf("Add contact\n");
		ret=add_contact(&head);
		if(ret == e_failure)
		{
		    fprintf(stderr,"add_contact function unsuccessfull\n");
		    return;
		}	    
		break;
	    case 'e':
	    case 'E':edit_contact(&head);
		     break;
	    case 's':
	    case 'S':search_contact(&head);
		     break;
	    case 'l':
	    case 'L':printf("List all contact\n");
		     print_list(&head);
		     break;
	    case 'd':
	    case 'D':printf("Delete contact\n");
		     delete_contact(&head);
		     break;
	    case 'c':
	    case 'C':write_to_file(&head);
		     puts("write to a file is done n stored in #cbook.txt#");
		     break;
	    case 'x':
	    case 'X':exit(1);
		     break;
	}
    }
    return 0;
}
