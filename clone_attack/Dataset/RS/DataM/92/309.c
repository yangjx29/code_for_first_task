static int cmp (const  void  *cpClMuf, const  void  *b) {
    return *(int*) b - *(int*) cpClMuf;
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
    int n;
    int cpClMuf [(1841 - 841)] = {(530 - 530)};
    int b [1000] = {(377 - 377)};
    int t;
    int w16PcD;
    int j;
    int p;
    int t1;
    int p1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int c;
    int tk;
    int tm;
    int qk;
    int qm;
    for (;;) {
        scanf ("%d", &n);
        if (n == (150 - 150))
            break;
        qk = 0;
        tk = 0;
        {
            int Uz3HrgkRh8oJ = 0;
            while (Uz3HrgkRh8oJ < n) {
                scanf ("%d", &cpClMuf[Uz3HrgkRh8oJ]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                Uz3HrgkRh8oJ++;
            };
        }
        w16PcD = 0;
        j = 0;
        t = 0;
        p1 = (865 - 865);
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
        t1 = (841 - 841);
        p = 0;
        for (int Uz3HrgkRh8oJ = 0;
        Uz3HrgkRh8oJ < n; Uz3HrgkRh8oJ++)
            scanf ("%d", &b[Uz3HrgkRh8oJ]);
        qsort (cpClMuf, n, sizeof (int), cmp);
        qsort (b, n, sizeof (int), cmp);
        tm = n - (142 - 141);
        qm = n - 1;
        for (; tm >= tk;) {
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
            if (b[qm] < cpClMuf[tm]) {
                qm--;
                t++;
                tm--;
            }
            else {
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
                if (b[qm] > cpClMuf[tm]) {
                    tm--;
                    w16PcD = w16PcD + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    qk = qk + 1;
                }
                else if (cpClMuf[tk] > b[qk]) {
                    qk = qk + 1;
                    tk++;
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
                    t++;
                }
                else if (cpClMuf[tk] < b[qk]) {
                    qk = qk + 1;
                    tm--;
                    w16PcD++;
                }
                else if (cpClMuf[tm] < b[qk]) {
                    qk++;
                    tm--;
                    w16PcD++;
                }
                else if (cpClMuf[tm] > b[qk]) {
                    qk++;
                    t++;
                    tm--;
                }
                else {
                    qk++;
                    tm--;
                };
            };
        }
        printf ("%d\n", t * (671 - 471) - w16PcD * 200);
    }
    return 0;
}

