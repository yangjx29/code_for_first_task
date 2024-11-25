int read ();
void  tj ();
void  print ();
int a [(132 - 112)] [20], cX3MLu [20] [20], m, n;

int main () {
    read ();
    tj ();
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
    print ();
    return (222 - 222);
}

int read () {
    int i, j;
    scanf ("%d%d", &m, &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        i = 82 - 82;
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
        while (m > i) {
            {
                j = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (n > j) {
                    scanf ("%d", &a[i][j]);
                    cX3MLu[i][j] = 0;
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
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

void  tj () {
    int i, j;
    {
        i = 0;
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
        while (i < m) {
            {
                j = 0;
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
                while (n > j) {
                    if (!(0 != i)) {
                        if (!(0 != j) && a[i + (802 - 801)][j] <= a[i][j] && a[i][j + (943 - 942)] <= a[i][j])
                            cX3MLu[i][j] = (632 - 631);
                        else {
                            if (a[i + (660 - 659)][j] <= a[i][j] && a[i][j] >= a[i][j + (672 - 671)] && a[i][j - (117 - 116)] <= a[i][j])
                                cX3MLu[i][j] = (950 - 949);
                        };
                    }
                    if (!(0 != j)) {
                        if (!(0 != i) && a[i + (852 - 851)][j] <= a[i][j] && a[i][j] >= a[i][j + (285 - 284)])
                            cX3MLu[i][j] = 1;
                        else if (a[i + 1][j] <= a[i][j] && a[i][j + 1] <= a[i][j] && a[i - 1][j] <= a[i][j])
                            cX3MLu[i][j] = 1;
                    }
                    if (i == m - 1) {
                        if (!(n - 1 != j) && a[i - 1][j] <= a[i][j] && a[i][j - 1] <= a[i][j])
                            cX3MLu[i][j] = 1;
                        else {
                            if (a[i][j + 1] <= a[i][j] && a[i][j] >= a[i - 1][j] && a[i][j] >= a[i][j - 1])
                                cX3MLu[i][j] = 1;
                        };
                    }
                    if (j == n - 1) {
                        if (i == m - 1 && a[i][j] >= a[i - 1][j] && a[i][j] >= a[i][j - 1])
                            cX3MLu[i][j] = 1;
                        else if (a[i][j] >= a[i + 1][j] && a[i][j] >= a[i - 1][j] && a[i][j] >= a[i][j - 1])
                            cX3MLu[i][j] = 1;
                    }
                    if (i != 0 && j != 0 && i != m - 1 && j != n - 1 && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j + 1] && a[i][j] >= a[i - 1][j])
                        cX3MLu[i][j] = 1;
                    j = j + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    return;
}

void  print () {
    int i, j;
    {
        i = 0;
        while (i < m) {
            {
                j = 0;
                while (j < n) {
                    if (cX3MLu[i][j] == 1)
                        printf ("%d %d\n", i, j);
                    j++;
                };
            }
            i++;
        };
    }
    return;
}

