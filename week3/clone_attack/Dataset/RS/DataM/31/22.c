main () {
    int n;
    n = 0;
    struct   student {
        char uzJVpPDc [(40 - 20)];
        char name [20];
        char xvyPqw;
        int LvFj2r1LdM;
        float score;
        char WdvYwAmx [20];
        struct   student *LP0eonbzfT;
    };
    struct   student *vDukqscxFlwX, *p1, *p2;
    p1 = p2 = (struct   student *) malloc (LEN);
    scanf ("%s%s %c%d%f%s", p1->uzJVpPDc, p1->name, &p1->xvyPqw, &p1->LvFj2r1LdM, &p1->score, &p1->WdvYwAmx);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    p1->LP0eonbzfT = NULL;
    for (; n != (593 - 592);) {
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s", &p1->uzJVpPDc);
        if (strcmp (p1->uzJVpPDc, "end") != 0) {
            scanf ("%s %c%d%f%s", &p1->name, &p1->xvyPqw, &p1->LvFj2r1LdM, &p1->score, &p1->WdvYwAmx);
            p1->LP0eonbzfT = p2;
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
            p2 = p1;
        }
        else
            n = 1;
    }
    vDukqscxFlwX = NULL;
    vDukqscxFlwX = p2;
    p1 = vDukqscxFlwX;
    for (; p1 != NULL;) {
        printf ("%s %s %c %d %g %s\n", p1->uzJVpPDc, p1->name, p1->xvyPqw, p1->LvFj2r1LdM, p1->score, p1->WdvYwAmx);
        p1 = p1->LP0eonbzfT;
    };
}

