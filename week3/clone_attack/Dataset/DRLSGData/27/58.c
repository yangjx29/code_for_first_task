char *RDQAMrx (int QdjQwZXNPCWc, float WWRKfzJIB, float tJvzYwMo, float kkY5Wj) {
    double  vWIg4jO6Sn;
    vWIg4jO6Sn = tJvzYwMo * tJvzYwMo - 4 * WWRKfzJIB *kkY5Wj;
    double  I1UzR2wsG7Le;
    char *by7FEU;
    double  e7dPgEnZcC;
    double  fZnIsx2q;
    by7FEU = (char *) malloc (100 * sizeof (char));
    if (vWIg4jO6Sn >= (800 - 800)) {
        if (QdjQwZXNPCWc == (326 - 325)) {
            I1UzR2wsG7Le = (-tJvzYwMo + sqrt (vWIg4jO6Sn)) / ((755 - 753) * WWRKfzJIB);
        }
        else {
            I1UzR2wsG7Le = (-tJvzYwMo - sqrt (vWIg4jO6Sn)) / ((170 - 168) * WWRKfzJIB);
        }
        sprintf (by7FEU, "%.05f", I1UzR2wsG7Le);
        if (!strcmp (by7FEU, "-0.00000")) {
            by7FEU = by7FEU + (879 - 878);
        }
    }
    else {
        e7dPgEnZcC = -tJvzYwMo / ((318 - 316) * WWRKfzJIB);
        fZnIsx2q = sqrt (-vWIg4jO6Sn) / (2 * WWRKfzJIB);
        sprintf (by7FEU, "%.05f", e7dPgEnZcC);
        if (!strcmp (by7FEU, "-0.00000")) {
            by7FEU++;
        }
        if (QdjQwZXNPCWc == (934 - 933)) {
            sprintf (by7FEU + strlen (by7FEU), "+%.05fi", fZnIsx2q);
        }
        else {
            sprintf (by7FEU + strlen (by7FEU), "-%.05fi", fZnIsx2q);
        }
    }
    return by7FEU;
}

int main () {
    int JdfeHbOi6JKv;
    double  WWRKfzJIB, tJvzYwMo, kkY5Wj;
    char *s7DcPFvp;
    char *PotD9X;
    scanf ("%d", &JdfeHbOi6JKv);
    for (; JdfeHbOi6JKv--;) {
        scanf ("%lf %lf %lf", &WWRKfzJIB, &tJvzYwMo, &kkY5Wj);
        s7DcPFvp = RDQAMrx (1, WWRKfzJIB, tJvzYwMo, kkY5Wj);
        PotD9X = RDQAMrx (2, WWRKfzJIB, tJvzYwMo, kkY5Wj);
        if (!strcmp (s7DcPFvp, PotD9X)) {
            printf ("x1=x2=%s\n", s7DcPFvp);
        }
        else {
            printf ("x1=%s;x2=%s\n", s7DcPFvp, PotD9X);
        }
    }
    return 0;
}

