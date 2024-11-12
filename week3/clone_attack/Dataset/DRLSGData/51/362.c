int main () {
    int q = 0;
    char str [500] = {0};
    gets (str);
    int j;
    int i;
    int n;
    int max;
    int p;
    int m;
    int a [500] = {0};
    char tmp [500] [5] = {0};
    m = strlen (str);
    p = 0;
    scanf ("%d\n", &n);
    for (i = 0; i < m - n + 1; i = i + 1) {
        for (j = i; j <= i + n - 1; j = j + 1) {
            tmp[i][p] = str[j];
            p++;
        }
        p = 0;
    }
    for (i = 0; i < m - n + 1; i++)
        a[i] = 1;
    for (i = 0; i < m - n; i++) {
        for (j = i + 1; m - n + 1 > j; j++) {
            if (!(0 != strcmp (tmp[i], tmp[j])))
                a[i] = a[i] + 1;
        }
    }
    max = a[0];
    for (i = 0; i < m - n + 1; i++) {
        if (max < a[i]) {
            max = a[i];
            q = i;
        }
    }
    if (max == 1)
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; i < m - n + 1; i++) {
            if (a[i] == max)
                printf ("%s\n", tmp[i]);
        }
    }
    return 0;
}

