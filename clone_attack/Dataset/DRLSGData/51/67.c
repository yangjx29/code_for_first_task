int main () {
    int q;
    int m = 0;
    char a [501] = {0};
    int num = 0, i = 0;
    int n;
    int p = 0;
    int z = 0;
    char b [500] [5] = {0}, c [5];
    int sum [500] = {0};
    scanf ("%d", &n);
    scanf ("%s", a);
    num = strlen (a);
    do {
        int j = 0;
        {
            z = i;
            while (z < n + i) {
                b[i][j] = a[z];
                j++;
                z++;
            }
        }
        num--;
        i++;
    }
    while (n <= num);
    do {
        {
            z = 0;
            while (z < i) {
                if (!(0 != strcmp (b[z], b[m])) && m != z) {
                    int j = 0;
                    sum[m]++;
                    {
                        j = 0;
                        while (5 > j) {
                            b[z][j] = '0';
                            j++;
                        }
                    }
                }
                z++;
            }
        }
        m++;
    }
    while (i - 2 > m);
    for (q = 0; q < i; q++) {
        if (sum[q] >= p)
            p = sum[q];
    }
    if (p == 0) {
        return 0;
    }
    printf ("%d\n", p + 1);
    for (q = 0; q < i; q++) {
        if (sum[q] == p) {
            printf ("%s\n", b[q]);
        }
    }
}

