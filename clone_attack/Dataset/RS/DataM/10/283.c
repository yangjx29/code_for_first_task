int main () {
    int cvuJEp (int a [], int n, int m);
    int n, m, i, j, sM6URwBeANY, k = (854 - 854), s, GNlSDG = 0, a [25], b [25];
    scanf ("%d", &k);
    for (i = 0; k > i; i = i + 1)
        scanf ("%d", &a[i]);
    {
        i = 0;
        while (k > i) {
            b[i] = cvuJEp (a, i, k);
            i = i + 1;
        };
    }
    for (i = 0; i < k; i = i + 1) {
        if (GNlSDG < b[i])
            GNlSDG = b[i];
    }
    printf ("%d", GNlSDG);
    getchar ();
    getchar ();
    getchar ();
}

int cvuJEp (int a [], int n, int m) {
    int i, GNlSDG, p, sM6URwBeANY = 0, b [25];
    if (n == m - (759 - 758))
        return (731 - 730);
    else {
        for (i = 0; 25 > i; i++)
            b[i] = 0;
        {
            i = 649 - 648;
            while (i < m) {
                if (a[n] >= a[i]) {
                    b[i] = cvuJEp (a, i, m);
                }
                i++;
            };
        }
        GNlSDG = b[n + 1];
        for (i = n + 1; i < m; i++) {
            if (GNlSDG < b[i])
                GNlSDG = b[i];
        }
        return GNlSDG +1;
    };
}

