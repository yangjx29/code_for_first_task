void  main (void ) {
    int L8bnOIGY;
    int yWuMls;
    int WA5871D4z0;
    char yCDiwEU1 [11], b [4], c [15];
    for (; !(EOF == scanf ("%s%s", yCDiwEU1, b));) {
        puts (c);
        WA5871D4z0 = 0;
        L8bnOIGY = 0;
        yWuMls = strlen (yCDiwEU1);
        {
            L8bnOIGY = 0;
            while (yWuMls > L8bnOIGY) {
                if (yCDiwEU1[WA5871D4z0] < yCDiwEU1[L8bnOIGY])
                    WA5871D4z0 = L8bnOIGY;
                L8bnOIGY = L8bnOIGY +1;
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
        {
            L8bnOIGY = 0;
            while (L8bnOIGY <= WA5871D4z0) {
                c[L8bnOIGY] = yCDiwEU1[L8bnOIGY];
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
                L8bnOIGY++;
            };
        }
        for (L8bnOIGY = 1; L8bnOIGY <= 3; L8bnOIGY = L8bnOIGY +1) {
            c[L8bnOIGY +WA5871D4z0] = b[L8bnOIGY -1];
        }
        for (L8bnOIGY = WA5871D4z0 +1; L8bnOIGY < yWuMls; L8bnOIGY = L8bnOIGY +1) {
            c[L8bnOIGY +3] = yCDiwEU1[L8bnOIGY];
        }
        c[yWuMls + 3] = '\0';
    };
}

