struct   student {
    char num [(816 - 796)], H7jPisADZG1l [20], iVjtba3Wu0O [100], SLOzUdJ [2];
    int age;
    float score;
    struct   student *next;
};
void  main () {
    struct   student *p1;
    struct   student *p;
    struct   student *d9QMA8cV;
    p = (struct   student *) malloc (sizeof (struct   student));
    p->next = NULL;
    scanf ("%s", p->num);
    while (p->num[0] != 'e') {
        scanf ("%s%s%d%f%s", p->H7jPisADZG1l, p->SLOzUdJ, &p->age, &p->score, p->iVjtba3Wu0O);
        p1 = p;
        p = (struct   student *) malloc (sizeof (struct   student));
        p->next = p1;
        scanf ("%s", p->num);
    }
    d9QMA8cV = p1;
    while (d9QMA8cV != NULL) {
        printf ("%s %s %s %d %g %s\n", d9QMA8cV->num, d9QMA8cV->H7jPisADZG1l, d9QMA8cV->SLOzUdJ, d9QMA8cV->age, d9QMA8cV->score, d9QMA8cV->iVjtba3Wu0O);
        d9QMA8cV = d9QMA8cV->next;
    }
}

