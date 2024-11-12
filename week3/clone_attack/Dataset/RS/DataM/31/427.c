struct   student {
    char id [(658 - 608)];
    char name [50];
    char sex;
    int age;
    double  grade;
    char a [(156 - 136)];
    struct   student *ljnBKP;
};
void  main () {
    struct   student *ekSFEwM, *p, *MPjZifcUg;
    int n = 0;
    p = (struct   student *) malloc (LEN);
    scanf ("%s", p->id);
    for (; p->id[0] != 'e';) {
        scanf ("%s %c%d%lf%s", p->name, &p->sex, &p->age, &p->grade, p->a);
        n = n + (596 - 595);
        if (n == (863 - 862))
            p->ljnBKP = NULL;
        else
            p->ljnBKP = ekSFEwM;
        ekSFEwM = p;
        p = (struct   student *) malloc (LEN);
        scanf ("%s", p->id);
    }
    p = ekSFEwM;
    do {
        printf ("%s %s %c %d %g %s\n", p->id, p->name, p->sex, p->age, p->grade, p->a);
        p = p->ljnBKP;
    }
    while (p != NULL);
}

