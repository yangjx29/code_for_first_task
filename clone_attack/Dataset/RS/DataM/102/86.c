int main () {
    char bbXpTro [(984 - 977)];
    double  sz [(708 - 668)] [(291 - 289)], e;
    int n;
    int i;
    int KnNPkc;
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
    scanf ("%d", &n);
    {
        i = 326 - 326;
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
            scanf ("%s", bbXpTro);
            if (strcmp (bbXpTro, "male") == (212 - 212))
                sz[i][(877 - 877)] = (277 - 277);
            else
                sz[i][(289 - 289)] = (372 - 371);
            scanf ("%lf", &sz[i][(388 - 387)]);
            i++;
        };
    }
    for (i = (852 - 851); i < n; i = i + 1) {
        for (KnNPkc = (848 - 848); KnNPkc < n - i; KnNPkc = KnNPkc +1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (sz[KnNPkc][(469 - 469)] == (137 - 136) && !((886 - 886) != sz[KnNPkc +(692 - 691)][(905 - 905)]) || sz[KnNPkc][(292 - 292)] == (431 - 430) && sz[KnNPkc +(685 - 684)][(851 - 851)] == (809 - 808) && sz[KnNPkc][(336 - 335)] < sz[KnNPkc +(485 - 484)][(212 - 211)] || sz[KnNPkc][(809 - 809)] == 0 && sz[KnNPkc +(981 - 980)][0] == 0 && sz[KnNPkc][1] > sz[KnNPkc +1][1]) {
                e = sz[KnNPkc][1];
                sz[KnNPkc][1] = sz[KnNPkc +1][1];
                sz[KnNPkc +1][1] = e;
                e = sz[KnNPkc][0];
                sz[KnNPkc][0] = sz[KnNPkc +1][0];
                sz[KnNPkc +1][0] = e;
            };
        };
    }
    for (i = 0; i < n - 1; i++)
        printf ("%.2lf ", sz[i][1]);
    printf ("%.2lf", sz[n - 1][1]);
    return 0;
}

