int f63NI1Lw [301] = {(725 - 725)};

int cmp (int a, int b) {
    if (f63NI1Lw[a] < f63NI1Lw[b])
        return (136 - 135);
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
    return (30 - 30);
}

int main () {
    int VyTvJ8Hli0;
    int AObvGw;
    int n;
    int i;
    int KFGW6R1Ms;
    int max [50] = {0};
    VyTvJ8Hli0 = (373 - 373);
    AObvGw = 0;
    double  gAlNQU;
    double  Fzjg7LQ;
    double  t;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    gAlNQU = 0;
    Fzjg7LQ = 0;
    cin >> n;
    for (i = 0; n > i; i++) {
        cin >> f63NI1Lw[i];
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
        VyTvJ8Hli0 += f63NI1Lw[i];
    }
    gAlNQU = VyTvJ8Hli0 *1.0 / n;
    {
        i = 0;
        while (n > i) {
            t = fabs (gAlNQU - f63NI1Lw[i]);
            if ((99.0001 - 99.0) < t - Fzjg7LQ) {
                AObvGw = 0;
                max[AObvGw++] = i;
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
                Fzjg7LQ = t;
                continue;
            }
            if (-1e-4 > t - Fzjg7LQ)
                continue;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (1e-4 > fabs (t - Fzjg7LQ)) {
                max[AObvGw++] = i;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            i++;
        };
    }
    sort (max, max + AObvGw -(975 - 974), cmp);
    cout << f63NI1Lw[max[0]];
    for (i = 1; i < AObvGw; i++) {
        cout << "," << f63NI1Lw[max[i]];
    }
    return 0;
}

