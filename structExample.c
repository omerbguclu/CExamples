void structExample(){
    printf("\nStruct Example\n");
    typedef enum{
        male,
        female
    } gender;

    typedef struct{
        int age;
        char *name;
        gender sex;
    }human;

    human jack;
    jack.age = 25;
    jack.sex = male;
    printf("Age of Jack : %d \nGender of Jack : %u\n", jack.age,jack.sex);

    human *john;
    john = (human*)malloc(sizeof(human));
    john -> age = 30;
    john -> sex = male;
    printf("Age of John : %d \nGender of John : %u\n", john->age,john->sex);
}

