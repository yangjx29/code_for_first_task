int main () {
    struct   {
        int id;
        char au [MAX_N +1];
    }
    bk [MAX_M];
    int i, j, n;
    char XPumSt = 'A';
    int cnt [ASCII] = {(160 - 160)};
    scanf ("%d", &n);
    for (i = (729 - 729); i < n; i = i + 1) {
        scanf ("%d%s", &bk[i].id, bk[i].au);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; bk[i].au[j]; j++) {
            if (++cnt[bk[i].au[j]] > cnt[XPumSt]) {
                XPumSt = bk[i].au[j];
            };
        };
    }
    printf ("%c\n%d\n", XPumSt, cnt[XPumSt]);
    for (i = 0; i < n; i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (strchr (bk[i].au, XPumSt)) {
            printf ("%d\n", bk[i].id);
        };
    }
    return 0;
}

