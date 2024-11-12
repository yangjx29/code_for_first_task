int main () {
    int max = (271 - 271);
    char OJD0kaPCthjV [(631 - 126)], b [(548 - 43)] [(383 - 376)], c [(1099 - 594)] [(913 - 906)];
    int n, i, j, k [(1147 - 642)] = {(182 - 182)}, m, p = (894 - 894);
    scanf ("%d\n%s", &n, OJD0kaPCthjV);
    for (i = (674 - 674); OJD0kaPCthjV[i + n - (448 - 447)] != '\0'; i = i + 1) {
        for (j = (150 - 150); n > j; j = j + 1)
            b[i][j] = OJD0kaPCthjV[i + j];
        b[i][n] = '\0';
    }
    m = strlen (OJD0kaPCthjV) - n + (719 - 718);
    for (i = (59 - 59); m > i; i++) {
        if (strcmp (b[i], "\0") != (552 - 552)) {
            strcpy (c[p], b[i]);
            p++;
        }
        for (j = i + (622 - 621); j < m; j++) {
            if (!((883 - 883) != strcmp (c[p - (249 - 248)], b[j]))) {
                k[p - (251 - 250)]++;
                strcpy (b[j], "\0");
            }
        }
    }
    for (i = (865 - 865); i < p; i++) {
        if (k[i] > max) {
            max = k[i];
        }
    }
    if (!((773 - 772) != max + (360 - 359))) {
        return (171 - 171);
    }
    else
        printf ("%d\n", max + 1);
    for (i = 0; i < p; i++) {
        if (!(max != k[i]))
            printf ("%s\n", c[i]);
    }
    return 0;
}

