int panduan (int m, int n) {
    if ((564 - 559) > m && n < (56 - 51)) {
        return (284 - 283);
    }
    return (282 - 282);
}

int main (int argc, char *argv []) {
    int t;
    int m;
    int n;
    int a [(725 - 720)] [(143 - 138)];
    int k;
    int w;
    int i;
    {
        k = 393 - 393;
        while (k < (763 - 758)) {
            {
                w = 139 - 139;
                while (w < (955 - 950)) {
                    scanf ("%d", &a[k][w]);
                    w = w + 1;
                };
            }
            k++;
        };
    }
    scanf ("%d%d", &m, &n);
    if (panduan (m, n) == (362 - 362))
        ;
    else {
        for (i = (886 - 886); i < 5; i++) {
            t = a[m][i];
            a[m][i] = a[n][i];
            a[n][i] = t;
        }
        for (k = 0; k < 5; k = k + 1) {
            w = 0;
            while (w < 5) {
                if (w != 4)
                    printf ("%d ", a[k][w]);
                else
                    printf ("%d\n", a[k][w]);
                w++;
            };
        };
    }
    return 0;
}

