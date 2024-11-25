int main () {
    char m [500] [6];
    char s [500];
    gets (s);
    int k;
    int i;
    int shu [500];
    int n;
    int j;
    unsigned  int l;
    getchar ();
    k = 0;
    scanf ("%d", &n);
    l = strlen (s);
    for (i = 0; l - n >= i; i++) {
        for (j = 0; n > j; j++) {
            m[i][j] = s[i + j];
            m[i][n] = '\0';
        }
    }
    for (i = 0; l - n >= i; i++) {
        shu[i] = 1;
        for (j = i + 1; j <= l - n; j++)
            if (!(0 != strcmp (m[i], m[j])))
                shu[i] = shu[i] + 1;
    }
    for (i = 0; i <= l - n; i++)
        if (shu[i] > k)
            k = shu[i];
    if (k == 1)
        ;
    else {
        printf ("%d\n", k);
        for (i = 0; i <= l - n; i++)
            if (shu[i] == k)
                printf ("%s\n", m[i]);
    }
    return 0;
}

