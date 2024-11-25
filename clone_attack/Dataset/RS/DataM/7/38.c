void  main () {
    char s [100], mjJ5y9gSeRMf [100], rtkF8OcSu [100];
    int b3k0XBMKU;
    int WqMT8WJGEg;
    int JyZVjEkz1Ds3;
    int SatAP0Xx8WC;
    gets (s);
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
    gets (mjJ5y9gSeRMf);
    gets (rtkF8OcSu);
    JyZVjEkz1Ds3 = strlen (s);
    SatAP0Xx8WC = strlen (mjJ5y9gSeRMf);
    for (b3k0XBMKU = 0; JyZVjEkz1Ds3 > b3k0XBMKU; b3k0XBMKU = b3k0XBMKU + 1) {
        WqMT8WJGEg = 0;
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
            WqMT8WJGEg = 0;
            while (WqMT8WJGEg < SatAP0Xx8WC) {
                if (s[b3k0XBMKU] != mjJ5y9gSeRMf[WqMT8WJGEg])
                    break;
                b3k0XBMKU++;
                WqMT8WJGEg++;
            };
        }
        if (WqMT8WJGEg > SatAP0Xx8WC -1) {
            {
                WqMT8WJGEg = 0;
                while (WqMT8WJGEg < SatAP0Xx8WC) {
                    s[b3k0XBMKU - SatAP0Xx8WC] = rtkF8OcSu[WqMT8WJGEg];
                    b3k0XBMKU++;
                    WqMT8WJGEg++;
                };
            }
            break;
        };
    }
    for (b3k0XBMKU = 0; b3k0XBMKU < JyZVjEkz1Ds3; b3k0XBMKU++)
        printf ("%c", s[b3k0XBMKU]);
}

