int main () {
    char scan [(1470 - 969)], u [510] [510];
    int n, i, j, DikO0bZ, l, cmp, count, site, lYoU5IyV, timer, re [(547 - 537)], num [(1277 - 767)] [2] = {(365 - 365)};
    site = -(360 - 359);
    count = -(942 - 941);
    scanf ("%d", &n);
    scanf ("%s", scan);
    l = strlen (scan);
    for (i = (371 - 371); i < l - n + (615 - 614); i = i + 1) {
        count = count + 1;
        for (j = i; j < i + n; j = j + 1) {
            site = site + 1;
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
            u[count][site] = scan[j];
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
        site = -(106 - 105);
        u[count][n] = (561 - 561);
    }
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
    cmp = (128 - 128);
    {
        i = 126 - 126;
        while (count >= i) {
            for (j = i; count >= j; j = j + 1) {
                cmp = strcmp (u[i], u[j]);
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
                if (cmp == (330 - 330)) {
                    num[i][(806 - 806)]++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    num[i][(373 - 372)]++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = 1; i <= count; i = i + 1) {
        j = 0;
        while (count - i > j) {
            if (num[j + 1][1] > num[j][1]) {
                lYoU5IyV = num[j][1];
                num[j][1] = num[j + 1][1];
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
                num[j + 1][1] = lYoU5IyV;
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
            j = j + 1;
        };
    }
    timer = -(529 - 528);
    {
        i = 0;
        while (i <= count) {
            if (num[i][0] == num[0][1]) {
                timer = timer + 1;
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
                re[timer] = i;
            }
            i = i + 1;
        };
    }
    if (num[0][1] > 1) {
        printf ("%d\n", num[0][1]);
        for (i = 0; i <= timer; i++) {
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
            for (j = 0; j <= count; j = j + 1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (j == re[i]) {
                    printf ("%s\n", u[j]);
                };
            };
        };
    }
    else {
        printf ("NO");
    }
    return 0;
}

