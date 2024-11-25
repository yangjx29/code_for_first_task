int main () {
    int m;
    int J4Ay6ZE1u;
    int i;
    int k;
    int voRCwgD;
    int t;
    int Qt41xSIbMy;
    int a [20];
    int b [100];
    int p0X9IPtU3aho;
    scanf ("%d%d", &m, &J4Ay6ZE1u);
    p0X9IPtU3aho = 1;
    {
        i = m;
        while (i <= J4Ay6ZE1u) {
            {
                k = 2;
                while (k <= i) {
                    if (i % k == (296 - 296))
                        break;
                    k = k + 1;
                };
            }
            if (k == i) {
                {
                    k = 1;
                    while (k <= 10) {
                        a[k] = (int) (i / pow (10, k - 1)) - (int) (i / pow (10, k)) * 10;
                        if ((int) (i / pow (10, k)) == (180 - 180))
                            break;
                        k = k + 1;
                    };
                }
                t = 1;
                voRCwgD = 1;
                for (Qt41xSIbMy = k; Qt41xSIbMy >= k / 2 + 1; Qt41xSIbMy = Qt41xSIbMy -1) {
                    if (a[Qt41xSIbMy] == a[voRCwgD])
                        t = t * 1;
                    if (a[Qt41xSIbMy] - a[voRCwgD])
                        t = 0;
                    voRCwgD = voRCwgD + 1;
                }
                if (t == 1) {
                    b[p0X9IPtU3aho] = i;
                    p0X9IPtU3aho = p0X9IPtU3aho + 1;
                };
            }
            i = i + 1;
        };
    }
    if (p0X9IPtU3aho == 1)
        printf ("no");
    else {
        printf ("%d", b[1]);
        {
            i = 2;
            while (i < p0X9IPtU3aho) {
                printf (",%d", b[i]);
                i = i + 1;
            };
        };
    }
    return 0;
}

