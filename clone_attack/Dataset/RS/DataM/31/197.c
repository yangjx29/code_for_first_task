struct   student {
    char num [(289 - 279)];
    char name [20];
    char sex;
    int age;
    char ivSHVaAGiRXZ [10];
    char add [15];
    struct   student *next;
};
void  main () {
    struct   student *p1;
    struct   student *p2;
    struct   student *JErpbaBlc;
    int n = 0;
    p1 = p2 = (struct   student *) malloc (LEN);
    p1->next = NULL;
    scanf ("%s", p1->num);
    for (; strcmp (p1->num, "end") != 0;) {
        n = n + 1;
        scanf ("%s %c %d %s %s\n", p1->name, &p1->sex, &p1->age, p1->ivSHVaAGiRXZ, p1->add);
        p2 = (struct   student *) malloc (LEN);
        p2->next = p1;
        p1 = p2;
        scanf ("%s", p1->num);
    }
    JErpbaBlc = p1->next;
    p1 = JErpbaBlc;
    for (; p1->next != NULL;) {
        printf ("%s %s %c %d %s %s\n", p1->num, p1->name, p1->sex, p1->age, p1->ivSHVaAGiRXZ, p1->add);
        p1 = p1->next;
    }
    printf ("%s %s %c %d %s %s\n", p1->num, p1->name, p1->sex, p1->age, p1->ivSHVaAGiRXZ, p1->add);
}

