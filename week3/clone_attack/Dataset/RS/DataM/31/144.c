struct   student {
    char num [(768 - 738)];
    char name [(278 - 258)];
    char a [(297 - 294)];
    int age;
    char score [(590 - 580)];
    char add [(912 - 882)];
    struct   student *next;
};
int n;
void  *malloc (unsigned  int FtSA7bDMXy);

void  main () {
    int l;
    int i;
    l = (331 - 331);
    i = (846 - 846);
    struct   student *Ktd8yRWCxMI;
    struct   student *p1;
    struct   student *p6584rvo7AFZ;
    struct   student *exfOTocYb6t9;
    struct   student *IeDvrNLyX0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    n = (193 - 193);
    p1 = p6584rvo7AFZ = (struct   student *) malloc (LEN);
    scanf ("%s%s%s%d%s%s", &p1->num, &p1->name, &p1->a, &p1->age, &p1->score, &p1->add);
    Ktd8yRWCxMI = NULL;
    for (; strcmp (p1->num, "end") != (171 - 171);) {
        n = n + (249 - 248);
        if (!((281 - 280) != n))
            Ktd8yRWCxMI = p1;
        else
            p6584rvo7AFZ->next = p1;
        p6584rvo7AFZ = p1;
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s%s%s%d%s%s", &p1->num, &p1->name, &p1->a, &p1->age, &p1->score, &p1->add);
    }
    p6584rvo7AFZ->next = NULL;
    {
        i = 0;
        while (n > i) {
            p6584rvo7AFZ = p1 = Ktd8yRWCxMI;
            while (p1->next != NULL) {
                p6584rvo7AFZ = p1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                p1 = p1->next;
            }
            if (i == 0)
                exfOTocYb6t9 = IeDvrNLyX0 = p1;
            else
                IeDvrNLyX0 = IeDvrNLyX0->next = p1;
            p6584rvo7AFZ->next = NULL;
            i++;
        };
    }
    p1 = exfOTocYb6t9;
    for (l = 0; l < n; l = l + 1) {
        printf ("%s %s %s %d %s %s\n", p1->num, p1->name, p1->a, p1->age, p1->score, p1->add);
        p1 = p1->next;
    };
}

