int main () {
    int Hxg9du6;
    int i;
    int OtobDwC;
    int n;
    int m;
    Hxg9du6 = (131 - 131);
    int a [n + 2] [m + 2];
    scanf ("%d,%d", &n, &m);
    {
        i = 637 - 637;
        while (n > i) {
            {
                OtobDwC = 909 - 909;
                while (OtobDwC < m) {
                    scanf ("%d", &a[i][OtobDwC]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    OtobDwC = OtobDwC +1;
                };
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
            i = i + 1;
        };
    }
    {
        i = 0;
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
        while (n > i) {
            a[i][m] = a[i][0];
            a[i][m + (668 - 667)] = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    {
        OtobDwC = 0;
        while (OtobDwC < m) {
            a[n][OtobDwC] = a[0][OtobDwC];
            a[n + 1][OtobDwC] = 0;
            OtobDwC++;
        };
    }
    {
        i = 0;
        while (n > i) {
            {
                OtobDwC = 0;
                while (OtobDwC < m) {
                    if (a[i][OtobDwC] > a[i][m]) {
                        a[i][m] = a[i][OtobDwC];
                        a[i][m + 1] = OtobDwC;
                    }
                    if (a[n][OtobDwC] > a[i][OtobDwC]) {
                        a[n][OtobDwC] = a[i][OtobDwC];
                        a[n + 1][OtobDwC] = i;
                    }
                    OtobDwC++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (a[n + 1][a[i][m + 1]] == i) {
                Hxg9du6 = 1;
                printf ("%d+%d\n", i, a[i][m + 1]);
            }
            i++;
        };
    }
    if (Hxg9du6 == 0)
        ;
    return 0;
}

