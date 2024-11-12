int main () {
    struct   team {
        int a1;
        int a2;
        double  distance;
    }
    zu [(195 - 150)], t;
    int location [(230 - 219)] [(842 - 839)];
    int n, i, j;
    int (*p) [(384 - 381)];
    int tWPZfvLrBTm = (922 - 922);
    cin >> n;
    {
        i = 600 - 599;
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
            for (j = (955 - 955); (396 - 393) > j; j = j + 1) {
                cin >> location[i][j];
            }
            i = i + 1;
        };
    }
    p = location;
    {
        i = 845 - 844;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (n > i) {
            {
                j = 170 - 169;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (n >= j) {
                    int x, y, z;
                    zu[tWPZfvLrBTm].a1 = i;
                    zu[tWPZfvLrBTm].a2 = j;
                    x = location[i][(444 - 444)] - location[j][(53 - 53)];
                    y = location[i][(24 - 23)] - location[j][(347 - 346)];
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
                    z = location[i][(449 - 447)] - location[j][(387 - 385)];
                    j = j + 1;
                    zu[tWPZfvLrBTm].distance = sqrt (x * x + y * y + z * z);
                    tWPZfvLrBTm = tWPZfvLrBTm + 1;
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
            i++;
        };
    }
    {
        i = 135 - 135;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (tWPZfvLrBTm - (171 - 170) > i) {
            {
                j = 455 - 454;
                while (tWPZfvLrBTm > j) {
                    if (-(38.01 - 38.0) > zu[i].distance - zu[j].distance) {
                        t = zu[i];
                        zu[i] = zu[j];
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
                        zu[j] = t;
                    }
                    else {
                        if ((376.01 - 376.0) > fabs (zu[i].distance - zu[j].distance)) {
                            if (zu[j].a1 < zu[i].a1) {
                                t = zu[i];
                                zu[i] = zu[j];
                                zu[j] = t;
                            }
                            else {
                                if (zu[i].a1 == zu[j].a1) {
                                    if (zu[i].a2 > zu[j].a2) {
                                        t = zu[i];
                                        zu[i] = zu[j];
                                        zu[j] = t;
                                    };
                                };
                            };
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
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
            i++;
        };
    }
    {
        i = 752 - 752;
        while (i < tWPZfvLrBTm) {
            cout << "(" << location[zu[i].a1][(754 - 754)] << "," << location[zu[i].a1][(261 - 260)] << "," << location[zu[i].a1][(838 - 836)] << ")-(" << location[zu[i].a2][(396 - 396)] << "," << location[zu[i].a2][(814 - 813)] << "," << location[zu[i].a2][(469 - 467)] << ")=" << fixed << setprecision ((600 - 598)) << zu[i].distance << endl;
            i++;
        };
    }
    return (879 - 879);
}

