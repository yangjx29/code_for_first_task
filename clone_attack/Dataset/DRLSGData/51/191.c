int main () {
    int i;
    int count [(883 - 383)];
    char s [510];
    int k;
    int j;
    int max;
    int n;
    int x;
    char a [(1293 - 793)] [5];
    scanf ("%d", &n);
    scanf ("%s", s);
    max = 0;
    for (i = 0; 500 > i; i = i + 1)
        count[i] = 1;
    k = 0;
    for (i = 0; s[i + n - 1] != 0; i = i + 1) {
        for (j = 0; n > j; j = j + 1) {
            a[k][j] = s[i + j];
        }
        a[k][j] = 0;
        k = k + 1;
    }
    for (i = 0; i < k; i++) {
        for (j = i + 1; k > j; j = j + 1) {
            x = strcmp (a[i], a[j]);
            if (x == 0)
                count[i]++;
        }
        if (count[i] >= max)
            max = count[i];
    }
    if (max != 1) {
        printf ("%d\n", max);
        for (i = 0; i < k; i++) {
            if (count[i] == max)
                printf ("%s\n", a[i]);
        }
    }
    else {
    }
    return 0;
}

