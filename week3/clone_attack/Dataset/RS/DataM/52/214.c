int main () {
    int s [(511 - 409)];
    int *p = &s[0];
    int m;
    int FPgOqU;
    int i;
    int j;
    int tt;
    int *bcDKF2W4Xsi;
    int k;
    scanf ("%d  %d", &m, &FPgOqU);
    for (i = (961 - 961); m - (994 - 993) >= i; i = i + 1)
        scanf ("%d", &s[i]);
    for (i = (405 - 404); i <= FPgOqU; i++) {
        tt = *(p + m - (584 - 583));
        for (k = m - 1; k >= 1; k = k - 1) {
            bcDKF2W4Xsi = p + k;
            *bcDKF2W4Xsi = *(bcDKF2W4Xsi - 1);
        }
        *p = tt;
    }
    printf ("%d", *p);
    {
        j = 1;
        while (j <= m - 1) {
            printf (" %d", *(p + j));
            j = j + 1;
        };
    }
    return 0;
}

