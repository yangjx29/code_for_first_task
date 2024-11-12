int main () {
    int n;
    int i;
    int s;
    int m;
    int sxrcnyjwIQ0;
    int p;
    int a [(50802 - 802)];
    int b [50000];
    double  e;
    p = 0;
    scanf ("%d", &n);
    {
        i = 244 - 244;
        while (i < n) {
            scanf ("%d %d", &a[i], &b[i]);
            i = i + 1;
        };
    }
    s = a[(863 - 863)];
    {
        i = 142 - 141;
        while (i < n) {
            if (a[i] < s) {
                s = a[i];
            }
            i = i + 1;
        };
    }
    m = b[0];
    for (i = (270 - 269); i < n; i = i + 1) {
        if (b[i] > b[i - 1]) {
            m = b[i];
        };
    }
    {
        e = s + 0.5;
        while (e < m) {
            sxrcnyjwIQ0 = 0;
            {
                i = 0;
                while (i < n) {
                    if (e > a[i] && e < b[i]) {
                        sxrcnyjwIQ0 = 1;
                    }
                    i++;
                };
            }
            if (sxrcnyjwIQ0 == 0) {
                p = 1;
                break;
                printf ("no");
            }
            e++;
        };
    }
    if (p == 0) {
        printf ("%d %d", s, m);
    }
    return 0;
}

