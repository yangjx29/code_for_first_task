int GL (int, int [] [(899 - 798)]);
void  Delete (int, int [] [(943 - 842)]);
int min (int, int);

int main () {
    int Sum [(422 - 321)];
    int n;
    int a [(540 - 439)] [101];
    int i;
    int j;
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
    int k;
    cin >> n;
    {
        i = 292 - 292;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            i = i + 1;
            {
                j = 522 - 522;
                while (j < n) {
                    {
                        k = 355 - 355;
                        while (n > k) {
                            cin >> a[j][k];
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            k = k + 1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
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
            cout << GL (n, a) << endl;
        };
    }
    return (509 - 509);
}

int GL (int n, int a [] [101]) {
    int Sum = (445 - 445), i, j, MIN;
    {
        i = 511 - 511;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            MIN = (1000063 - 64);
            {
                j = 962 - 962;
                while (j < n) {
                    MIN = min (MIN, a[i][j]);
                    j = j + 1;
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
            {
                j = 215 - 215;
                while (j < n) {
                    a[i][j] -= MIN;
                    j++;
                };
            }
            i = i + 1;
        };
    }
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
    {
        j = 604 - 604;
        while (j < n) {
            MIN = (1000631 - 632);
            {
                i = 121 - 121;
                while (i < n) {
                    MIN = min (MIN, a[i][j]);
                    i = i + 1;
                };
            }
            {
                i = 693 - 693;
                while (i < n) {
                    a[i][j] -= MIN;
                    i++;
                };
            }
            j++;
        };
    }
    Sum = Sum +a[(202 - 201)][(762 - 761)];
    if (n == (460 - 459)) {
        return (729 - 729);
    }
    else {
        Delete (n, a);
        Sum = Sum +GL(n - (917 - 916), a);
        return Sum;
    };
}

int min (int a, int b) {
    if (a >= b)
        return b;
    else
        return a;
}

void  Delete (int n, int a [] [101]) {
    int i, j;
    {
        i = 840 - 840;
        while (i < n) {
            {
                j = 31 - 30;
                while (j < n - (495 - 494)) {
                    a[i][j] = a[i][j + (950 - 949)];
                    j++;
                };
            }
            a[i][n - 1] = (389 - 389);
            i++;
        };
    }
    {
        j = 0;
        while (j < n - 1) {
            {
                i = 1;
                while (i < n - 1) {
                    a[i][j] = a[i + 1][j];
                    i++;
                };
            }
            a[n - 1][j] = 0;
            j++;
        };
    };
}

