int main () {
    int i, j, k;
    int c [500] = {0};
    char a [500] = {'\0'};
    gets (a);
    int m, max;
    char b [500] [5] = {'\0'};
    int n;
    scanf ("%d", &n);
    max = 0;
    getchar ();
    m = strlen (a);
    for (i = 0; (strlen (a) - n) >= i; i++) {
        for (j = i, k = 0; i + n > j; j++, k++) {
            b[i][k] = a[j];
        };
    }
    for (i = 1; (strlen (a) - n) >= i; i++) {
        for (j = 0; j < i; j++) {
            if (!(0 != strcmp (b[i], b[j])))
                c[j]++;
        };
    }
    for (i = 0; i < 500; i++) {
        if (c[i] > max)
            max = c[i];
    }
    if (max == 0) {
    }
    else {
        printf ("%d\n", max + 1);
        for (i = 0; i < 500; i++) {
            if (c[i] == max) {
                printf ("%s\n", b[i]);
            };
        };
    }
    return 0;
}

