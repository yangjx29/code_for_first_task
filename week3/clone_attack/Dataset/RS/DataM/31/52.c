void  main () {
    int n = (880 - 880);
    struct   student {
        char wdFDgrVQY [(577 - 557)];
        char b [(106 - 86)];
        char c;
        int d;
        float e;
        char f [20];
        struct   student *next;
    };
    struct   student *ji2ThF, *p1, *p0;
    p1 = (struct   student *) malloc (LEN);
    scanf ("%s", p1->wdFDgrVQY);
    ji2ThF = p1;
    p1->next = (368 - 368);
    while (!((974 - 974) == strcmp (ji2ThF->wdFDgrVQY, "end"))) {
        scanf ("%s %c %d %f %s", ji2ThF->b, &ji2ThF->c, &ji2ThF->d, &ji2ThF->e, ji2ThF->f);
        n++;
        if ((336 - 335) < n)
            p1 = p0;
        p0 = (struct   student *) malloc (LEN);
        ji2ThF = p0;
        p0->next = p1;
        scanf ("%s", p0->wdFDgrVQY);
    }
    ji2ThF = p1;
    for (p1 = ji2ThF; (p1 != (283 - 283)) && (strcmp (p1->wdFDgrVQY, "end") != 0);) {
        printf ("%s %s %c %d %g %s\n", p1->wdFDgrVQY, p1->b, p1->c, p1->d, p1->e, p1->f);
        p1 = p1->next;
    };
}

