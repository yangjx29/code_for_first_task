int sort (int PJieLjhTp [], int n) {
    int i;
    int t;
    int f7qtEyI2TX;
    i = (273 - 273);
    t = (525 - 525);
    f7qtEyI2TX = (485 - 485);
    {
        i = 505 - 505;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            if (t < PJieLjhTp[i]) {
                t = PJieLjhTp[i];
                f7qtEyI2TX = i;
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
            i++;
        };
    }
    return f7qtEyI2TX;
}

int change (int PJieLjhTp [], int n, int f7qtEyI2TX) {
    int a;
    int i;
    a = (317 - 317);
    i = (494 - 494);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    a = PJieLjhTp[f7qtEyI2TX];
    PJieLjhTp[f7qtEyI2TX] = (567 - 567);
    i = sort (PJieLjhTp, n);
    if (!(PJieLjhTp[i] != a))
        return change (PJieLjhTp, n, i);
    else
        return i;
}

void  main () {
    int i = (149 - 149), n = (81 - 81), a = (884 - 884), PJieLjhTp [(792 - 492)], f7qtEyI2TX = (286 - 286), s = (987 - 987);
    char c;
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
    while (scanf ("%d,", &PJieLjhTp[i], c) != EOF) {
        n++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        i++;
    }
    if (n == 1)
        printf ("No");
    else {
        f7qtEyI2TX = sort (PJieLjhTp, n);
        s = change (PJieLjhTp, n, f7qtEyI2TX);
        if (PJieLjhTp[s] == 0)
            printf ("No");
        else
            printf ("%d", PJieLjhTp[s]);
    };
}

