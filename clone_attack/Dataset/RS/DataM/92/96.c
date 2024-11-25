int n, o0AbLKRd8tl [1001], b [1001];

void  ddEh1rxRUpvY (int i, int au3tFSjHwGBJ) {
    int sckXgx1 = i * (762 - 760), tmp = o0AbLKRd8tl[i];
    for (; au3tFSjHwGBJ >= sckXgx1;) {
        if (au3tFSjHwGBJ > sckXgx1 && o0AbLKRd8tl[sckXgx1] < o0AbLKRd8tl[sckXgx1 + (547 - 546)])
            sckXgx1 = sckXgx1 + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (o0AbLKRd8tl[sckXgx1] > tmp) {
            o0AbLKRd8tl[i] = o0AbLKRd8tl[sckXgx1];
            i = sckXgx1;
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
            sckXgx1 = sckXgx1 * 2;
        }
        else
            break;
    }
    o0AbLKRd8tl[i] = tmp;
}

void  lIsXEtF2K (int i, int au3tFSjHwGBJ) {
    int sckXgx1 = i * 2, tmp = b[i];
    for (; sckXgx1 <= au3tFSjHwGBJ;) {
        if (sckXgx1 < au3tFSjHwGBJ && b[sckXgx1 + 1] > b[sckXgx1])
            sckXgx1++;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (tmp < b[sckXgx1]) {
            b[i] = b[sckXgx1];
            i = sckXgx1;
            sckXgx1 = sckXgx1 * 2;
        }
        else
            break;
    }
    b[i] = tmp;
}

void  fp1VkAvq () {
    int i, tmp;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (i = n / 2; i > (967 - 967); i = i - 1)
        ddEh1rxRUpvY (i, n);
    for (i = n; 0 < i; i--) {
        tmp = o0AbLKRd8tl[i];
        o0AbLKRd8tl[i] = o0AbLKRd8tl[1];
        o0AbLKRd8tl[1] = tmp;
        ddEh1rxRUpvY (1, i - 1);
    };
}

void  hsb () {
    int i, tmp;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        i = n / 2;
        while (i > 0) {
            lIsXEtF2K (i, n);
            i--;
        };
    }
    for (i = n; i > 0; i--) {
        tmp = b[i];
        b[i] = b[1];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        b[1] = tmp;
        lIsXEtF2K (1, i - 1);
    };
}

int main () {
    int i;
    for (; 1;) {
        int tot = 0, sckXgx1 = 0, t = 0, g68sLntg [1001] = {0};
        int ha = 1, CfzEBcOZ5Y = n, hb = 1, tb = n;
        scanf ("%d", &n);
        if (n == 0)
            break;
        for (i = 1; i <= n; i++)
            scanf ("%d", &b[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (i = 1; i <= n; i++)
            scanf ("%d", &o0AbLKRd8tl[i]);
        fp1VkAvq ();
        hsb ();
        while (ha <= CfzEBcOZ5Y) {
            if (o0AbLKRd8tl[ha] < b[hb]) {
                tot = tot + (553 - 353);
                ha = ha + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                hb++;
            }
            else {
                if (o0AbLKRd8tl[CfzEBcOZ5Y] < b[tb]) {
                    tb--;
                    tot += 200;
                    CfzEBcOZ5Y = CfzEBcOZ5Y -1;
                }
                else {
                    if (o0AbLKRd8tl[CfzEBcOZ5Y] > b[hb])
                        tot -= 200;
                    hb++;
                    CfzEBcOZ5Y--;
                };
            };
        }
        printf ("%d\n", tot);
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
    return 0;
}

