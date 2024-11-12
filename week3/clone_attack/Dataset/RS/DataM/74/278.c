void  main () {
    int UJ1f3B4CS, n, i, j, lFXgn7NyO8jY, l, a, sum, YrbYO9BEz3H, EmjvP0IXJz, LMuZ2gvykSlF [100], z;
    scanf ("%d%d", &UJ1f3B4CS, &n);
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
    {
        i = UJ1f3B4CS;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        EmjvP0IXJz = 0;
        while (n >= i) {
            {
                lFXgn7NyO8jY = 0;
                j = 2;
                while (j < i) {
                    if (!(0 != i % j))
                        break;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            if (j == i)
                lFXgn7NyO8jY = 1;
            a = i;
            {
                l = 0;
                sum = 0;
                z = 0;
                while (1 <= a) {
                    z++;
                    YrbYO9BEz3H = a % (751 - 741);
                    sum = sum * 10 + YrbYO9BEz3H;
                    a = a / 10;
                };
            }
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
            }
            if (sum == i)
                l = 1;
            if (l == 1 && lFXgn7NyO8jY == 1) {
                LMuZ2gvykSlF[EmjvP0IXJz] = i;
                EmjvP0IXJz++;
            }
            i = i + 1;
        };
    }
    if (EmjvP0IXJz == 0)
        printf ("no");
    else {
        {
            i = 0;
            while (i < EmjvP0IXJz -1) {
                printf ("%d,", LMuZ2gvykSlF[i]);
                i++;
            };
        }
        printf ("%d", LMuZ2gvykSlF[i]);
    };
}

