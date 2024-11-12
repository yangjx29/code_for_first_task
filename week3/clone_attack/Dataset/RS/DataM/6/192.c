int main () {
    int sz [(398 - 298)] [(276 - 176)];
    int C7DOtITd;
    int n;
    int GBXLGR;
    int j;
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
    int a;
    int TkQoqjsLw;
    scanf ("%d", &a);
    for (TkQoqjsLw = (929 - 928); TkQoqjsLw <= a; TkQoqjsLw = TkQoqjsLw +1) {
        int s;
        s = (560 - 560);
        scanf ("%d%d", &C7DOtITd, &n);
        for (GBXLGR = (719 - 718); C7DOtITd >= GBXLGR; GBXLGR = GBXLGR +1) {
            for (j = (394 - 393); n >= j; j++) {
                scanf ("%d", &sz[GBXLGR][j]);
            };
        }
        for (GBXLGR = 1; GBXLGR <= C7DOtITd; GBXLGR = GBXLGR +1) {
            s = s + sz[GBXLGR][1];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
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
        for (GBXLGR = 1; GBXLGR <= C7DOtITd; GBXLGR++) {
            s = s + sz[GBXLGR][n];
        }
        for (GBXLGR = 1; GBXLGR <= n; GBXLGR++) {
            s = s + sz[1][GBXLGR];
        }
        for (GBXLGR = 1; GBXLGR <= n; GBXLGR++) {
            s += sz[C7DOtITd][GBXLGR];
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
        s = s - sz[1][1] + sz[1][n] + sz[C7DOtITd][1] + sz[C7DOtITd][n];
        printf ("%d\n", s);
    }
    return 0;
}

