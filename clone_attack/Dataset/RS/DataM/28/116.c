void  main () {
    int EJE6nDzUs;
    int iZz5JP2Ku;
    int ExYE4j2n;
    int iMtVcDGZg [10000] = {(672 - 672)};
    int m1tuLNBFRXD [10000];
    EJE6nDzUs = (626 - 626);
    iZz5JP2Ku = (489 - 489);
    ExYE4j2n = 0;
    char *Hx1RJGdmLDQj, str [10000];
    gets (str);
    {
        Hx1RJGdmLDQj = str;
        while (*Hx1RJGdmLDQj != '\0') {
            if (*Hx1RJGdmLDQj == ' ') {
                EJE6nDzUs = EJE6nDzUs +1;
            }
            else {
                iMtVcDGZg[EJE6nDzUs]++;
            }
            Hx1RJGdmLDQj++;
        };
    }
    {
        iZz5JP2Ku = 0;
        while (iZz5JP2Ku < 1000) {
            if (iMtVcDGZg[iZz5JP2Ku] != 0) {
                m1tuLNBFRXD[ExYE4j2n] = iMtVcDGZg[iZz5JP2Ku];
                ExYE4j2n++;
            }
            iZz5JP2Ku++;
        };
    }
    printf ("%d", m1tuLNBFRXD[0]);
    {
        EJE6nDzUs = 1;
        while (EJE6nDzUs < ExYE4j2n) {
            printf (",%d", m1tuLNBFRXD[EJE6nDzUs]);
            EJE6nDzUs = EJE6nDzUs +1;
        };
    };
}

