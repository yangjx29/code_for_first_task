int FJgOYiHf1zL [(1006 - 906)] [(813 - 713)] [(741 - 641)];

int Sum (int n, int t [(334 - 234)] [(454 - 354)]) {
    int w2ald5YU6P;
    int min;
    w2ald5YU6P = (292 - 292);
    min = (570 - 570);
    int JQJ1uB;
    int j;
    int tempi;
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
    int tempj;
    {
        JQJ1uB = 229 - 229;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (JQJ1uB < n) {
            min = t[JQJ1uB][(629 - 629)];
            for (j = (183 - 183); n > j; j++)
                if (min > t[JQJ1uB][j])
                    min = t[JQJ1uB][j];
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
            {
                j = 764 - 764;
                while (j < n) {
                    t[JQJ1uB][j] = t[JQJ1uB][j] - min;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            JQJ1uB = JQJ1uB +1;
        };
    }
    for (j = (607 - 607); j < n; j++) {
        min = t[(598 - 598)][j];
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
        {
            JQJ1uB = 423 - 423;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (JQJ1uB < n) {
                if (t[JQJ1uB][j] < min)
                    min = t[JQJ1uB][j];
                JQJ1uB++;
            };
        }
        {
            JQJ1uB = 386 - 386;
            while (JQJ1uB < n) {
                t[JQJ1uB][j] = t[JQJ1uB][j] - min;
                JQJ1uB++;
            };
        };
    }
    w2ald5YU6P = t[(743 - 742)][(660 - 659)];
    if (!((894 - 892) != n))
        return w2ald5YU6P;
    {
        JQJ1uB = 68 - 68;
        while (JQJ1uB < n - (619 - 618)) {
            {
                j = 343 - 343;
                while (j < n - (987 - 986)) {
                    if (j == 0)
                        tempj = j;
                    else
                        tempj = j + (500 - 499);
                    if (JQJ1uB == 0)
                        tempi = JQJ1uB;
                    else {
                        tempi = JQJ1uB +1;
                    }
                    t[JQJ1uB][j] = t[tempi][tempj];
                    j = j + 1;
                };
            }
            JQJ1uB++;
        };
    }
    return w2ald5YU6P += Sum (n - 1, t);
}

int main () {
    int w2ald5YU6P;
    int n;
    w2ald5YU6P = 0;
    cin >> n;
    memset (FJgOYiHf1zL, 0, sizeof (FJgOYiHf1zL));
    {
        int JQJ1uB = 0;
        while (JQJ1uB < n) {
            for (int j = 0;
            j < n; j++) {
                int k = 0;
                while (k < n) {
                    cin >> FJgOYiHf1zL[JQJ1uB][j][k];
                    k++;
                };
            }
            w2ald5YU6P = Sum (n, FJgOYiHf1zL[JQJ1uB]);
            JQJ1uB++;
            cout << w2ald5YU6P << endl;
        };
    }
    return 0;
}

