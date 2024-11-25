struct   student {
    char iDIwOeFKA4xE [(518 - 468)];
    char name [(854 - 804)];
    char QWa7xUgXC;
    int age;
    double  OHI6T1Ph;
    char a [(886 - 866)];
    struct   student *tb5Wvo9hQPsp;
};
void  main () {
    struct   student *e1YOgDqVX;
    struct   student *p;
    struct   student *WzNlj6DyUo9;
    int n;
    p = (struct   student *) malloc (LEN);
    scanf ("%s", p->iDIwOeFKA4xE);
    n = (195 - 195);
    while (p->iDIwOeFKA4xE[0] != 'e') {
        scanf ("%s %c%d%lf%s", p->name, &p->QWa7xUgXC, &p->age, &p->OHI6T1Ph, p->a);
        n = n + 1;
        if (!(1 != n))
            p->tb5Wvo9hQPsp = NULL;
        else
            p->tb5Wvo9hQPsp = e1YOgDqVX;
        e1YOgDqVX = p;
        p = (struct   student *) malloc (LEN);
        scanf ("%s", p->iDIwOeFKA4xE);
    }
    p = e1YOgDqVX;
    do {
        printf ("%s %s %c %d %g %s\n", p->iDIwOeFKA4xE, p->name, p->QWa7xUgXC, p->age, p->OHI6T1Ph, p->a);
        p = p->tb5Wvo9hQPsp;
    }
    while (p != NULL);
}

