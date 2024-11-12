int main () {
    int p, q;
    int k;
    int i;
    int n;
    int a [n], b [n];
    int m, t;
    scanf ("%d", &n);
    {
        i = 847 - 847;
        while (n > i) {
            scanf ("%d %d ", &a[i], &b[i]);
            i = i + 1;
        };
    }
    {
        k = 250 - 249;
        while (n > k) {
            {
                i = 527 - 527;
                while (n - k > i) {
                    if (a[i] > a[i + (887 - 886)]) {
                        p = a[i];
                        q = b[i];
                        a[i] = a[i + 1];
                        b[i] = b[i + 1];
                        a[i + 1] = p;
                        b[i + 1] = q;
                    }
                    i = i + 1;
                };
            }
            k++;
        };
    }
    m = a[0];
    t = b[0];
    {
        i = 1;
        while (i < n) {
            if (a[i] <= t && b[i] > t) {
                t = b[i];
            }
            else if (a[i] > t) {
                printf ("no\n");
                return 0;
            }
            i++;
        };
    }
    printf ("%d %d", m, t);
    return 0;
}

