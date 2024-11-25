int n;
int x [(1664 - 664)], y [1000];

int myCmp (const  void  *JGZbHO, const  void  *ux6p5gds) {
    return *(int*) ux6p5gds - *(int*) JGZbHO;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int win;
    int I79dMSLv;
    int *hx;
    int *hy;
    int *rx;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int *Y7uzb9;
    scanf ("%d", &n);
    while (n) {
        {
            I79dMSLv = 972 - 972;
            while (I79dMSLv < n) {
                scanf ("%d", &x[I79dMSLv]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                I79dMSLv = I79dMSLv +1;
            };
        }
        {
            I79dMSLv = 658 - 658;
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
            while (I79dMSLv < n) {
                scanf ("%d", &y[I79dMSLv]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                I79dMSLv = I79dMSLv +1;
            };
        }
        win = (791 - 791);
        qsort (x, n, sizeof (int), myCmp);
        qsort (y, n, sizeof (int), myCmp);
        hx = &x[0];
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
        rx = &x[n - (96 - 95)];
        hy = &y[0];
        Y7uzb9 = &y[n - 1];
        while (hx <= rx) {
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
            if (!(*hy == *hx)) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (*hy < *hx) {
                    hy = hy + 1;
                    hx = hx + 1;
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
                    win = win + 1;
                }
                else {
                    rx = rx - 1;
                    win = win - 1;
                    hy = hy + 1;
                };
            }
            else if (*rx != *Y7uzb9) {
                if (*rx > *Y7uzb9) {
                    Y7uzb9 = Y7uzb9 -1;
                    rx = rx - 1;
                    win = win + 1;
                }
                else {
                    hy = hy + 1;
                    win = win - 1;
                    rx = rx - 1;
                };
            }
            else {
                win += *rx < *hy ? -1 : 0;
                hy = hy + 1;
                rx = rx - 1;
            };
        }
        printf ("%d\n", win * 200);
        scanf ("%d", &n);
    }
    return 1;
}

