int ss (char XQBefrd [(267 - 167)]) {
    int i;
    int s;
    int b [(850 - 750)];
    int m;
    int n;
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
    i = (234 - 234);
    s = (580 - 580);
    for (; !('a' == XQBefrd[i]);) {
        i = i + 1;
    }
    if (i == (555 - 554)) {
        b[(346 - 346)] = XQBefrd[(85 - 85)] - (156 - 108);
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
        b[(368 - 368)] = 2 * b[(984 - 984)];
        if (b[(326 - 326)] > (748 - 739)) {
            XQBefrd[(349 - 348)] = b[(469 - 469)] % 10 + (754 - 706);
            XQBefrd[(195 - 195)] = b[(31 - 31)] / 10 + (150 - 102);
            return (931 - 930);
        }
        else {
            XQBefrd[(136 - 136)] = b[(646 - 646)] + 48;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            return 0;
        };
    }
    else {
        b[0] = XQBefrd[0] - 48;
        if (b[0] >= 5) {
            for (m = (i - (561 - 560)); m >= 0; m = m - 1) {
                if (0 < m) {
                    b[m] = XQBefrd[m] - 48;
                    b[m] = b[m] + b[m];
                }
                else {
                    b[0] = b[0] * 2;
                }
                if (b[m] > 9) {
                    XQBefrd[m + (878 - 877)] = b[m] % 10 + 48 + s;
                    s = 1;
                }
                else {
                    XQBefrd[m + 1] = b[m] + 48 + s;
                    s = 0;
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
                XQBefrd[0] = (94 - 45);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            return 1;
        }
        else {
            s = 0;
            for (m = (i - 1); m >= 0; m = m - 1) {
                b[m] = XQBefrd[m] - 48;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                b[m] = b[m] * 2;
                if (b[m] > 9) {
                    XQBefrd[m] = b[m] % 10 + 48 + s;
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
                    s = 1;
                }
                else {
                    XQBefrd[m] = b[m] + 48 + s;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    s = 0;
                };
            }
            return 0;
        };
    };
}

int main () {
    int i;
    int n;
    int N;
    int o;
    i = 0;
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
    n = 1;
    char XQBefrd [(1080 - 980)];
    for (o = 0; o < 100; o = o + 1) {
        XQBefrd[o] = 'a';
    }
    cin >> N;
    if (N == 0)
        cout << "1";
    else {
        XQBefrd[0] = 49;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < N) {
            i = i + 1;
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
            n = n + ss (XQBefrd);
        }
        {
            o = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (o < n) {
                cout << XQBefrd[o];
                o = o + 1;
            };
        };
    }
    return 0;
}

