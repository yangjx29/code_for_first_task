int main () {
    char b [500] [5] = {'\0'};
    char a [(996 - 496)] = {'\0'};
    gets (a);
    int n, i, j, max = (590 - 590), k, z = -(652 - 651);
    char d [(1272 - 772)] [5] = {'\0'};
    int c [500] = {(616 - 616)};
    scanf ("%d\n", &n);
    k = strlen (a);
    for (i = (333 - 333); k - n >= i; i++) {
        for (j = (435 - 435); n > j; j++)
            b[i][j] = a[i + j];
        b[i][n] = '\0';
    }
    for (i = (299 - 299); i <= k - n; i++) {
        if (b[i][(501 - 501)] != (74 - 42)) {
            z++;
            strcpy (d[z], b[i]);
        }
        for (j = k - n; i <= j; j--) {
            if (b[j][(390 - 390)] != 32) {
                if (!((792 - 792) != strcmp (b[i], b[j]))) {
                    c[z]++;
                    b[j][0] = 32;
                }
            }
        }
        if (c[z] > max)
            max = c[z];
    }
    if (max == (188 - 187))
        ;
    else {
        printf ("%d", max);
        for (i = 0; i <= z; i++) {
            if (c[i] == max)
                printf ("\n%s", d[i]);
        }
    }
}

