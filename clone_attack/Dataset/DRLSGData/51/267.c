struct   bac {
    int num;
    int d;
    char a [5];
};
int main () {
    char BgZica7 [500], pygrmVD79A [6] = {0};
    gets (BgZica7);
    int aQ3sWSKL0Ib;
    int j;
    int gVBF6ih;
    int OIvog3Ps;
    int MIK4m0B7;
    int QI2iEv8M3;
    struct   bac abb [260];
    struct   bac temp;
    getchar ();
    MIK4m0B7 = strlen (BgZica7);
    scanf ("%d", &QI2iEv8M3);
    gVBF6ih = MIK4m0B7 -QI2iEv8M3;
    for (aQ3sWSKL0Ib = 0; 260 > aQ3sWSKL0Ib; aQ3sWSKL0Ib = aQ3sWSKL0Ib + 1) {
        abb[aQ3sWSKL0Ib].d = 1;
        for (j = 0; j < 5; j = j + 1)
            abb[aQ3sWSKL0Ib].a[j] = '\0';
    }
    for (aQ3sWSKL0Ib = 0; aQ3sWSKL0Ib <= gVBF6ih; aQ3sWSKL0Ib = aQ3sWSKL0Ib + 1) {
        OIvog3Ps = aQ3sWSKL0Ib;
        for (j = 0; j < QI2iEv8M3; j++) {
            abb[aQ3sWSKL0Ib].a[j] = BgZica7[OIvog3Ps];
            OIvog3Ps++;
        }
    }
    for (aQ3sWSKL0Ib = 0; gVBF6ih > aQ3sWSKL0Ib; aQ3sWSKL0Ib = aQ3sWSKL0Ib + 1) {
        abb[aQ3sWSKL0Ib].d = 0;
        for (j = aQ3sWSKL0Ib + 1; gVBF6ih >= j; j++) {
            if (!(0 != strcmp (abb[aQ3sWSKL0Ib].a, abb[j].a))) {
                abb[aQ3sWSKL0Ib].d++;
            }
        }
    }
    for (aQ3sWSKL0Ib = 0; aQ3sWSKL0Ib < gVBF6ih; aQ3sWSKL0Ib = aQ3sWSKL0Ib + 1) {
        for (j = 0; gVBF6ih - 1 - aQ3sWSKL0Ib > j; j++) {
            if (abb[j + 1].d > abb[j].d) {
                temp = abb[j];
                abb[j] = abb[j + 1];
                abb[j + 1] = temp;
            }
        }
    }
    if (abb[0].d > 0) {
        printf ("%d\n", abb[0].d + 1);
        for (aQ3sWSKL0Ib = 0; aQ3sWSKL0Ib < gVBF6ih; aQ3sWSKL0Ib++)
            if (abb[aQ3sWSKL0Ib].d == abb[0].d)
                printf ("%s\n", abb[aQ3sWSKL0Ib].a);
    }
    else
        ;
    return 0;
}

