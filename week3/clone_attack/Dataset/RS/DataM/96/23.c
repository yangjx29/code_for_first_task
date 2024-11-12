main () {
    char WOsBxp0 [100];
    gets (WOsBxp0);
    int i;
    int rkhn1L;
    int UzxWcivQ;
    int LiXD6T3lVFM;
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
    UzxWcivQ = WOsBxp0[0] - '0';
    LiXD6T3lVFM = WOsBxp0[(123 - 122)] - '0';
    if (UzxWcivQ == 1 && 3 > LiXD6T3lVFM &&!('\0' != WOsBxp0[2])) {
        printf ("\n%d%d", UzxWcivQ, LiXD6T3lVFM);
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
    else if (WOsBxp0[1] == '\0')
        printf ("0\n%d", UzxWcivQ);
    else {
        for (i = 1; WOsBxp0[i] != '\0'; i++) {
            rkhn1L = (10 * UzxWcivQ +WOsBxp0[i] - '0') / 13;
            UzxWcivQ = (10 * UzxWcivQ +WOsBxp0[i] - '0') % 13;
            if (rkhn1L != 0 || i != 1)
                printf ("%d", rkhn1L);
        }
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
        printf ("\n%d", UzxWcivQ);
    }
    getchar ();
}

