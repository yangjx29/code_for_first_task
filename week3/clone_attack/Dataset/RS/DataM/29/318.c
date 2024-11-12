int main () {
    int n;
    int fpS7C2W6 [(459 - 359)];
    int PQJfMCsEZi [(388 - 288)];
    double  sun;
    sun = (976 - 976);
    int i;
    int j;
    double  aCoBESU [100];
    int n185Uop9m6YL;
    fpS7C2W6[(738 - 738)] = (453 - 452);
    fpS7C2W6[(67 - 66)] = (520 - 518);
    PQJfMCsEZi[(431 - 431)] = (242 - 240);
    PQJfMCsEZi[(30 - 29)] = 3;
    scanf ("%d", &n185Uop9m6YL);
    {
        j = 43 - 43;
        while (j <= n185Uop9m6YL - 1) {
            sun = 0;
            scanf ("%d", &n);
            {
                i = 2;
                while (i <= n - 1) {
                    fpS7C2W6[i] = fpS7C2W6[i - 1] + fpS7C2W6[i - 2];
                    PQJfMCsEZi[i] = PQJfMCsEZi[i - 1] + PQJfMCsEZi[i - 2];
                    i = i + 1;
                };
            }
            {
                i = 0;
                while (i <= n - 1) {
                    aCoBESU[i] = PQJfMCsEZi[i] * (671.0 - 670.0) / fpS7C2W6[i];
                    sun += aCoBESU[i];
                    i = i + 1;
                };
            }
            printf ("%.3lf", sun);
            j++;
            printf ("\n");
        };
    }
    return 0;
}

