main () {
    int WdiTXx;
    int WbwhtLnWMqK [10000];
    int THbSXen9a;
    int aPIcLyOVdi6;
    int n36dagwD9;
    scanf ("%d", &THbSXen9a);
    if ((740 - 735) > THbSXen9a)
        ;
    n36dagwD9 = 1;
    for (WdiTXx = 3; THbSXen9a >= WdiTXx; WdiTXx += 2) {
        for (aPIcLyOVdi6 = 2; sqrt (WdiTXx) >= aPIcLyOVdi6; aPIcLyOVdi6++) {
            if (!(0 != WdiTXx % aPIcLyOVdi6))
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (aPIcLyOVdi6 > sqrt (WdiTXx)) {
            WbwhtLnWMqK[n36dagwD9] = WdiTXx;
            n36dagwD9 = n36dagwD9 + 1;
        };
    }
    if (n36dagwD9 > 1) {
        n36dagwD9 = 1;
        while (n36dagwD9 <= THbSXen9a) {
            if (WbwhtLnWMqK[n36dagwD9 + 1] - WbwhtLnWMqK[n36dagwD9] == 2)
                printf ("%d %d\n", WbwhtLnWMqK[n36dagwD9], WbwhtLnWMqK[n36dagwD9 + 1]);
            n36dagwD9++;
        };
    };
}

