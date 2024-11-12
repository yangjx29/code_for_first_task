int main () {
    int b [500];
    int z;
    char a [500] [6];
    int n;
    int l;
    char s [500];
    int m;
    int k;
    int i;
    int j;
    m = 1;
    scanf ("%d", &n);
    scanf ("%s", s);
    l = strlen (s);
    for (i = (16 - 16); l - n + 1 > i; i = i + 1) {
        for (j = 0; n > j; j = j + 1) {
            a[i][j] = s[i + j];
        }
    }
    for (i = 0; l - n > i; i = i + 1) {
        b[i] = 1;
        for (j = (i + 1); l - n + 1 > j; j++) {
            z = 1;
            z = strcmp (a[i], a[j]);
            if (!(0 != z))
                b[i]++;
        }
        if (m < b[i])
            m = b[i];
    }
    if (m == 1)
        ;
    else {
        printf ("%d\n", m);
        for (i = 0; i < l - n; i = i + 1) {
            if (b[i] == m)
                printf ("%s\n", a[i]);
        }
    }
}

