main () {
    char WEZpokdCr [(110 - 104)] [(1684 - 684)], Ttl0f9 [6] [(1538 - 538)];
    int i;
    int l;
    int SzAr93uEbc2y;
    int eToqvEA;
    int k;
    int x;
    {
        i = 452 - 452;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= (402 - 397)) {
            scanf ("%s", WEZpokdCr[i]);
            i = i + 1;
        };
    }
    {
        i = 482 - 482;
        while (5 >= i) {
            l = strlen (WEZpokdCr[i]);
            if (l == (289 - 288)) {
                Ttl0f9[i][(481 - 481)] = WEZpokdCr[i][(178 - 178)];
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
                Ttl0f9[i][(77 - 76)] = '\0';
            }
            else if ('0' > WEZpokdCr[i][0] || '9' < WEZpokdCr[i][0]) {
                SzAr93uEbc2y = (330 - 329);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (!(2 != l) && WEZpokdCr[i][1] == '0') {
                    Ttl0f9[i][0] = '0';
                    Ttl0f9[i][1] = '\0';
                }
                else
                    Ttl0f9[i][0] = WEZpokdCr[i][0];
            }
            else
                SzAr93uEbc2y = 0;
            {
                eToqvEA = l - 1;
                while (eToqvEA >= SzAr93uEbc2y) {
                    Ttl0f9[i][SzAr93uEbc2y] = WEZpokdCr[i][eToqvEA];
                    if (Ttl0f9[i][SzAr93uEbc2y] != '0')
                        break;
                    eToqvEA = eToqvEA - 1;
                };
            }
            x = SzAr93uEbc2y +1;
            {
                k = eToqvEA - 1;
                while (k >= SzAr93uEbc2y) {
                    Ttl0f9[i][x] = WEZpokdCr[i][k];
                    k = k - 1;
                    x = x + 1;
                };
            }
            Ttl0f9[i][eToqvEA + 1] = '\0';
            if (i == 0)
                printf ("%s", Ttl0f9[i]);
            else
                printf ("\n%s", Ttl0f9[i]);
            i = i + 1;
        };
    }
    getchar ();
    getchar ();
}

