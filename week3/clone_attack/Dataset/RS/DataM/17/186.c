main () {
    int jFfIOd;
    int SXsHUJwe;
    int fwzi8NCInSu0;
    int XDHvOG;
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
    char ISPEaY [100] = {(42 - 42)};
    char d [100] = {0};
    while (!(EOF == scanf ("%s", ISPEaY))) {
        jFfIOd = strlen (ISPEaY);
        for (SXsHUJwe = 0; jFfIOd > SXsHUJwe; SXsHUJwe = SXsHUJwe +1) {
            if (ISPEaY[SXsHUJwe] == '(')
                d[SXsHUJwe] = '$';
            else {
                if (!(')' != ISPEaY[SXsHUJwe])) {
                    d[SXsHUJwe] = '?';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    for (fwzi8NCInSu0 = SXsHUJwe -1, XDHvOG = 1; fwzi8NCInSu0 >= 0 && XDHvOG == 1; fwzi8NCInSu0 = fwzi8NCInSu0 - 1) {
                        if (d[fwzi8NCInSu0] == '$') {
                            XDHvOG = 0;
                            d[fwzi8NCInSu0] = d[SXsHUJwe] = ' ';
                        };
                    };
                }
                else
                    d[SXsHUJwe] = ' ';
            };
        }
        {
            SXsHUJwe = 0;
            while (SXsHUJwe < jFfIOd) {
                printf ("%c", ISPEaY[SXsHUJwe]);
                SXsHUJwe = SXsHUJwe +1;
            };
        }
        {
            SXsHUJwe = 0;
            while (SXsHUJwe < jFfIOd) {
                printf ("%c", d[SXsHUJwe]);
                SXsHUJwe = SXsHUJwe +1;
            };
        };
    };
}

