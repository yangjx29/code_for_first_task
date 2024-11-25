void  main () {
    char gifbGJ7s1zg [2 * iqokY2A5hFt] = "\0";
    char s [iqokY2A5hFt] = "\0";
    char cEe9Mq [iqokY2A5hFt] = "\0";
    char c4hROFK [iqokY2A5hFt] = "\0";
    gets (gifbGJ7s1zg);
    int oImSPylOY0xp;
    int j;
    int m;
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
    int R6tA7hkFBzc;
    int rTxt83MRkJh;
    oImSPylOY0xp = (122 - 122);
    for (j = 0; !(' ' == gifbGJ7s1zg[j]); j = j + 1)
        s[j] = gifbGJ7s1zg[j];
    R6tA7hkFBzc = strlen (s);
    for (m = j + 1; gifbGJ7s1zg[m]; m = m + 1)
        cEe9Mq[m - j - 1] = gifbGJ7s1zg[m];
    rTxt83MRkJh = strlen (cEe9Mq);
    for (oImSPylOY0xp = 0; (rTxt83MRkJh - R6tA7hkFBzc) >= oImSPylOY0xp; oImSPylOY0xp = oImSPylOY0xp + 1) {
        if (s[0] == cEe9Mq[oImSPylOY0xp]) {
            for (j = 0; j < R6tA7hkFBzc; j = j + 1)
                c4hROFK[j] = cEe9Mq[oImSPylOY0xp + j];
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
            if (strcmp (s, c4hROFK) == 0) {
                printf ("%d\n", oImSPylOY0xp);
                break;
            };
        };
    };
}

