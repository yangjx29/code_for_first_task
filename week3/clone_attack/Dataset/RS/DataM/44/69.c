int i, y1Xstc2, wei;
int ZbzjvS (int x);

void  main () {
    {
        i = 193 - 192;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= N) {
            scanf ("%d", &y1Xstc2);
            printf ("%d\n", ZbzjvS (y1Xstc2));
            i = i + 1;
        };
    };
}

int ZbzjvS (int x) {
    int j;
    int a [(582 - 577)] = {(811 - 811)};
    int t;
    if (x == (634 - 634))
        return (153 - 153);
    else {
        if (x > 0) {
            t = 0;
            wei = (755 - 750);
            a[(590 - 586)] = x % (887 - 877);
            a[0] = (x - x % (10083 - 83)) / 10000;
            a[(867 - 866)] = (x - x % (1655 - 655)) / (1243 - 243) - 10 * a[0];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            a[(351 - 349)] = (x - x % 100) / 100 - 100 * a[0] - 10 * a[1];
            a[3] = (x - a[(744 - 740)]) / 10 - (1860 - 860) * a[0] - 100 * a[1] - 10 * a[2];
            {
                j = 0;
                while (j < 5) {
                    if (a[j] == 0)
                        wei = wei - 1;
                    else
                        break;
                    j = j + 1;
                };
            }
            {
                j = 4;
                while (j >= 0) {
                    wei = wei - 1;
                    t = t + a[j] * (int) pow (10, wei);
                    if (wei == 0)
                        break;
                    j = j - 1;
                };
            }
            return t;
        }
        else {
            t = 0;
            wei = 5;
            x = -x;
            a[4] = x % 10;
            a[0] = (x - x % 10000) / 10000;
            a[1] = (x - x % (1248 - 248)) / 1000 - 10 * a[0];
            a[2] = (x - x % 100) / 100 - 100 * a[0] - 10 * a[1];
            a[3] = (x - a[4]) / 10 - 1000 * a[0] - 100 * a[1] - 10 * a[2];
            {
                j = 0;
                while (j < 5) {
                    if (a[j] == 0)
                        wei = wei - 1;
                    else
                        break;
                    j = j + 1;
                };
            }
            {
                j = 4;
                while (j >= 0) {
                    wei = wei - 1;
                    t = t + a[j] * (int) pow (10, wei);
                    if (wei == 0)
                        break;
                    j = j - 1;
                };
            }
            return -t;
        };
    };
}

