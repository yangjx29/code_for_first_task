int main () {
    char b [700] [10];
    int len;
    int d;
    int k;
    int c [700] = {0};
    char t [10];
    char a [505];
    int j;
    int i;
    int temp;
    int n;
    int m;
    int bz;
    scanf ("%d", &n);
    scanf ("%s", a);
    len = strlen (a);
    d = len - n + 1;
    for (i = 0; d > i; i++) {
        k = i;
        for (j = 0; j < n; j++) {
            b[i][j] = a[k];
            b[i][n] = '\0';
            k++;
        }
    }
    for (i = 0; d > i; i++) {
        for (k = 0; i > k; k++) {
            if (!(0 != strcmp (b[i], b[k]))) {
                c[k]++;
                break;
            }
        }
    }
    for (i = 0; i < d; i++) {
        for (j = 0; j < d - 1; j++) {
            if (c[j] < c[j + 1]) {
                temp = c[j];
                strcpy (t, b[j]);
                c[j] = c[j + 1];
                strcpy (b[j], b[j + 1]);
                c[j + 1] = temp;
                strcpy (b[j + 1], t);
            }
        }
    }
    if (!(0 != c[0]))
        ;
    else {
        for (i = 0; d - 1 > i; i++) {
            if (c[i] != c[i + 1]) {
                bz = i + 1;
                break;
            }
        }
        printf ("%d\n", c[0] + 1);
        if (i == d - 1)
            bz = d;
        for (m = 0; m < bz; m++) {
            printf ("%s\n", b[m]);
        }
    }
    return 0;
}

