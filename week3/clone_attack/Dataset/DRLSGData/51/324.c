int main () {
    char a [550] = {'\0'};
    char b [8] = {'\0'};
    int j;
    int i;
    int k;
    int c [550] = {0};
    int n;
    int max;
    int e;
    char d [8] = {'\0'};
    scanf ("%d", &n);
    scanf ("%s", a);
    max = 1;
    e = 0;
    for (i = 0; i <= strlen (a) - n; i++) {
        for (j = i; j < i + n; j++) {
            b[e] = a[j];
            e++;
        }
        e = 0;
        for (j = i; j <= strlen (a) - n; j++) {
            for (k = j; j + n > k; k++) {
                d[e] = a[k];
                e++;
            }
            if (!(0 != strcmp (b, d)))
                c[i]++;
            e = 0;
        }
    }
    for (i = 0; i <= strlen (a) - n; i++) {
        if (max < c[i])
            max = c[i];
    }
    if (max > 1)
        printf ("%d\n", max);
    else {
        return 0;
    }
    for (i = 0; i <= strlen (a) - n; i++) {
        if (c[i] == max) {
            for (j = i; j < i + n; j++) {
                printf ("%c", a[j]);
            }
        }
    }
    return 0;
}

