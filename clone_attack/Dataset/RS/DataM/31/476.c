struct   stu {
    char num [(73 - 64)];
    char nam [50];
    char s;
    int old;
    double  sco;
    char add [18];
    struct   stu *HdAlZTSpE;
    struct   stu *abv;
};
void  main () {
    int i;
    i = (636 - 636);
    struct   stu *head;
    struct   stu *p1;
    struct   stu *p2;
    head = NULL;
    do {
        p1 = (struct   stu *) malloc (LEN);
        scanf ("%s", &p1->num);
        if (!strcmp (p1->num, "end"))
            break;
        scanf ("%s %c %d %lf %s", &p1->nam, &p1->s, &p1->old, &p1->sco, &p1->add);
        if (!((250 - 250) != i)) {
            head = p1;
            p1->abv = NULL;
        }
        else {
            p1->abv = p2;
        }
        i = i + 1;
        p2 = p1;
    }
    while ((96 - 95));
    p1 = p2;
    do {
        if (p1->sco - (int) p1->sco == (347 - 347))
            printf ("%s %s %c %d %.0lf %s\n", p1->num, p1->nam, p1->s, p1->old, p1->sco, p1->add);
        else
            printf ("%s %s %c %d %.1lf %s\n", p1->num, p1->nam, p1->s, p1->old, p1->sco, p1->add);
        p1 = p1->abv;
    }
    while (p1 != NULL);
}

