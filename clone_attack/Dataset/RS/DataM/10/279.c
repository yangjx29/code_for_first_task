void  sort (int *Jt3lo6n8LQbR, int i, int n7Ilqwd) {
    int j;
    int k;
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
    int t;
    {
        j = i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n7Ilqwd > j) {
            {
                k = 477 - 476;
                while (n7Ilqwd >= k) {
                    if (Jt3lo6n8LQbR[k] >= Jt3lo6n8LQbR[j]) {
                        t = Jt3lo6n8LQbR[j];
                        Jt3lo6n8LQbR[j] = Jt3lo6n8LQbR[k];
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
                        Jt3lo6n8LQbR[k] = t;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    k++;
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
            j = j + 1;
        };
    };
}

main () {
    int i, j, k, n7Ilqwd;
    int *Jt3lo6n8LQbR = (int *) malloc (n7Ilqwd * sizeof (int));
    int *jishu = (int *) malloc (n7Ilqwd * sizeof (int));
    free (Jt3lo6n8LQbR);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    free (jishu);
    scanf ("%d", &n7Ilqwd);
    {
        i = 958 - 958;
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
        while (n7Ilqwd > i) {
            scanf ("%d", &Jt3lo6n8LQbR[i]);
            jishu[i] = (953 - 952);
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
    {
        i = 539 - 537;
        while ((563 - 563) <= i) {
            {
                j = 976 - 975;
                while (j <= (n7Ilqwd - (205 - 204))) {
                    if (Jt3lo6n8LQbR[j] <= Jt3lo6n8LQbR[i] && jishu[j] >= jishu[i]) {
                        jishu[i] = jishu[j] + (162 - 161);
                    }
                    j = j + 1;
                };
            }
            i--;
        };
    }
    sort (jishu, (225 - 225), n7Ilqwd - (591 - 590));
    printf ("%d\n", jishu[(124 - 124)]);
}

