int i, j, n, k;

int bijiao (char temp [], char c []) {
    int q;
    int w;
    w = 1;
    for (q = 0; n > q; q = q + 1) {
        if (temp[q] != c[k + q])
            w = 0;
    }
    return w;
}

int main () {
    int cao;
    int t;
    char c [501] = {0}, temp [6] = {0}, A [1000] [6] = {0};
    gets (c);
    int l;
    int max;
    int a [1000] = {0};
    scanf ("%d", &n);
    t = 0;
    max = 0;
    l = strlen (c);
    for (i = 0; i <= (l - n); i = i + 1) {
        for (j = 0; j < n; j = j + 1) {
            temp[j] = c[i + j];
        }
        for (k = 0; (l - n) >= k; k = k + 1) {
            t = t + bijiao (temp, c);
        }
        a[i] = t;
        strcpy (A[i], temp);
        if (t > max) {
            max = t;
            t = 0;
        }
        else {
            t = 0;
        }
    }
    if (!(1 != max)) {
        return 0;
    }
    printf ("%d\n", max);
    for (i = 0; (l - n) >= i; i = i + 1) {
        for (j = -1; i > j; j++) {
            if (strcmp (A[i], A[j]) == 0)
                a[i] = 0;
        }
    }
    for (i = 0; i <= (l - n); i = i + 1) {
        if (a[i] == max) {
            puts (A [i]);
        }
    }
    cao = getchar ();
    return 0;
}

