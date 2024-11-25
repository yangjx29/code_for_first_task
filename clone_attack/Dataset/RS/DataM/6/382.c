int main () {
    int s [(1170 - 670)] [500];
    int RAs12j4XPQ0;
    int j;
    int i;
    int k;
    int m;
    int a;
    int IbNQAkm2iL;
    int all;
    int sum;
    scanf ("%d", &all);
    m = 0;
    {
        IbNQAkm2iL = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (IbNQAkm2iL < all) {
            IbNQAkm2iL++;
            sum = 0;
            scanf ("%d %d", &m, &RAs12j4XPQ0);
            {
                i = 0;
                while (m > i) {
                    {
                        j = 0;
                        while (RAs12j4XPQ0 > j) {
                            scanf ("%d", &s[i][j]);
                            sum += s[i][j];
                            j++;
                        };
                    }
                    i++;
                };
            }
            if ((!(1 != m)) || (!(1 != RAs12j4XPQ0)))
                printf ("%d\n", sum);
            else {
                for (i = 1; i <= m - 2; i++) {
                    j = 1;
                    while (j <= RAs12j4XPQ0 -2) {
                        sum = sum - s[i][j];
                        j++;
                    };
                }
                printf ("%d\n", sum);
            };
        };
    }
    return 0;
}

