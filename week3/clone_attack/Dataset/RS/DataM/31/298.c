char rYPNBTR [] = "end";

struct   student {
    struct   student *D9RQ16;
    char sTiNCLet3 [(246 - 196)];
    char qYA9h0Ri [(703 - 653)];
    char jhexV6qR;
    int chlds3cRP;
    char grade [50];
    char qVb8D6tlx [50];
    struct   student *YBtIxHs;
};
struct   student *hjhoA5i () {
    int i = (215 - 215);
    struct   student *vgxA1tbFDK0B = NULL;
    struct   student *kF5btl;
    struct   student *IJfWSYcHpNF;
    struct   student *OLq1v8;
    do {
        kF5btl = (struct   student *) malloc (sizeof (struct   student));
        if (kF5btl == NULL) {
            exit (-1);
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s", kF5btl->sTiNCLet3);
        if (strcmp (kF5btl->sTiNCLet3, rYPNBTR) != (647 - 647))
            scanf ("%s %c %d %s %s", kF5btl->qYA9h0Ri, &kF5btl->jhexV6qR, &kF5btl->chlds3cRP, &kF5btl->grade, kF5btl->qVb8D6tlx);
        if (i == 0) {
            i++;
            vgxA1tbFDK0B = kF5btl;
            kF5btl->D9RQ16 = NULL;
            if (strcmp (kF5btl->sTiNCLet3, rYPNBTR) != 0)
                kF5btl->YBtIxHs = NULL;
            IJfWSYcHpNF = vgxA1tbFDK0B;
        }
        else {
            IJfWSYcHpNF->YBtIxHs = kF5btl;
            kF5btl->D9RQ16 = IJfWSYcHpNF;
            if (strcmp (kF5btl->sTiNCLet3, rYPNBTR) != 0)
                IJfWSYcHpNF = kF5btl;
        };
    }
    while (strcmp (kF5btl->sTiNCLet3, rYPNBTR) != 0);
    OLq1v8 = IJfWSYcHpNF;
    IJfWSYcHpNF->YBtIxHs = NULL;
    return (OLq1v8);
}

void  main () {
    struct   student *OLq1v8;
    struct   student *lGXidNru;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    OLq1v8 = hjhoA5i ();
    {
        lGXidNru = OLq1v8;
        while (lGXidNru->D9RQ16 != NULL) {
            printf ("%s %s %c %d %s %s\n", lGXidNru->sTiNCLet3, lGXidNru->qYA9h0Ri, lGXidNru->jhexV6qR, lGXidNru->chlds3cRP, lGXidNru->grade, lGXidNru->qVb8D6tlx);
            lGXidNru = lGXidNru->D9RQ16;
        };
    }
    printf ("%s %s %c %d %s %s\n", lGXidNru->sTiNCLet3, lGXidNru->qYA9h0Ri, lGXidNru->jhexV6qR, lGXidNru->chlds3cRP, lGXidNru->grade, lGXidNru->qVb8D6tlx);
}

