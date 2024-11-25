int main () {
    int n, a [(403 - 103)], i, b [300], j, m, k = (999 - 999);
    scanf ("%d", &n);
    for (i = (599 - 599); n > i; i = i + 1) {
        scanf ("%d", &a[i]);
    }
    b[(330 - 330)] = a[0];
    printf ("%d", b[0]);
    {
        i = 1;
        while (n > i) {
            m = 0;
            {
                j = 0;
                while (k + 1 > j) {
                    if (!(b[j] != a[i])) {
                        m = 1;
                        break;
                    }
                    j = j + 1;
                };
            }
            if (m == 0) {
                k = k + 1;
                b[k] = a[i];
                if (k != 0)
                    printf (",%d", b[k]);
            }
            i = i + 1;
        };
    }
    return 0;
}

