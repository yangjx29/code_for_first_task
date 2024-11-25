int main () {
    unsigned  int a [301];
    char b;
    int i;
    int p;
    int qa2OqGXE;
    int tr;
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
    i = 1;
    p = 0;
    while (1) {
        scanf ("%d", &a[i]);
        scanf ("%c", &b);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (b != ',')
            break;
        i++;
    }
    if (i == 1) {
        p = 1;
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
    else {
        qa2OqGXE = i;
        while (qa2OqGXE >= 2) {
            if (a[qa2OqGXE] != a[qa2OqGXE - 1])
                break;
            if (qa2OqGXE == 2) {
                p = 1;
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
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            qa2OqGXE--;
        };
    }
    if (p != 1) {
        {
            qa2OqGXE = i;
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
            while (qa2OqGXE >= 2) {
                if (a[qa2OqGXE] >= a[qa2OqGXE - 1]) {
                    tr = a[qa2OqGXE - 1];
                    a[qa2OqGXE - 1] = a[qa2OqGXE];
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
                    a[qa2OqGXE] = tr;
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
                qa2OqGXE--;
            };
        }
        for (qa2OqGXE = i; qa2OqGXE >= 3; qa2OqGXE--) {
            if (a[qa2OqGXE] >= a[qa2OqGXE - 1] && a[qa2OqGXE] != a[1] || a[qa2OqGXE - 1] == a[1]) {
                tr = a[qa2OqGXE - 1];
                a[qa2OqGXE - 1] = a[qa2OqGXE];
                a[qa2OqGXE] = tr;
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
        printf ("%d", a[2]);
    };
}

