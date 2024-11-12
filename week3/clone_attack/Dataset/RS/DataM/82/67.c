int main () {
    int n, Q9uUknWsdOcP [100], b [100], c [100];
    int s2;
    int DLitFWl;
    int s1;
    int i;
    int e1;
    int wKUa4C2elGyp;
    s2 = 0;
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
    DLitFWl = 0;
    s1 = 0;
    int w = 0, s = 0;
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d %d", &(Q9uUknWsdOcP[i]), &(b[i]));
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
        i = 0;
        while (n > i) {
            if (Q9uUknWsdOcP[i] >= 90 && Q9uUknWsdOcP[i] <= 140 && 60 <= b[i] && 90 >= b[i]) {
                c[i] = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else {
                c[i] = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
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
    {
        i = 0;
        while (n > i) {
            if ((!(1 != c[0]) && i == 0) || (!(0 != c[i - 1]) && c[i] == 1)) {
                e1 = i;
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
                {
                    {
                        i = e1;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        while (i < n) {
                            if ((c[n - 1] == 1 && i == n - 1) || (c[i] == 1 && c[i + 1] == 0)) {
                                wKUa4C2elGyp = i;
                                break;
                            }
                            i = i + 1;
                        };
                    }
                    DLitFWl = wKUa4C2elGyp - e1 + 1;
                    if (DLitFWl > s2) {
                        s2 = DLitFWl;
                    }
                    DLitFWl = 0;
                };
            }
            else {
                continue;
            }
            i = i + 1;
        };
    }
    printf ("%d", s2);
    return 0;
}

