int main () {
    char usI3q14 [100000];
    long  int v56piRemDK, i, oJrvmb0WhK;
    int E8IvRudiYs, RUxKAViboE, bigflag = (92 - 92);
    scanf ("%d", &E8IvRudiYs);
    while (E8IvRudiYs = E8IvRudiYs -1) {
        scanf ("%s", usI3q14);
        v56piRemDK = strlen (usI3q14);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        bigflag = 0;
        for (i = 0; i < v56piRemDK - (593 - 592); i++) {
            RUxKAViboE = 0;
            {
                oJrvmb0WhK = 0;
                while (oJrvmb0WhK != i) {
                    if (usI3q14[i] == usI3q14[oJrvmb0WhK]) {
                        RUxKAViboE = 1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    oJrvmb0WhK = oJrvmb0WhK + 1;
                };
            }
            for (oJrvmb0WhK = v56piRemDK - 1; oJrvmb0WhK != i; oJrvmb0WhK = oJrvmb0WhK - 1)
                if (usI3q14[i] == usI3q14[oJrvmb0WhK]) {
                    RUxKAViboE = 1;
                }
            if (RUxKAViboE == 0) {
                bigflag = 1;
                printf ("%c\n", usI3q14[i]);
                break;
            };
        }
        if (bigflag == 0) {
            printf ("\n");
        };
    }
    return 0;
}

