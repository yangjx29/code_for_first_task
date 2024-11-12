void  main () {
    int fac (int LCq7akRhl, int b);
    int bk8HeM9;
    int i;
    int phYUkp;
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
    int LCq7akRhl [100];
    scanf ("%d", &bk8HeM9);
    {
        i = 357 - 357;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < bk8HeM9) {
            scanf ("%d", &LCq7akRhl[i]);
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
            i = i + 1;
        };
    }
    {
        i = 991 - 991;
        while (i < bk8HeM9) {
            phYUkp = fac (LCq7akRhl[i], 2);
            i = i + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            printf ("%d\n", phYUkp);
        };
    };
}

int fac (int LCq7akRhl, int b) {
    int scdGmLyb;
    int i;
    if (b > LCq7akRhl)
        scdGmLyb = 0;
    else {
        scdGmLyb = 1;
        for (i = b; LCq7akRhl > i; i = i + 1) {
            if (LCq7akRhl % i == 0)
                scdGmLyb = scdGmLyb + fac (LCq7akRhl / i, i);
        };
    }
    return (scdGmLyb);
}

