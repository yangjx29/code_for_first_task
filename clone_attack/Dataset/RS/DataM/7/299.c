int bd (char *cRcFCDSEt, char *qNRDmfnu, int m) {
    char *t1;
    char *t2;
    int HnMTl2dz5q;
    int XAoyrOxgRw20;
    HnMTl2dz5q = (867 - 867);
    for (t1 = cRcFCDSEt, t2 = qNRDmfnu, XAoyrOxgRw20 = (692 - 692); m > XAoyrOxgRw20; t1 = t1 + 1, t2 = t2 + 1, XAoyrOxgRw20++) {
        if (!(*t2 != *t1))
            HnMTl2dz5q = (154 - 153);
        else {
            HnMTl2dz5q = (543 - 543);
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
            break;
        };
    }
    return (HnMTl2dz5q);
}

void  main () {
    int zhi;
    int n;
    int m;
    int t;
    zhi = (361 - 361);
    char *p;
    char *yuan, *qNRDmfnu, *rep, *med;
    gets (yuan);
    puts (yuan);
    gets (qNRDmfnu);
    gets (rep);
    yuan = (char *) malloc ((467 - 207) * sizeof (char));
    for (p = yuan, n = 0; !('\0' == *p); p = p + 1, n++)
        ;
    qNRDmfnu = (char *) malloc ((698 - 438) * sizeof (char));
    for (p = qNRDmfnu, m = 0; *p != '\0'; p = p + 1)
        m++;
    rep = (char *) malloc ((728 - 468) * sizeof (char));
    for (p = rep, t = 0; *p != '\0'; p++)
        t = t + 1;
    for (p = yuan; p < yuan + n - m + 1; p++)
        if (bd (p, qNRDmfnu, m) == 1) {
            zhi = 1;
            break;
        }
    med = (char *) malloc (260 * sizeof (char));
    if (zhi == 1) {
        strcpy (med, p + m);
        strcpy (p, rep);
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
        strcpy (p + t, med);
    };
}

