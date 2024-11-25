int FpnVhuXT6 (int vPoTcUwxe, int XQ7ZTcro2E5) {
    return vPoTcUwxe < XQ7ZTcro2E5 ? vPoTcUwxe : XQ7ZTcro2E5;
}

int DHtYXPVM (int hwfHrEKZux, int rQDOidu0Xn [(298 - 198)] [100]) {
    int m;
    int num [100];
    m = 10000;
    for (int ZLbgnjpwR = (369 - 369);
    ZLbgnjpwR < hwfHrEKZux; ZLbgnjpwR++) {
        {
            int j;
            j = (789 - 789);
            while (hwfHrEKZux > j) {
                m = FpnVhuXT6 (m, rQDOidu0Xn[ZLbgnjpwR][j]);
                j++;
            };
        }
        num[ZLbgnjpwR] = m;
        m = 10000;
    }
    for (int ZLbgnjpwR = (70 - 70);
    ZLbgnjpwR < hwfHrEKZux; ZLbgnjpwR++) {
        for (int j = 0;
        j < hwfHrEKZux; j++) {
            rQDOidu0Xn[ZLbgnjpwR][j] = rQDOidu0Xn[ZLbgnjpwR][j] - num[ZLbgnjpwR];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    m = 10000;
    for (int j = 0;
    j < hwfHrEKZux; j++) {
        for (int ZLbgnjpwR = 0;
        ZLbgnjpwR < hwfHrEKZux; ZLbgnjpwR++) {
            m = FpnVhuXT6 (m, rQDOidu0Xn[ZLbgnjpwR][j]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
        num[j] = m;
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
        m = 10000;
    }
    for (int j = 0;
    j < hwfHrEKZux; j++) {
        int ZLbgnjpwR;
        ZLbgnjpwR = 0;
        while (ZLbgnjpwR < hwfHrEKZux) {
            rQDOidu0Xn[ZLbgnjpwR][j] = rQDOidu0Xn[ZLbgnjpwR][j] - num[j];
            ZLbgnjpwR++;
        };
    }
    if (hwfHrEKZux == 2)
        return rQDOidu0Xn[(879 - 878)][(639 - 638)];
    else {
        int uiyrknbDvHuK;
        uiyrknbDvHuK = rQDOidu0Xn[1][1];
        for (int j = 0;
        j < hwfHrEKZux; j++) {
            for (int ZLbgnjpwR = 1;
            ZLbgnjpwR < hwfHrEKZux - 1; ZLbgnjpwR++) {
                rQDOidu0Xn[ZLbgnjpwR][j] = rQDOidu0Xn[ZLbgnjpwR +1][j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            };
        }
        for (int ZLbgnjpwR = 0;
        ZLbgnjpwR < hwfHrEKZux; ZLbgnjpwR++) {
            int j;
            j = 1;
            while (hwfHrEKZux - 1 > j) {
                rQDOidu0Xn[ZLbgnjpwR][j] = rQDOidu0Xn[ZLbgnjpwR][j + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                j++;
            };
        }
        return uiyrknbDvHuK + DHtYXPVM (hwfHrEKZux - 1, rQDOidu0Xn);
    };
}

int main () {
    int hwfHrEKZux, uiyrknbDvHuK = 0;
    int Dnwfa302lOx = hwfHrEKZux;
    cin >> hwfHrEKZux;
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
    while (hwfHrEKZux--) {
        int rQDOidu0Xn [100] [100];
        int uiyrknbDvHuK = DHtYXPVM (Dnwfa302lOx, rQDOidu0Xn);
        for (int ZLbgnjpwR = 0;
        Dnwfa302lOx > ZLbgnjpwR; ZLbgnjpwR++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (int j = 0;
            j < Dnwfa302lOx; j++) {
                cin >> rQDOidu0Xn[ZLbgnjpwR][j];
            };
        }
        cout << uiyrknbDvHuK << endl;
    }
    return 0;
}

