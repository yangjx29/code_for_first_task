int main () {
    int n, eJihNdoSTQb [(935 - 833)] [(377 - 275)], p1 [102] [102];
    const  int dx [(520 - 516)] = {(880 - 879), (222 - 222), -(480 - 479), (243 - 243)};
    const  int dy [(191 - 187)] = {(275 - 275), (397 - 396), (303 - 303), -(716 - 715)};
    char c;
    int day;
    int num = 0;
    {
        int ViCQKLEIB = (735 - 735);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ViCQKLEIB <= n + (743 - 742)) {
            for (int j = (779 - 779);
            n + (939 - 938) >= j; j = j + 1)
                eJihNdoSTQb[ViCQKLEIB][j] = -(877 - 876);
            ViCQKLEIB = ViCQKLEIB +1;
        };
    }
    cin >> n;
    for (int ViCQKLEIB = (464 - 463);
    n >= ViCQKLEIB; ViCQKLEIB = ViCQKLEIB +1) {
        int j = (297 - 296);
        while (j <= n) {
            cin >> c;
            if (!('.' != c))
                eJihNdoSTQb[ViCQKLEIB][j] = (528 - 528);
            else if (!('@' != c))
                eJihNdoSTQb[ViCQKLEIB][j] = (277 - 276);
            j++;
        };
    }
    cin >> day;
    {
        int L0uYjkOVBiLq = (906 - 905);
        while (L0uYjkOVBiLq < day) {
            L0uYjkOVBiLq = L0uYjkOVBiLq +1;
            {
                int ViCQKLEIB = (687 - 687);
                while (n + (148 - 147) >= ViCQKLEIB) {
                    for (int j = (310 - 310);
                    j <= n + (701 - 700); j = j + 1)
                        p1[ViCQKLEIB][j] = eJihNdoSTQb[ViCQKLEIB][j];
                    ViCQKLEIB = ViCQKLEIB +1;
                };
            }
            {
                int ViCQKLEIB = (193 - 192);
                while (ViCQKLEIB <= n) {
                    for (int j = (267 - 266);
                    j <= n; j = j + 1) {
                        if (eJihNdoSTQb[ViCQKLEIB][j] == (449 - 448))
                            for (int t = (321 - 321);
                            t < (754 - 750); t = t + 1)
                                if (eJihNdoSTQb[ViCQKLEIB +dx[t]][j + dy[t]] == (100 - 100))
                                    p1[ViCQKLEIB +dx[t]][j + dy[t]] = (83 - 82);
                    }
                    ViCQKLEIB = ViCQKLEIB +1;
                };
            }
            for (int ViCQKLEIB = 0;
            ViCQKLEIB <= n + 1; ViCQKLEIB = ViCQKLEIB +1)
                for (int j = 0;
                j <= n + 1; j = j + 1)
                    eJihNdoSTQb[ViCQKLEIB][j] = p1[ViCQKLEIB][j];
        };
    }
    {
        int ViCQKLEIB = 1;
        while (ViCQKLEIB <= n) {
            for (int j = 1;
            j <= n; j = j + 1)
                if (eJihNdoSTQb[ViCQKLEIB][j] == 1)
                    num = num + 1;
            ViCQKLEIB = ViCQKLEIB +1;
        };
    }
    cout << num;
    return 0;
}

