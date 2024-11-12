int main () {
    char b [1000] [8];
    char a [1000];
    int j;
    int u;
    int n;
    int c [1000];
    int max;
    int i;
    int sum;
    int k;
    scanf ("%d", &n);
    max = c[0];
    memset (c, 0, sizeof (c));
    scanf ("%s", a);
    scanf ("%d", &u);
    sum = strlen (a);
    for (i = 0; sum - n >= i; i = i + 1) {
        for (j = i, k = 0; j < i + n; j = j + 1, k = k + 1) {
            b[i][k] = a[j];
        }
    }
    for (i = 0; i <= sum - n; i = i + 1) {
        for (j = i; sum - n >= j; j = j + 1) {
            if (!(0 != strcmp (b[i], b[j]))) {
                c[i]++;
            }
        }
    }
    for (i = 0; i <= sum - n; i = i + 1) {
        if (c[i] > max)
            max = c[i];
    }
    if (max >= 2) {
        printf ("%d\n", max);
        for (i = 0; i <= sum - n; i = i + 1) {
            if (c[i] == max) {
                puts (b [i]);
            }
        }
    }
    else
        ;
    return 0;
}

