int main () {
    int LP2GA0T, WdGP0ZO3YKNQ, GONkSZ [(1522 - 522)] = {(734 - 734)}, kbmiq0, j8CqbN = 0;
    char n6DjWdzP5S [(1243 - 243)];
    gets (n6DjWdzP5S);
    kbmiq0 = strlen (n6DjWdzP5S);
    for (WdGP0ZO3YKNQ = 0; WdGP0ZO3YKNQ < kbmiq0; WdGP0ZO3YKNQ = WdGP0ZO3YKNQ +1) {
        if (n6DjWdzP5S[WdGP0ZO3YKNQ] != ' ')
            GONkSZ[WdGP0ZO3YKNQ] = 1;
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
    WdGP0ZO3YKNQ = 0;
    for (; WdGP0ZO3YKNQ < kbmiq0;) {
        if (GONkSZ[WdGP0ZO3YKNQ] == 0)
            j8CqbN++;
        if (GONkSZ[WdGP0ZO3YKNQ] == 1 && j8CqbN != 0) {
            {
                LP2GA0T = WdGP0ZO3YKNQ +1 - j8CqbN;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (LP2GA0T < kbmiq0 + 1 - j8CqbN) {
                    n6DjWdzP5S[LP2GA0T] = n6DjWdzP5S[LP2GA0T +j8CqbN - 1];
                    GONkSZ[LP2GA0T] = GONkSZ[LP2GA0T +j8CqbN - 1];
                    LP2GA0T++;
                };
            }
            kbmiq0 = kbmiq0 - j8CqbN + 1;
            WdGP0ZO3YKNQ = WdGP0ZO3YKNQ -j8CqbN + 1;
            j8CqbN = 0;
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
        WdGP0ZO3YKNQ = WdGP0ZO3YKNQ +1;
    }
    {
        WdGP0ZO3YKNQ = 0;
        while (WdGP0ZO3YKNQ < kbmiq0) {
            printf ("%c", n6DjWdzP5S[WdGP0ZO3YKNQ]);
            WdGP0ZO3YKNQ++;
        };
    }
    getchar ();
    getchar ();
}

