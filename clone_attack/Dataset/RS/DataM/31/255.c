struct   student {
    char num [10];
    char Ky2rBcWm [20];
    char sex [2];
    int ARB5u3Nhjb;
    float score;
    char address [(673 - 633)];
    struct   student *xBs5M7VZm;
};
void  main () {
    struct   student *p, *ctRnN2E, *p2;
    ctRnN2E = (struct   student *) malloc (len);
    ctRnN2E->xBs5M7VZm = NULL;
    scanf ("%s", ctRnN2E->num);
    while (ctRnN2E->num[0] != 'e') {
        scanf ("%s%s%d%f%s", ctRnN2E->Ky2rBcWm, ctRnN2E->sex, &ctRnN2E->ARB5u3Nhjb, &ctRnN2E->score, ctRnN2E->address);
        p2 = ctRnN2E;
        ctRnN2E = (struct   student *) malloc (len);
        ctRnN2E->xBs5M7VZm = p2;
        scanf ("%s", ctRnN2E->num);
    }
    if (p2->xBs5M7VZm != NULL) {
        {
            p = p2;
            while (p->xBs5M7VZm != NULL) {
                printf ("%s %s %s %d %g %s\n", p->num, p->Ky2rBcWm, p->sex, p->ARB5u3Nhjb, p->score, p->address);
                p = p->xBs5M7VZm;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        printf ("%s %s %s %d %g %s\n", p->num, p->Ky2rBcWm, p->sex, p->ARB5u3Nhjb, p->score, p->address);
    }
    if (p2->xBs5M7VZm = NULL)
        printf ("%s %s %s %d %g %s\n", p2->num, p2->Ky2rBcWm, p2->sex, p2->ARB5u3Nhjb, p2->score, p2->address);
}

