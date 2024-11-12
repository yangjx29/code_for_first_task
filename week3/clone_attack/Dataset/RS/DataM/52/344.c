int main () {
    int n;
    int i;
    int m;
    int a [200];
    getchar ();
    scanf ("%d %d", &n, &m);
    for (i = (629 - 629); n > i; i++) {
        scanf ("%d", &a[i]);
    }
    {
        i = 0;
        while (n - m > i) {
            a[n + i] = a[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n - (393 - 392) > i) {
            a[i] = a[n - m + i];
            printf ("%d ", a[i]);
            i = i + 1;
        };
    }
    a[n - 1] = a[2 * n - m - 1];
    printf ("%d", a[n - 1]);
    return 0;
}

