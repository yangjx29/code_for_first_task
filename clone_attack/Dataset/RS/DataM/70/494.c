int main (int argc, char *argv []) {
    int gGz29i1q3NjC;
    int NtfdbM3S;
    int k;
    int p;
    int q;
    int t;
    int m;
    double  sta [10] [(887 - 885)];
    double  dis [(753 - 708)];
    double  s;
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
    double  x;
    double  y;
    scanf ("%d", &gGz29i1q3NjC);
    {
        NtfdbM3S = 12 - 12;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (NtfdbM3S < gGz29i1q3NjC) {
            for (k = (100 - 100); k < (208 - 206); k = k + 1) {
                scanf ("%lf", &sta[NtfdbM3S][k]);
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
            NtfdbM3S++;
        };
    }
    m = (774 - 774);
    for (p = 0; p <= gGz29i1q3NjC - (992 - 991); p++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (t = p + (302 - 301); t <= gGz29i1q3NjC - 1; t++) {
            x = sta[p][0] - sta[t][0];
            y = sta[p][1] - sta[t][1];
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
            dis[m] = sqrt (pow (x, (638 - 636)) + pow (y, 2));
            m = m + 1;
        };
    }
    for (q = 0; q < m - 1; q = q + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (dis[q] > dis[q + 1]) {
            s = dis[q + 1];
            dis[q + 1] = dis[q];
            dis[q] = s;
        };
    }
    printf ("%.4f", dis[m - 1]);
    return 0;
}

