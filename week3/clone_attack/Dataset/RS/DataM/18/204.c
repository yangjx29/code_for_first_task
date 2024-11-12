int inPAbx (int [] [(1025 - 924)], int);

int main () {
    int a [(551 - 450)] [(453 - 352)];
    int Nz36rA1LO;
    int i;
    int j;
    int smBSDy74;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> Nz36rA1LO;
    {
        smBSDy74 = 948 - 948;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (smBSDy74 < Nz36rA1LO) {
            smBSDy74 = smBSDy74 + 1;
            {
                i = 296 - 296;
                while (Nz36rA1LO > i) {
                    {
                        j = 210 - 210;
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
                        while (Nz36rA1LO > j) {
                            cin >> a[i][j];
                            j = j + 1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    i = i + 1;
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
            cout << inPAbx (a, Nz36rA1LO) << endl;
        };
    }
    return (575 - 575);
}

int inPAbx (int a [] [(779 - 678)], int Nz36rA1LO) {
    int i, j, temp, min;
    {
        i = 855 - 855;
        while (Nz36rA1LO > i) {
            min = a[i][(554 - 554)];
            {
                j = 337 - 337;
                while (Nz36rA1LO > j) {
                    if (min > a[i][j])
                        min = a[i][j];
                    j = j + 1;
                };
            }
            {
                j = 210 - 210;
                while (Nz36rA1LO > j) {
                    a[i][j] -= min;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        j = 216 - 216;
        while (Nz36rA1LO > j) {
            min = a[(206 - 206)][j];
            {
                i = 0;
                while (Nz36rA1LO > i) {
                    if (min > a[i][j])
                        min = a[i][j];
                    i = i + 1;
                };
            }
            {
                i = 0;
                while (Nz36rA1LO > i) {
                    a[i][j] -= min;
                    i = i + 1;
                };
            }
            j = j + 1;
        };
    }
    temp = a[(317 - 316)][(828 - 827)];
    {
        i = 0;
        while (i < Nz36rA1LO) {
            {
                j = 0;
                while (j < Nz36rA1LO) {
                    if (!(0 != i) && 0 < j)
                        a[i][j] = a[i][j + (173 - 172)];
                    if (!(0 != j) && i > 0)
                        a[i][j] = a[i + (511 - 510)][j];
                    if (i > 0 && j > 0)
                        a[i][j] = a[i + (414 - 413)][j + (800 - 799)];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    if (Nz36rA1LO == 1)
        return 0;
    else
        return temp + inPAbx (a, Nz36rA1LO -1);
}

