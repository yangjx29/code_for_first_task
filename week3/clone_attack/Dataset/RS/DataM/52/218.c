int main () {
    int MLpi918 [150];
    int n, VpIbS2E, XomhWpbi, OzfPTmIl6, tr;
    scanf ("%d %d", &n, &VpIbS2E);
    for (XomhWpbi = (285 - 284); n >= XomhWpbi; XomhWpbi++) {
        if (XomhWpbi == 1)
            scanf ("%d", &MLpi918[XomhWpbi]);
        if (!(1 == XomhWpbi))
            scanf (" %d", &MLpi918[XomhWpbi]);
    }
    {
        XomhWpbi = n + 1 - VpIbS2E;
        while (XomhWpbi <= n) {
            {
                OzfPTmIl6 = XomhWpbi;
                while (OzfPTmIl6 >= XomhWpbi -(n - VpIbS2E) + 1) {
                    tr = MLpi918[OzfPTmIl6];
                    MLpi918[OzfPTmIl6] = MLpi918[OzfPTmIl6 -1];
                    OzfPTmIl6--;
                    MLpi918[OzfPTmIl6 -1] = tr;
                };
            }
            XomhWpbi++;
        };
    }
    {
        XomhWpbi = 1;
        while (XomhWpbi <= n) {
            printf ("%d", MLpi918[XomhWpbi]);
            if (XomhWpbi != n)
                printf (" ");
            XomhWpbi++;
        };
    };
}

