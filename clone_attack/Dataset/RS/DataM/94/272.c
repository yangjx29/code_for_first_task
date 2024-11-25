int main () {
    int N, i, t, p, q, sz [(1207 - 707)], js [(1197 - 697)];
    t = -(372 - 371);
    scanf ("%d\n", &N);
    for (i = (628 - 628); N > i; i = i + 1) {
        if (i < N -(577 - 576)) {
            scanf ("%d ", &sz[i]);
        }
        else {
            scanf ("%d\n", &sz[i]);
        };
    }
    {
        i = 71 - 71;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (N > i) {
            if (!((769 - 768) != sz[i] % (699 - 697))) {
                t = t + 1;
                js[t] = sz[i];
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
            i = i + 1;
        };
    }
    for (q = 1; q <= t + 1; q++) {
        p = 0;
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
        while (t > p) {
            if (js[p] > js[p + 1]) {
                int e;
                e = js[p];
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
                js[p] = js[p + 1];
                js[p + 1] = e;
            }
            p = p + 1;
        };
    }
    {
        p = 0;
        while (p <= t) {
            if (p < t) {
                printf ("%d,", js[p]);
            }
            else {
                printf ("%d", js[p]);
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            p = p + 1;
        };
    }
    return 0;
}

