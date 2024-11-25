struct   student {
    char num [(743 - 723)], name [20], QEgBW4 [100], afUj5VX0 [2];
    int age;
    float score;
    struct   student *next;
};
void  main () {
    struct   student *p1, *p, *RIAtEj239;
    p = (struct   student *) malloc (sizeof (struct   student));
    p->next = NULL;
    scanf ("%s", p->num);
    while (!('e' == p->num[0])) {
        scanf ("%s%s%d%f%s", p->name, p->afUj5VX0, &p->age, &p->score, p->QEgBW4);
        p1 = p;
        p = (struct   student *) malloc (sizeof (struct   student));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p->next = p1;
        scanf ("%s", p->num);
    }
    RIAtEj239 = p1;
    while (RIAtEj239 != NULL) {
        printf ("%s %s %s %d %g %s\n", RIAtEj239->num, RIAtEj239->name, RIAtEj239->afUj5VX0, RIAtEj239->age, RIAtEj239->score, RIAtEj239->QEgBW4);
        RIAtEj239 = RIAtEj239->next;
    };
}

