#include "header.h"
book * create_memory()
{
    book *new = malloc(sizeof(book));
    if(!new)
    {
	printf("new node not created\n");
    }
    printf("address = %p\n",new);
    new->link=NULL;
    /*
    new->name=' ';
    new->number=' ';
    new->email=' ';*/
    return new;
}
status add_contact(book **head)
   {

    char name[30];
    char email[40];
    int number;
    char option;
    book *new=create_memory();
    printf("address = %p\n",new);
    if(*head == NULL)
    {
	*head = new;
    }
    book *temp =*head;
    while(temp->link)
    {
	temp=temp->link;
    }
    temp->link=NULL;
    printf("Enter the name\n");
    scanf("%s",name);
getchar();
strcpy(new->name,name);

printf("Do you want to enter phone or email p/e\n");
scanf("%c",&option);
printf("option =%c\n",option);
if(option == 'p')
{
    printf("enter ph number\n");
    scanf("%d",&number);
    getchar();
    new->number = number;
    printf("Do you want to enter email , press e\n");
    scanf("%c", &option);
    if(option == 'e')
    {
    printf("Enter email\n");
    scanf("%s", email);
    getchar();
    puts(email);
    strcpy(new->email, email);
}
}

else if(option == 'e')
{
    printf("enter email\n");
    scanf("%s",email);
    getchar();
    strcpy(new->email, email);
    printf("Do you want to enter ph.no , press p\n");
    scanf("%c", &option);
    if(option == 'p')
    {
printf("Enter the ph. no\n");
scanf("%d",&number);
getchar();
new->number= number;
}
}
print_list(*head);
    return e_success;
}

int print_list(book *head)
{
    system("clear");
    if(head == NULL)
    {
	printf("address book empty\n");
	return e_failure;
    }
    book *temp = head;
    printf("Adres bok\n");
    while(temp)
    {
	printf("name:%s\n",temp->name);
	printf("number:%d\n",temp->number);
	printf("email:%s\n",temp->email);
	temp = temp->link;
    }
    return e_success;
}
