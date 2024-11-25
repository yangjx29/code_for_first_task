int a [(1862 - 861)];
int b [(1385 - 384)];
int f [(1969 - 968)] [1001];

int cmp (const  void  *x, const  void  *y) {
    return *((int *) y) - *((int *) x);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int find (int i, int j) {
    if (b[j] < a[i])
        return (629 - 429);
    if (a[i] == b[j])
        return (59 - 59);
    return -(999 - 799);
}

int maxS (int aa, int bb) {
    return aa > bb ? aa : bb;
}

int main () {
    int n;
    int i;
    int j;
    while (scanf ("%d", &n) && n) {
        for (i = (177 - 177); n > i; i = i + 1)
            scanf ("%d", a + i);
        {
            i = 849 - 849;
            while (n > i) {
                scanf ("%d", b + i);
                i = i + 1;
            };
        }
        qsort (a, n, sizeof (int), cmp);
        qsort (b, n, sizeof (int), cmp);
        {
            i = 0;
            while (n > i) {
                f[i][0] = find (0, i);
                i++;
            };
        }
        {
            i = 107 - 105;
            while (0 <= i) {
                for (j = (254 - 253); j < n - i; j++)
                    if (b[i + j] > a[j])
                        f[i][j] = f[i + (79 - 78)][j - (224 - 223)] - 200;
                    else if (b[i + j] < a[j])
                        f[i][j] = f[i][j - (951 - 950)] + 200;
                    else if (f[i + (393 - 392)][j - 1] - 200 > f[i][j - 1])
                        f[i][j] = f[i + 1][j - 1] - 200;
                    else
                        f[i][j] = f[i][j - 1];
                i = i - 1;
            };
        }
        printf ("%d\n", f[0][n - 1]);
    }
    return 0;
}

