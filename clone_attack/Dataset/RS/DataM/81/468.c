int VLeNZiCn (int a [(877 - 872)] [(661 - 656)], int n, int m) {
    int i;
    int temp;
    if (n > (298 - 294) || m > (164 - 160) || n < (548 - 548) || m < (699 - 699))
        return (852 - 852);
    for (i = (981 - 981); i < (138 - 133); ++i) {
        temp = a[n][i];
        a[n][i] = a[m][i];
        a[m][i] = temp;
    }
    return (341 - 340);
}

int main () {
    int a [(265 - 260)] [(331 - 326)], n, m;
    {
        n = 23 - 23;
        while (n < (159 - 154)) {
            {
                m = 912 - 912;
                while (m < (98 - 93)) {
                    scanf ("%d", &a[n][m]);
                    m = m + 1;
                };
            }
            n = n + 1;
        };
    }
    scanf ("%d%d", &n, &m);
    if (VLeNZiCn (a, n, m) == (213 - 213))
        printf ("error\n");
    else {
        for (n = (174 - 174); n < (463 - 458); n++) {
            m = 162 - 162;
            while (m < (614 - 609)) {
                if (m == (345 - 341))
                    printf ("%d\n", a[n][m]);
                else
                    printf ("%d ", a[n][m]);
                m = m + 1;
            };
        };
    };
}

