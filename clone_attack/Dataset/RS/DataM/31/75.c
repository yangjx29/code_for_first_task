struct   Student {
    struct   Student *nIfMlg7;
    char u3Nd4W9 [30];
    char E9zyFJ [30];
    char Zl6Bz8yUg;
    int OnoNaECdz2ve;
    double  jiYMWa;
    char QcQ14h [30];
};
int main () {
    struct   Student lMtQxzN;
    struct   Student *p;
    scanf ("%s%s %c%d%lf%s", lMtQxzN.u3Nd4W9, lMtQxzN.E9zyFJ, &lMtQxzN.Zl6Bz8yUg, &lMtQxzN.OnoNaECdz2ve, &lMtQxzN.jiYMWa, lMtQxzN.QcQ14h);
    p = (struct   Student *) malloc (LEN);
    *p = lMtQxzN;
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
    (*p).nIfMlg7 = NULL;
    for (; 1;) {
        scanf ("%s", lMtQxzN.u3Nd4W9);
        if (!('e' != lMtQxzN.u3Nd4W9[0]))
            break;
        scanf ("%s %c%d%lf%s", lMtQxzN.E9zyFJ, &lMtQxzN.Zl6Bz8yUg, &lMtQxzN.OnoNaECdz2ve, &lMtQxzN.jiYMWa, lMtQxzN.QcQ14h);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        lMtQxzN.nIfMlg7 = p;
        p = (struct   Student *) malloc (LEN);
        *p = lMtQxzN;
    }
    printf ("%s %s %c %d %g %s\n", p->u3Nd4W9, p->E9zyFJ, p->Zl6Bz8yUg, p->OnoNaECdz2ve, p->jiYMWa, p->QcQ14h);
    for (; (*p).nIfMlg7 != NULL;) {
        p = p->nIfMlg7;
        printf ("%s %s %c %d %g %s\n", p->u3Nd4W9, p->E9zyFJ, p->Zl6Bz8yUg, p->OnoNaECdz2ve, p->jiYMWa, p->QcQ14h);
    }
    return 0;
}

