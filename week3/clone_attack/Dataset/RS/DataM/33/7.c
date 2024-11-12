int main () {
    int k, m, n;
    char cal [2000] [256];
    int i, j, temp1 = 0, temp2 = 0, temp4 = 0, LEb43KPuHrL = 0;
    double  temp11 = 0;
    scanf ("%d", &n);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            scanf ("%s", cal[i]);
            m = strlen (cal[i]);
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
                j = 0;
                while (j <= m) {
                    if (cal[i][j] == 'A') {
                        cal[i][j] = 'T';
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
                        continue;
                    }
                    if (cal[i][j] == 'T') {
                        cal[i][j] = 'A';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        continue;
                    }
                    if (cal[i][j] == 'C') {
                        cal[i][j] = 'G';
                        continue;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (cal[i][j] == 'G') {
                        cal[i][j] = 'C';
                        continue;
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= n) {
            printf ("%s\n", cal[i]);
            i++;
        };
    }
    return 0;
}

