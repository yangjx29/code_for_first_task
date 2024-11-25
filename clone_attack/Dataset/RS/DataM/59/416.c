int main () {
    int renshu;
    int n;
    int i;
    int m;
    int k;
    int BUxX9pve;
    renshu = (714 - 714);
    char sushe [n] [n + (774 - 773)];
    int biao [n + (303 - 301)] [n + (264 - 262)];
    scanf ("%d", &n);
    {
        i = 701 - 701;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n + (602 - 600) > i) {
            for (k = (182 - 182); n + (837 - 835) > k; k = k + 1) {
                biao[i][k] = (971 - 971);
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
        i = 923 - 923;
        while (n > i) {
            scanf ("%s", &sushe[i]);
            i = i + 1;
        };
    }
    scanf ("%d", &m);
    for (i = 0; n > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (k = 0; n > k; k = k + 1) {
            if (!('@' != sushe[i][k])) {
                biao[i + (46 - 45)][k + (465 - 464)] = -1;
            }
            else {
                if (!('#' != sushe[i][k])) {
                    biao[i + 1][k + 1] = 0;
                }
                else if (!('.' != sushe[i][k])) {
                    biao[i + 1][k + 1] = 1;
                };
            };
        };
    }
    for (BUxX9pve = 1; m > BUxX9pve; BUxX9pve = BUxX9pve +1) {
        for (i = 1; n + 1 > i; i = i + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (k = 1; n + 1 > k; k = k + 1) {
                if (!(-1 != biao[i][k])) {
                    if (!(1 != biao[i - 1][k])) {
                        biao[i - 1][k] = (533 - 531);
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
                        };
                    }
                    if (!(1 != biao[i + 1][k])) {
                        biao[i + 1][k] = 2;
                    }
                    if (!(1 != biao[i][k - 1])) {
                        biao[i][k - 1] = 2;
                    }
                    if (biao[i][k + 1] == 1) {
                        biao[i][k + 1] = 2;
                    };
                };
            };
        }
        for (i = 0; i < n + 2; i++) {
            for (k = 0; k < n + 2; k++) {
                if (biao[i][k] == 2) {
                    biao[i][k] = -1;
                };
            };
        };
    }
    for (i = 0; i < n + 2; i++) {
        for (k = 0; k < n + 2; k++) {
            if (biao[i][k] == -1) {
                renshu = renshu + 1;
            };
        };
    }
    printf ("%d", renshu);
    return 0;
}

