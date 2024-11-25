struct   student {
    char num [(640 - 620)];
    char name [(169 - 149)];
    char sex;
    int age;
    char grade [20];
    char Tekv8oJur9 [20];
    struct   student *next;
};
int p47USfGBIgxb;

struct   student *xCHyArnIweBz (void ) {
    struct   student *head;
    struct   student *egoYOpcF1Mri;
    struct   student *p2;
    egoYOpcF1Mri = p2 = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %s %s", &egoYOpcF1Mri->num, &egoYOpcF1Mri->name, &egoYOpcF1Mri->sex, &egoYOpcF1Mri->age, &egoYOpcF1Mri->grade, &egoYOpcF1Mri->Tekv8oJur9);
    for (p47USfGBIgxb = (383 - 383); egoYOpcF1Mri->sex == 'f' || egoYOpcF1Mri->sex == 'm'; p47USfGBIgxb++) {
        if (p47USfGBIgxb == 0)
            egoYOpcF1Mri->next = NULL;
        else
            egoYOpcF1Mri->next = p2;
        p2 = egoYOpcF1Mri;
        egoYOpcF1Mri = (struct   student *) malloc (LEN);
        scanf ("%s %s %c %d %s %s", &egoYOpcF1Mri->num, &egoYOpcF1Mri->name, &egoYOpcF1Mri->sex, &egoYOpcF1Mri->age, &egoYOpcF1Mri->grade, &egoYOpcF1Mri->Tekv8oJur9);
    }
    head = p2;
    return (head);
}

void  print (struct   student *head) {
    struct   student *p;
    if (head != NULL) {
        p = head;
        while (p != NULL) {
            printf ("%s %s %c %d %s %s\n", p->num, p->name, p->sex, p->age, p->grade, p->Tekv8oJur9);
            p = p->next;
        };
    };
}

void  main () {
    struct   student *head;
    print (head);
    head = xCHyArnIweBz ();
}

