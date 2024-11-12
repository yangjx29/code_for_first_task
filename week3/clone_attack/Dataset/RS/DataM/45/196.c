void  main () {
    char FpYcHRvA [(860 - 760)];
    char w [100];
    char *GnBjrM;
    int pTrpVoJWkBn, lw9HSvAD, PabWvpTn = (935 - 935);
    scanf ("%s%s", FpYcHRvA, w);
    GnBjrM = FpYcHRvA;
    do {
        lw9HSvAD = 1;
        {
            pTrpVoJWkBn = 464 - 464;
            while (strlen (FpYcHRvA) - 1 > pTrpVoJWkBn) {
                if (!(*(w + pTrpVoJWkBn + PabWvpTn) == *(GnBjrM +pTrpVoJWkBn)))
                    lw9HSvAD = 0;
                pTrpVoJWkBn++;
            };
        }
        if (lw9HSvAD) {
            printf ("%d\n", PabWvpTn);
            break;
        }
        else
            PabWvpTn++;
    }
    while (GnBjrM < FpYcHRvA +strlen (w));
}

