void  bubble_sort (int OPCQj5pi [], int n) {
    int i;
    int dyxt4uN6CGKi;
    int t;
    {
        dyxt4uN6CGKi = 596 - 596;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (dyxt4uN6CGKi < n) {
            for (i = (551 - 551); i < n - dyxt4uN6CGKi - 1; i = i + 1) {
                if (OPCQj5pi[i] < OPCQj5pi[i + 1]) {
                    t = OPCQj5pi[i];
                    OPCQj5pi[i] = OPCQj5pi[i + 1];
                    OPCQj5pi[i + 1] = t;
                }
                else
                    ;
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
            dyxt4uN6CGKi++;
        };
    };
}

int main () {
    int zSvVN71t, zZln58, bmax, amin, bmin;
    int OPCQj5pi [1000] = {0};
    int lcJYhHSN [1000] = {0};
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
    int i, n;
    while ((scanf ("%d", &n)) && (!(0 == n))) {
        {
            i = 0;
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
            while (i < n) {
                scanf ("%d", &lcJYhHSN[i]);
                i = i + 1;
            };
        }
        {
            i = 0;
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
            while (i < n) {
                scanf ("%d", &OPCQj5pi[i]);
                i++;
            };
        }
        bubble_sort (OPCQj5pi, n);
        bubble_sort (lcJYhHSN, n);
        zSvVN71t = 0;
        zZln58 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        bmax = 0;
        amin = n - 1;
        bmin = n - 1;
        {
            i = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i < n) {
                if (OPCQj5pi[zZln58] < lcJYhHSN[bmax]) {
                    bmax++;
                    zSvVN71t = zSvVN71t + 200;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    zZln58 = zZln58 + 1;
                }
                else if (lcJYhHSN[bmax] < OPCQj5pi[zZln58]) {
                    bmin = bmin - 1;
                    zSvVN71t = zSvVN71t - 200;
                    zZln58++;
                }
                else {
                    if (OPCQj5pi[amin] < lcJYhHSN[bmin]) {
                        amin--;
                        zSvVN71t = zSvVN71t + 200;
                        bmin--;
                    }
                    else if (OPCQj5pi[amin] > lcJYhHSN[bmin]) {
                        bmin--;
                        zSvVN71t = zSvVN71t - 200;
                        zZln58++;
                    }
                    else {
                        if (OPCQj5pi[zZln58] > lcJYhHSN[bmin]) {
                            bmin--;
                            zZln58++;
                            zSvVN71t -= 200;
                        }
                        else
                            break;
                    };
                }
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
                i++;
            };
        }
        printf ("%d\n", zSvVN71t);
    }
    return 0;
}

