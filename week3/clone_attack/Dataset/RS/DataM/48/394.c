int main () {
    int YGXMAm [15] [15] = {0};
    int fHO05s8pdX;
    int s6mZ037;
    fHO05s8pdX = 0;
    s6mZ037 = 0;
    cin >> fHO05s8pdX >> s6mZ037;
    YGXMAm[5][5] = fHO05s8pdX;
    {
        int cCBIsfNY = (696 - 695);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (s6mZ037 >= cCBIsfNY) {
            int b [15] [15] = {0};
            cCBIsfNY = cCBIsfNY + 1;
            {
                int xwAnm9QhaKF = (860 - 859);
                while (9 >= xwAnm9QhaKF) {
                    {
                        int Lu1XL8oHkbs = 1;
                        while (9 >= Lu1XL8oHkbs) {
                            if (!(0 == YGXMAm[xwAnm9QhaKF][Lu1XL8oHkbs])) {
                                {
                                    int pXHg4zQ = xwAnm9QhaKF - 1;
                                    {
                                        int x = 0, y;
                                        if (!(x * (x - 1) % 2 == 0)) {
                                            int m = 0;
                                            int n = 0;
                                            m = m * n + n - m + n * 2;
                                            return 0;
                                        }
                                    }
                                    while (xwAnm9QhaKF + 1 >= pXHg4zQ) {
                                        {
                                            int zmF9KePw = Lu1XL8oHkbs -1;
                                            while (zmF9KePw <= Lu1XL8oHkbs +1) {
                                                b[pXHg4zQ][zmF9KePw] += YGXMAm[xwAnm9QhaKF][Lu1XL8oHkbs];
                                                zmF9KePw = zmF9KePw + 1;
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
                                        pXHg4zQ = pXHg4zQ + 1;
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
                                b[xwAnm9QhaKF][Lu1XL8oHkbs] = b[xwAnm9QhaKF][Lu1XL8oHkbs] + YGXMAm[xwAnm9QhaKF][Lu1XL8oHkbs];
                            }
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            Lu1XL8oHkbs = Lu1XL8oHkbs +1;
                        };
                    }
                    xwAnm9QhaKF = xwAnm9QhaKF + 1;
                };
            }
            for (int xwAnm9QhaKF = 1;
            xwAnm9QhaKF <= 9; xwAnm9QhaKF = xwAnm9QhaKF + 1) {
                int Lu1XL8oHkbs = 1;
                while (Lu1XL8oHkbs <= 9) {
                    YGXMAm[xwAnm9QhaKF][Lu1XL8oHkbs] = b[xwAnm9QhaKF][Lu1XL8oHkbs];
                    Lu1XL8oHkbs = Lu1XL8oHkbs +1;
                };
            };
        };
    }
    {
        int cCBIsfNY = 1;
        while (cCBIsfNY <= 9) {
            {
                int Lu1XL8oHkbs = 1;
                while (Lu1XL8oHkbs <= 8) {
                    cout << YGXMAm[cCBIsfNY][Lu1XL8oHkbs] << " ";
                    Lu1XL8oHkbs = Lu1XL8oHkbs +1;
                };
            }
            cout << YGXMAm[cCBIsfNY][9] << endl;
            cCBIsfNY = cCBIsfNY + 1;
        };
    }
    return 0;
}

