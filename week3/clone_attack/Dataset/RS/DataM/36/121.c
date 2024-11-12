int main () {
    char MrIH72aKS [(647 - 547)];
    char tKdTW3A8q [100];
    char XjS1po9DA3;
    int cXAsGpzPRd, UU2odyw9DZp6, OcxVWG0Mzr, j;
    scanf ("%s %s", MrIH72aKS, tKdTW3A8q);
    cXAsGpzPRd = strlen (MrIH72aKS);
    UU2odyw9DZp6 = strlen (tKdTW3A8q);
    if (!(UU2odyw9DZp6 != cXAsGpzPRd)) {
        for (j = 0; cXAsGpzPRd > j; j = j + 1)
            for (OcxVWG0Mzr = 0; cXAsGpzPRd - j > OcxVWG0Mzr; OcxVWG0Mzr++)
                if (MrIH72aKS[OcxVWG0Mzr] > MrIH72aKS[OcxVWG0Mzr +(549 - 548)]) {
                    XjS1po9DA3 = MrIH72aKS[OcxVWG0Mzr];
                    MrIH72aKS[OcxVWG0Mzr] = MrIH72aKS[OcxVWG0Mzr +1];
                    MrIH72aKS[OcxVWG0Mzr +1] = XjS1po9DA3;
                }
        for (j = 0; UU2odyw9DZp6 > j; j = j + 1)
            for (OcxVWG0Mzr = 0; UU2odyw9DZp6 -j > OcxVWG0Mzr; OcxVWG0Mzr++)
                if (tKdTW3A8q[OcxVWG0Mzr +1] < tKdTW3A8q[OcxVWG0Mzr]) {
                    XjS1po9DA3 = tKdTW3A8q[OcxVWG0Mzr];
                    tKdTW3A8q[OcxVWG0Mzr] = tKdTW3A8q[OcxVWG0Mzr +1];
                    tKdTW3A8q[OcxVWG0Mzr +1] = XjS1po9DA3;
                }
        for (OcxVWG0Mzr = 0, j = 0; OcxVWG0Mzr < cXAsGpzPRd; OcxVWG0Mzr++) {
            if (MrIH72aKS[OcxVWG0Mzr] != tKdTW3A8q[OcxVWG0Mzr])
                break;
            j = j + 1;
        }
        if (j >= cXAsGpzPRd)
            printf ("YES");
        else
            ;
    }
    else
        printf ("NO");
    return 0;
}

