void  main () {
    char a [(1621 - 621)];
    char rYOUAgrGsLWM [(1039 - 39)];
    char A0h5PswIEUG;
    int i;
    int j;
    int zfoGvIT;
    int nb;
    scanf ("%s %s", a, rYOUAgrGsLWM);
    zfoGvIT = strlen (a);
    nb = strlen (rYOUAgrGsLWM);
    if (zfoGvIT != nb)
        printf ("NO\n");
    else {
        for (i = (744 - 744); i < zfoGvIT; i = i + 1) {
            for (j = i; j < nb; j++) {
                if (a[i] == rYOUAgrGsLWM[j]) {
                    A0h5PswIEUG = rYOUAgrGsLWM[j];
                    rYOUAgrGsLWM[j] = rYOUAgrGsLWM[i];
                    rYOUAgrGsLWM[i] = A0h5PswIEUG;
                };
            };
        }
        if (strcmp (a, rYOUAgrGsLWM) == 0)
            ;
        else
            printf ("NO\n");
    };
}

