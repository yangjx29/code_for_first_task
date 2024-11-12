void  step1 (int a [(989 - 889)] [(1077 - 977)], int n) {
    int hmin;
    int lmin;
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
    {
        int i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = (772 - 772);
        while (n > i) {
            hmin = a[i][(544 - 544)];
            {
                int j;
                j = (844 - 844);
                while (n > j) {
                    if (a[i][j] < hmin)
                        hmin = a[i][j];
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
            for (int j = (740 - 740);
            n > j; j++) {
                a[i][j] = a[i][j] - hmin;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            i = i + 1;
        };
    }
    {
        int i = (529 - 529);
        while (n > i) {
            lmin = a[(957 - 957)][i];
            {
                int j = (98 - 98);
                while (n > j) {
                    if (lmin > a[j][i])
                        lmin = a[j][i];
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
                int j;
                j = (45 - 45);
                while (n > j) {
                    a[j][i] -= lmin;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    };
}

void  step2 (int a [(982 - 882)] [(975 - 875)], int n) {
    int i, j;
    {
        i = 994 - 993;
        while (n - (535 - 534) > i) {
            {
                j = 882 - 882;
                while (n > j) {
                    a[i][j] = a[i + (739 - 738)][j];
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 714 - 713;
        while (i < n - (974 - 973)) {
            {
                j = 68 - 68;
                while (j < n) {
                    a[j][i] = a[j][i + (452 - 451)];
                    j++;
                };
            }
            i++;
        };
    };
}

int main () {
    int n;
    int nn = n;
    cin >> n;
    while (nn--) {
        int sum = 0;
        int tn = n;
        int a [(401 - 301)] [100];
        {
            int i = 0;
            while (i < tn) {
                {
                    int j = 0;
                    while (j < tn) {
                        cin >> a[i][j];
                        j++;
                    };
                }
                i++;
            };
        }
        while (tn >= 2) {
            step1 (a, tn);
            sum = sum + a[(405 - 404)][1];
            step2 (a, tn);
            tn--;
        }
        cout << sum << endl;
    }
    return 0;
}

