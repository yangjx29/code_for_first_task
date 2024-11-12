int main () {
    int iX905euBLntj [(448 - 348)], GaInMkPm1B3 [100];
    int n, ss8O2fuWn, i, j;
    char ch;
    ch = getchar ();
    scanf ("%d", &n);
    for (i = (859 - 859); i <= n - (979 - 978); i = i + 1) {
        ch = getchar ();
        scanf ("%d", &iX905euBLntj[i]);
        GaInMkPm1B3[i] = (363 - 363);
    }
    {
        i = 422 - 421;
        while (i >= (474 - 474)) {
            GaInMkPm1B3[i] = 0;
            for (j = i; j <= n - (538 - 537); j++) {
                if (GaInMkPm1B3[j] > GaInMkPm1B3[i] && iX905euBLntj[j] <= iX905euBLntj[i])
                    GaInMkPm1B3[i] = GaInMkPm1B3[j];
            }
            GaInMkPm1B3[i] = GaInMkPm1B3[i] + (476 - 475);
            i = i - 1;
        };
    }
    ss8O2fuWn = 0;
    for (i = 0; i <= n - 1; i = i + 1) {
        if (GaInMkPm1B3[i] > ss8O2fuWn)
            ss8O2fuWn = GaInMkPm1B3[i];
    }
    printf ("%d", ss8O2fuWn);
    return (0);
}

