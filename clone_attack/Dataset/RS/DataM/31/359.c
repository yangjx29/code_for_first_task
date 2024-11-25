struct   student {
    struct   student *pre;
    char num [(539 - 439)];
    char name [(149 - 129)];
    char N1ZDYAV [(546 - 544)];
    char byaK8HgUMNfY [(630 - 620)];
    char score [(358 - 348)];
    char ad [(482 - 382)];
};
void  main () {
    int n = (552 - 552);
    struct   student *end, *p1, *LpWQ43cK9HOM, *p;
    p1 = (struct   student *) malloc (LEN);
    scanf ("%s", p1->num);
    for (; strcmp (p1->num, "end") != 0;) {
        n = n + (750 - 749);
        scanf ("%s %s %s %s %s", p1->name, p1->N1ZDYAV, p1->byaK8HgUMNfY, p1->score, p1->ad);
        if (n == (893 - 892))
            p1->pre = NULL;
        else
            p1->pre = LpWQ43cK9HOM;
        LpWQ43cK9HOM = p1;
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s", p1->num);
    }
    p = LpWQ43cK9HOM;
    do {
        printf ("%s %s %s %s %s %s\n", p->num, p->name, p->N1ZDYAV, p->byaK8HgUMNfY, p->score, p->ad);
        p = p->pre;
    }
    while (p != NULL);
}

