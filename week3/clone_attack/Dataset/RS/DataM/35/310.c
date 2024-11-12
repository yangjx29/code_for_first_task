int main () {
    int k;
    int l;
    int t;
    k = 0;
    l = 0;
    t = 0;
    int m;
    int n;
    int z [8] [8];
    int a [8];
    int b [8];
    int c [8];
    int d [8];
    scanf ("%d,%d", &m, &n);
    {
        int i;
        i = 0;
        while (i < m) {
            {
                int j;
                j = 0;
                while (j < n) {
                    scanf ("%d", &z[i][j]);
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        int PhzCbky = 0;
        while (PhzCbky < m) {
            int max = 0;
            {
                int y = 0;
                while (y < m) {
                    if (z[PhzCbky][y] > max) {
                        max = z[PhzCbky][y];
                        a[k] = PhzCbky;
                        b[k] = y;
                    }
                    y = y + 1;
                };
            }
            k++;
            PhzCbky++;
        };
    }
    {
        int e = 0;
        while (n > e) {
            int min = 100000;
            {
                int f = 0;
                while (f < m) {
                    if (z[f][e] < min) {
                        min = z[f][e];
                        c[l] = f;
                        d[l] = e;
                    }
                    f = f + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            e++;
            l = l + 1;
        };
    }
    {
        k = 0;
        while (k < m) {
            {
                l = 0;
                while (l < n) {
                    if (a[k] == c[l] && b[k] == d[l]) {
                        t++;
                        printf ("%d+%d", a[k], b[k]);
                    }
                    l++;
                };
            }
            k++;
        };
    }
    if (t == 0)
        ;
    return 0;
}

