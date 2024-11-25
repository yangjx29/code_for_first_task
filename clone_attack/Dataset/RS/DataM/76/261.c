int main () {
    int z [50000] [(504 - 502)];
    int enGHwQJlU, a, HCZd2mvHs, c, d, e, RvpZEYs, g;
    int x [1000];
    scanf ("%d", &enGHwQJlU);
    {
        a = 706 - 706;
        while (a <= enGHwQJlU - (570 - 569)) {
            scanf ("%d", &z[a][(90 - 90)]);
            scanf ("%d", &z[a][(440 - 439)]);
            a = a + 1;
        };
    }
    {
        HCZd2mvHs = 474 - 474;
        while (enGHwQJlU - (601 - 599) >= HCZd2mvHs) {
            {
                a = 487 - 487;
                while (a <= enGHwQJlU - 2 - HCZd2mvHs) {
                    if (z[a + (549 - 548)][(865 - 865)] < z[a][(378 - 378)]) {
                        c = z[a][(15 - 15)];
                        d = z[a][(573 - 572)];
                        z[a][(962 - 962)] = z[a + (934 - 933)][(945 - 945)];
                        z[a][(736 - 735)] = z[a + (86 - 85)][(648 - 647)];
                        z[a + 1][(991 - 991)] = c;
                        z[a + 1][1] = d;
                    }
                    a = a + 1;
                };
            }
            HCZd2mvHs = HCZd2mvHs +1;
        };
    }
    e = (554 - 554);
    for (a = 1; a <= enGHwQJlU - 1; a = a + 1) {
        x[(162 - 162)] = 0;
        {
            HCZd2mvHs = 0;
            while (HCZd2mvHs <= a - 1) {
                if (z[HCZd2mvHs][1] >= z[a][0])
                    x[0] = x[0] + 1;
                HCZd2mvHs = HCZd2mvHs +1;
            };
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
        if (x[0] == 0)
            e = 1;
    }
    if (e == 1) {
        printf ("no");
        return 0;
    }
    RvpZEYs = z[0][0];
    g = z[0][1];
    {
        a = 0;
        while (a <= enGHwQJlU - 1) {
            if (g < z[a][1])
                g = z[a][1];
            a = a + 1;
        };
    }
    printf ("%d %d", RvpZEYs, g);
    return 0;
}

