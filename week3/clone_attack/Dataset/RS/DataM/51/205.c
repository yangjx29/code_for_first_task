main () {
    int c [500] = {(176 - 176)};
    int d [500] = {(498 - 498)};
    int d9AZSUc;
    int i;
    int B01tI7Zpoka;
    int x;
    int y;
    int MxUkdEu;
    int TcW7XFNe;
    char g72QL6v [500];
    char aPENCWq [5];
    scanf ("%d", &d9AZSUc);
    scanf ("%s", g72QL6v);
    TcW7XFNe = strlen (g72QL6v);
    {
        x = 0;
        while (x < TcW7XFNe -d9AZSUc + (97 - 96)) {
            {
                i = 0;
                while (i < d9AZSUc) {
                    aPENCWq[i] = g72QL6v[x + i];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    i++;
                };
            }
            MxUkdEu = 0;
            for (i = x; TcW7XFNe -d9AZSUc + 1 > i; i = i + 1) {
                {
                    B01tI7Zpoka = 0;
                    while (B01tI7Zpoka < d9AZSUc) {
                        if (aPENCWq[B01tI7Zpoka] != g72QL6v[i + B01tI7Zpoka])
                            break;
                        B01tI7Zpoka = B01tI7Zpoka +1;
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
                if (B01tI7Zpoka == d9AZSUc)
                    MxUkdEu = MxUkdEu +1;
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
            c[x] = MxUkdEu;
            x++;
        };
    }
    for (i = 0; i < TcW7XFNe -d9AZSUc + 1; i = i + 1)
        d[i] = c[i];
    for (i = 0; i < TcW7XFNe -d9AZSUc; i++)
        if (c[i] >= c[i + 1]) {
            y = c[i];
            c[i] = c[i + 1];
            c[i + 1] = y;
        }
    if (c[TcW7XFNe -d9AZSUc] == 1)
        printf ("NO\n");
    else {
        printf ("%d\n", c[TcW7XFNe -d9AZSUc]);
        {
            i = 0;
            while (i < TcW7XFNe -d9AZSUc + 1) {
                if (d[i] == c[TcW7XFNe -d9AZSUc]) {
                    {
                        B01tI7Zpoka = 0;
                        while (B01tI7Zpoka < d9AZSUc) {
                            aPENCWq[B01tI7Zpoka] = g72QL6v[i + B01tI7Zpoka];
                            B01tI7Zpoka++;
                        };
                    }
                    {
                        B01tI7Zpoka = 0;
                        while (B01tI7Zpoka < d9AZSUc) {
                            printf ("%c", aPENCWq[B01tI7Zpoka]);
                            B01tI7Zpoka++;
                        };
                    }
                    printf ("\n");
                }
                i++;
            };
        };
    };
}

