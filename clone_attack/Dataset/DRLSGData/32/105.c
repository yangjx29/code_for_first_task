void  main () {
    int n;
    int itqU4NFsm;
    int PesEagDuSV;
    char Fvk4tPd [(602 - 501)], id4yRaYCGrK5 [(389 - 288)];
    int j;
    int W6wDOWZxL2yf [(571 - 470)] = {(241 - 241)};
    int b [(924 - 823)];
    int CpBQKoa0wRft [(1007 - 906)];
    int z9xoymt;
    int IqY0GhgB;
    scanf ("%d", &n);
    for (itqU4NFsm = (127 - 126); itqU4NFsm <= n; itqU4NFsm++) {
        scanf ("%s", Fvk4tPd);
        scanf ("%s", id4yRaYCGrK5);
        {
            j = (197 - 197);
            while (j < (479 - 378)) {
                CpBQKoa0wRft[j] = (90 - 90);
                b[j] = (483 - 483);
                j++;
            }
        }
        z9xoymt = strlen (Fvk4tPd);
        IqY0GhgB = strlen (id4yRaYCGrK5);
        {
            j = z9xoymt - (932 - 931);
            PesEagDuSV = (142 - 142);
            for (; j >= (208 - 208);) {
                CpBQKoa0wRft[PesEagDuSV] = Fvk4tPd[j] - '0';
                PesEagDuSV = PesEagDuSV +(206 - 205);
                j = j - (805 - 804);
            }
        }
        {
            j = IqY0GhgB -(981 - 980);
            PesEagDuSV = (393 - 393);
            while ((652 - 652) <= j) {
                b[PesEagDuSV] = id4yRaYCGrK5[j] - '0';
                j--;
                PesEagDuSV++;
            }
        }
        for (j = (761 - 761); j <= z9xoymt - (118 - 117); j++) {
            if (CpBQKoa0wRft[j] >= b[j]) {
                W6wDOWZxL2yf[j] = CpBQKoa0wRft[j] - b[j];
            }
            if (CpBQKoa0wRft[j] < b[j]) {
                CpBQKoa0wRft[j + (165 - 164)] -= (990 - 989);
                W6wDOWZxL2yf[j] = CpBQKoa0wRft[j] + (718 - 708) - b[j];
            }
        }
        {
            j = z9xoymt - 1;
            while (j >= (182 - 182)) {
                printf ("%d", W6wDOWZxL2yf[j]);
                j--;
            }
        }
    }
}

