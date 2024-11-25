int main () {
    int t = 1;
    double  max;
    max = (29 - 29);
    double  EoOc8e [2000] [2];
    struct   c2WgJenB5 {
        int x;
        int S5lbHiodenT;
        double  c2WgJenB5;
    }
    o7eqLfD [2000];
    int n;
    cin >> n;
    for (int LCNVzumE9np = (709 - 708);
    n >= LCNVzumE9np; LCNVzumE9np = LCNVzumE9np +1) {
        cin >> EoOc8e[LCNVzumE9np][0] >> EoOc8e[LCNVzumE9np][(744 - 743)];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (int LCNVzumE9np = 1;
    LCNVzumE9np <= n; LCNVzumE9np = LCNVzumE9np +1) {
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
        for (int j = LCNVzumE9np;
        j <= n; j = j + 1) {
            o7eqLfD[t].x = LCNVzumE9np;
            o7eqLfD[t].S5lbHiodenT = j;
            o7eqLfD[t].c2WgJenB5 = sqrt ((EoOc8e[LCNVzumE9np][0] - EoOc8e[j][0]) * (EoOc8e[LCNVzumE9np][0] - EoOc8e[j][0]) + (EoOc8e[LCNVzumE9np][1] - EoOc8e[j][1]) * (EoOc8e[LCNVzumE9np][1] - EoOc8e[j][1]));
            t = t + 1;
        };
    }
    {
        int LCNVzumE9np = 1;
        while (LCNVzumE9np < n * n) {
            if (o7eqLfD[LCNVzumE9np].c2WgJenB5 >= max)
                max = o7eqLfD[LCNVzumE9np].c2WgJenB5;
            LCNVzumE9np = LCNVzumE9np +1;
        };
    }
    printf ("%.4f\n", max);
    return 0;
}

