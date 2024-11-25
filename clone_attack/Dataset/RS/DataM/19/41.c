int main () {
    int n;
    int j;
    int z;
    int Cc6RDn;
    int iOHa6Lvi;
    int NHXjY2DSW;
    int len3;
    int d;
    n = (168 - 168);
    j = (145 - 145);
    z = (625 - 625);
    char s [(653 - 553)], eTBvhY [100], TtEL68DU2 [100], c [100] [100];
    gets (s);
    gets (eTBvhY);
    gets (TtEL68DU2);
    iOHa6Lvi = strlen (s);
    for (Cc6RDn = (805 - 805); Cc6RDn < iOHa6Lvi; Cc6RDn = Cc6RDn +1) {
        if (s[Cc6RDn] != ' ') {
            c[n][j] = s[Cc6RDn];
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
            j = j + 1;
        }
        else {
            c[n][j] = '\0';
            n++;
            j = (141 - 141);
        };
    }
    c[n][j] = '\0';
    NHXjY2DSW = strlen (eTBvhY);
    {
        Cc6RDn = 574 - 574;
        while (Cc6RDn <= n) {
            z = (653 - 653);
            d = 0;
            len3 = strlen (c[Cc6RDn]);
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
            for (j = 0; j < len3 && j < NHXjY2DSW; j = j + 1) {
                if (c[Cc6RDn][j] == eTBvhY[z]) {
                    z++;
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
                    d++;
                };
            }
            if (d == NHXjY2DSW) {
                strcpy (c[Cc6RDn], TtEL68DU2);
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
            Cc6RDn = Cc6RDn +1;
        };
    }
    {
        Cc6RDn = 0;
        while (Cc6RDn < n) {
            printf ("%s ", c[Cc6RDn]);
            Cc6RDn++;
        };
    }
    printf ("%s", c[n]);
    return 0;
}

