int main () {
    int pqJXrPTeLDyO, pV5z8ZnyYg, mk2T1ESg97Ye, r9URzmW2Dkxr;
    char NZgJEnWz [11];
    char awXq0H [4];
    char *InrxzRJlcU;
    char *Qm73fxDq;
    for (; scanf ("%s %s", NZgJEnWz, awXq0H) != EOF;) {
        pqJXrPTeLDyO = 0;
        InrxzRJlcU = NZgJEnWz;
        r9URzmW2Dkxr = strlen (NZgJEnWz);
        for (pV5z8ZnyYg = r9URzmW2Dkxr - 1; pV5z8ZnyYg >= 0; pV5z8ZnyYg = pV5z8ZnyYg - 1)
            if (*(InrxzRJlcU +pV5z8ZnyYg) >= pqJXrPTeLDyO) {
                mk2T1ESg97Ye = pV5z8ZnyYg;
                pqJXrPTeLDyO = *(InrxzRJlcU +pV5z8ZnyYg);
            }
        for (pV5z8ZnyYg = 0; pV5z8ZnyYg <= mk2T1ESg97Ye; pV5z8ZnyYg = pV5z8ZnyYg + 1)
            printf ("%c", *(InrxzRJlcU +pV5z8ZnyYg));
        Qm73fxDq = awXq0H;
        printf ("%s", Qm73fxDq);
        for (pV5z8ZnyYg = mk2T1ESg97Ye + 1; pV5z8ZnyYg < r9URzmW2Dkxr; pV5z8ZnyYg = pV5z8ZnyYg + 1)
            printf ("%c", *(InrxzRJlcU +pV5z8ZnyYg));
    }
}

