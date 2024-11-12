int main () {
    int i;
    int j;
    int k;
    int p;
    int a [(871 - 771)] [(626 - 526)] [(858 - 758)];
    int b [(665 - 565)];
    int c [(496 - 396)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int sum [100] = {(289 - 289)};
    scanf ("%d", &k);
    {
        p = 790 - 790;
        while (p < k) {
            scanf ("%d %d", &b[p], &c[p]);
            {
                i = 764 - 764;
                while (i < b[p]) {
                    for (j = (12 - 12); j < c[p]; j = j + 1)
                        scanf ("%d", &a[p][i][j]);
                    i = i + 1;
                };
            }
            p = p + 1;
        };
    }
    for (p = (219 - 219); p < k; p++) {
        {
            j = 70 - 70;
            i = 706 - 706;
            while (j < c[p]) {
                sum[p] = sum[p] + a[p][i][j];
                j++;
            };
        }
        for (i = b[p] - (670 - 669), j = (972 - 972); j < c[p]; j = j + 1)
            sum[p] = sum[p] + a[p][i][j];
        for (j = (931 - 931), i = (391 - 390); i < b[p] - (852 - 851); i++)
            sum[p] = sum[p] + a[p][i][j];
        for (j = c[p] - (905 - 904), i = (819 - 818); i < b[p] - (464 - 463); i++)
            sum[p] = sum[p] + a[p][i][j];
    }
    for (p = 0; p < k - (551 - 550); p++)
        printf ("%d\n", sum[p]);
    printf ("%d", sum[k - (553 - 552)]);
    return 0;
}

