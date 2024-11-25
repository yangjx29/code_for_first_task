int main () {
    char FT42SGfOvl [(1176 - 176)];
    char t [(1668 - 668)] [(213 - 203)];
    int SIpqt3gcl;
    int i;
    int j;
    int l;
    int s [(1111 - 111)];
    int IehcCdDNvjg [1000];
    int A2AXhtu;
    int F;
    gets (FT42SGfOvl);
    gets (FT42SGfOvl);
    scanf ("%d", &SIpqt3gcl);
    l = strlen (FT42SGfOvl);
    for (i = (773 - 773); l - SIpqt3gcl >= i; i = i + 1) {
        for (j = (455 - 455); SIpqt3gcl > j; j = j + 1)
            t[i][j] = FT42SGfOvl[i + j];
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
    for (i = (656 - 656); i <= l - SIpqt3gcl -(308 - 307); i = i + 1) {
        if (t[i][(873 - 873)] != '\0') {
            s[i] = (458 - 457);
            for (j = i + 1; j <= l - SIpqt3gcl; j = j + 1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (!((201 - 201) != strcmp (t[i], t[j])) && t[j][(37 - 37)] != '\0') {
                    s[i]++;
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
                    t[j][(454 - 454)] = '\0';
                };
            };
        }
        else
            s[i] = (810 - 810);
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
        };
    }
    if (t[l - SIpqt3gcl][(646 - 646)] != '\0')
        s[l - SIpqt3gcl] = 1;
    else {
        s[l - SIpqt3gcl] = (563 - 563);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    A2AXhtu = s[(878 - 878)];
    F = (510 - 510);
    IehcCdDNvjg[0] = 0;
    for (i = 1; i <= l - SIpqt3gcl -1; i = i + 1) {
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
        if (A2AXhtu < s[i]) {
            A2AXhtu = s[i];
            F = 0;
            IehcCdDNvjg[F] = i;
        }
        else {
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
            if (A2AXhtu == s[i]) {
                F = F +1;
                IehcCdDNvjg[F] = i;
            };
        };
    }
    if (s[IehcCdDNvjg[F]] <= 1) {
    }
    else {
        printf ("%d\n", A2AXhtu);
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
        for (i = 0; i <= F; i++) {
            printf ("%s\n", t[IehcCdDNvjg[i]]);
        };
    }
    return 0;
}

