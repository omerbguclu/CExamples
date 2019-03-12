void stringExample(){
    printf("\nString Example\n");

    char name[20];
    printf("Enter your name: ");
    scanf("%s",name);//we dont use the ampersand sign because of its already a pointer array

    char *surname;
    surname = (char*)malloc(sizeof(char)*40);
    printf("Enter your surname: ");
    scanf("%s",surname);//we dont use the ampersand sign because of its already a pointer array

    printf("Your name is : %s, surname is : %s",name,surname);

}


