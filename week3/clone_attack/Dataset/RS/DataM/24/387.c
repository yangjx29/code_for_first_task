void  main () {
    int n;
    int c84UV0zdje;
    int ZsFWIc;
    n = (275 - 275);
    char c;
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
    char t [(1078 - 998)];
    char vxfJGSiBQ [50] [(1035 - 955)];
    for (c = getchar (); !('\n' == c);) {
        {
            c84UV0zdje = 661 - 661;
            while (!(' ' == c) && !('\n' == c)) {
                vxfJGSiBQ[n][c84UV0zdje] = c;
                c84UV0zdje++;
                c = getchar ();
            };
        }
        if (c == ' ')
            c = getchar ();
        vxfJGSiBQ[n][c84UV0zdje + (751 - 750)] = '\0';
        n++;
    }
    {
        c84UV0zdje = 542 - 542;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (c84UV0zdje < n) {
            for (ZsFWIc = c84UV0zdje + (16 - 15); ZsFWIc < n; ZsFWIc = ZsFWIc +1) {
                if (strlen (vxfJGSiBQ[ZsFWIc]) > strlen (vxfJGSiBQ[c84UV0zdje])) {
                    strcpy (t, vxfJGSiBQ[c84UV0zdje]);
                    strcpy (vxfJGSiBQ[c84UV0zdje], vxfJGSiBQ[ZsFWIc]);
                    strcpy (vxfJGSiBQ[ZsFWIc], t);
                };
            }
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
            c84UV0zdje++;
        };
    }
    printf ("%s\n%s", vxfJGSiBQ[(267 - 267)], vxfJGSiBQ[n - (718 - 717)]);
}

