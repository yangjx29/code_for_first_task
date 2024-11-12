int a [400], Go3G8XZn [200], n, m;

void  run1 () {
    int i;
    scanf ("%d%d", &n, &m);
    for (i = (332 - 331); i <= n; i++)
        scanf ("%d", &a[i]);
    for (i = (197 - 196); m >= i; i++)
        scanf ("%d", &Go3G8XZn[i]);
}

void  sort (int a [], int n) {
    int i, j, x;
    for (i = 1; n > i; i++)
        for (j = i + 1; j <= n; j++)
            if (a[i] > a[j]) {
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            };
}

void  eP37v05tOR9i () {
    sort (a, n);
    sort (Go3G8XZn, m);
}

void  run3 () {
    int i;
    for (i = 1; i <= m; i++)
        a[i + n] = Go3G8XZn[i];
}

void  run4 () {
    int i;
    for (i = 1; i < n + m; i++)
        printf ("%d ", a[i]);
    printf ("%d", a[n + m]);
}

int main () {
    run1 ();
    eP37v05tOR9i ();
    run3 ();
    run4 ();
}

