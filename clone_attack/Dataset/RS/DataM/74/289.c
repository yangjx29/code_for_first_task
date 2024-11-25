int AkEFaf (int k) {
    int w1f7lRdaIk;
    {
        w1f7lRdaIk = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k > w1f7lRdaIk) {
            if (k % w1f7lRdaIk == (678 - 678)) {
                return 0;
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
            w1f7lRdaIk++;
        };
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
    return 1;
}

int spwfXU (int k) {
    int M9P6pWXHtC3;
    int t;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    M9P6pWXHtC3 = 0;
    t = k;
    while (k > 0) {
        M9P6pWXHtC3 = M9P6pWXHtC3 *10 + (k % 10);
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
        k /= 10;
    }
    if (M9P6pWXHtC3 == t) {
        return 1;
    }
    else {
        return 0;
    };
}

int main () {
    int MJuBdyaQL, n, k;
    int Q6MI8DHofEO = 1, flag = 1;
    scanf ("%d %d", &MJuBdyaQL, &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (k = MJuBdyaQL; k <= n; k++) {
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
        if (AkEFaf (k) &&spwfXU (k)) {
            if (Q6MI8DHofEO) {
                printf ("%d", k);
                Q6MI8DHofEO = 0;
            }
            else {
                printf (",%d", k);
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
            flag = 0;
        };
    }
    if (flag) {
        printf ("no");
    }
    return 0;
}

