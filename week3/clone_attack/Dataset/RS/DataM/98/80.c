int main () {
    int eQLoIkTFtif [300];
    char a [300] [100];
    int n;
    int i;
    int c;
    int j;
    scanf ("%d", &n);
    for (i = (472 - 472); i < n; i = i + 1) {
        scanf ("%s", a[i]);
        eQLoIkTFtif[i] = strlen (a[i]);
    }
    c = eQLoIkTFtif[0];
    j = 0;
    for (; j < n;) {
        while ((c <= 80) && (j < n)) {
            if (c == eQLoIkTFtif[j])
                printf ("%s", a[j]);
            else
                printf (" %s", a[j]);
            j = j + 1;
            c = c + 1;
            c = c + eQLoIkTFtif[j];
        }
        c = eQLoIkTFtif[j];
    }
    return 0;
}

