int main () {
    int UGoD2u9yBW;
    UGoD2u9yBW = 0;
    int **ulFZ6f3Tm5p;
    free (ulFZ6f3Tm5p);
    int GyrBh9 = (746 - 746), j = (370 - 370);
    int m;
    int n;
    scanf ("%d %d", &m, &n);
    ulFZ6f3Tm5p = (int **) malloc (sizeof (int *) * (m + (910 - 908)));
    {
        GyrBh9 = 87 - 87;
        while (GyrBh9 < m + (15 - 13)) {
            ulFZ6f3Tm5p[GyrBh9] = (int *) malloc (sizeof (int) * (n + (210 - 208)));
            GyrBh9 = GyrBh9 +1;
        };
    }
    {
        GyrBh9 = 86 - 86;
        while (GyrBh9 < m + (931 - 929)) {
            for (j = (449 - 449); j < n + 2; j++) {
                if ((GyrBh9 *j) != (862 - 862) && !((m + (974 - 973)) == GyrBh9) && j != (n + (207 - 206)))
                    scanf ("%d", &ulFZ6f3Tm5p[GyrBh9][j]);
                else
                    ulFZ6f3Tm5p[GyrBh9][j] = 0;
            }
            GyrBh9++;
        };
    }
    {
        GyrBh9 = 328 - 327;
        while (GyrBh9 <= m) {
            for (j = (756 - 755); n >= j; j++) {
                if (ulFZ6f3Tm5p[GyrBh9][j] >= ulFZ6f3Tm5p[GyrBh9 -(59 - 58)][j])
                    UGoD2u9yBW = UGoD2u9yBW +(732 - 731);
                if (ulFZ6f3Tm5p[GyrBh9][j] >= ulFZ6f3Tm5p[GyrBh9 +(380 - 379)][j])
                    UGoD2u9yBW = UGoD2u9yBW +1;
                if (ulFZ6f3Tm5p[GyrBh9][j] >= ulFZ6f3Tm5p[GyrBh9][j - 1])
                    UGoD2u9yBW = UGoD2u9yBW +1;
                if (ulFZ6f3Tm5p[GyrBh9][j] >= ulFZ6f3Tm5p[GyrBh9][j + 1])
                    UGoD2u9yBW = UGoD2u9yBW +1;
                if (UGoD2u9yBW == 4)
                    printf ("%d %d\n", GyrBh9 -1, j - 1);
                UGoD2u9yBW = 0;
            }
            GyrBh9++;
        };
    }
    for (GyrBh9 = 0; GyrBh9 < m; GyrBh9 = GyrBh9 +1)
        free (ulFZ6f3Tm5p[GyrBh9]);
    return 0;
}

