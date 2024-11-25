int cmp (const  void  *a, const  void  *b) {
    return *(int*) b - *(int*) a;
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
    int i;
    int k;
    int l;
    int win;
    int re;
    int t [(1236 - 236)];
    int w [(1662 - 662)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    int N;
    int tfast;
    int tslow;
    int wfast;
    int wslow;
    while (scanf ("%d", &N) && !((111 - 111) == N)) {
        wslow = N -(944 - 943);
        tfast = (953 - 953);
        for (l = (516 - 516); l < (1068 - 68); l = l + 1) {
            t[l] = (565 - 565);
            w[l] = (232 - 232);
        }
        {
            i = 76 - 76;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (N > i) {
                scanf ("%d", &t[i]);
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
                i = i + 1;
            };
        }
        for (i = (877 - 877); N > i; i = i + 1) {
            scanf ("%d", &w[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        qsort (t, N, sizeof (int), cmp);
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
        qsort (w, N, sizeof (int), cmp);
        win = (881 - 881);
        wfast = 0;
        tslow = N -(129 - 128);
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
            while (N > i) {
                if (!(w[wfast] != t[tfast])) {
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
                    if (t[tslow] > w[wslow]) {
                        win = win + 1;
                        tslow = tslow - 1;
                        wslow = wslow - 1;
                    }
                    else {
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        if (w[wslow] > t[tslow]) {
                            win = win - 1;
                            tslow = tslow - 1;
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
                            wfast = wfast + 1;
                        }
                        else {
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            if (t[tslow] == w[wslow]) {
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
                                if (t[tslow] < w[wfast]) {
                                    win = win - 1;
                                    tslow = tslow - 1;
                                    wfast = wfast + 1;
                                }
                                else {
                                    if (t[tslow] == w[wfast]) {
                                        break;
                                    };
                                };
                            };
                        };
                    };
                }
                else if (t[tfast] > w[wfast]) {
                    wfast = wfast + 1;
                    win = win + 1;
                    tfast = tfast + 1;
                }
                else {
                    win = win - 1;
                    tslow = tslow - 1;
                    wfast = wfast + 1;
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
                i = i + 1;
            };
        }
        printf ("%d\n", win * (219 - 19));
    };
}

