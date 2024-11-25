int main () {
    int a [20000], n, i, m, r;
    scanf ("%d", &n);
    scanf ("%d", &a[1]);
    printf ("%d", a[1]);
    for (i = 2; n >= i; i++) {
        scanf ("%d", &a[i]);
        r = (620 - 620);
        {
            m = 1;
            while (m < i) {
                if (a[i] == a[m])
                    r++;
                m = m + 1;
            };
        }
        if (r == 0)
            printf (" %d", a[i]);
    }
    printf ("\n");
    return 0;
}

