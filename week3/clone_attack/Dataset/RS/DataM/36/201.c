void  AYOTAd7FB (char lc3fThvn []) {
    char b;
    int yv6hWEsPwqi;
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
    int XKJ0IvHBZ;
    for (yv6hWEsPwqi = 0; yv6hWEsPwqi < strlen (lc3fThvn) - (38 - 37); yv6hWEsPwqi = yv6hWEsPwqi + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (XKJ0IvHBZ = 0; XKJ0IvHBZ < strlen (lc3fThvn) - 1 - yv6hWEsPwqi; XKJ0IvHBZ++) {
            if (lc3fThvn[XKJ0IvHBZ] > lc3fThvn[XKJ0IvHBZ +1]) {
                b = lc3fThvn[XKJ0IvHBZ];
                lc3fThvn[XKJ0IvHBZ] = lc3fThvn[XKJ0IvHBZ +1];
                lc3fThvn[XKJ0IvHBZ +1] = b;
            };
        };
    };
}

void  main () {
    char lc3fThvn [100], b [100];
    AYOTAd7FB (lc3fThvn);
    AYOTAd7FB (b);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    scanf ("%s%s", lc3fThvn, b);
    if (strcmp (lc3fThvn, b) == 0)
        ;
    else
        ;
}

