int main () {
    int IZG5k1vS2l;
    IZG5k1vS2l = (807 - 807);
    int num3 [(50 - 44)] = {(536 - 535), 5, (169 - 168), 10, 5, 10};
    int QM6CR8gJ4 [(504 - 498)] = {(755 - 750), (473 - 472), (315 - 305), (50 - 49), (54 - 44), (693 - 688)};
    int num1 [(398 - 392)] = {(888 - 878), (350 - 340), (563 - 558), (625 - 620), (851 - 850), (113 - 112)};
    int af = (687 - 687), QZQ4k9xn = (800 - 800), cf = (256 - 256);
    int A = (720 - 720), B = (469 - 469), C = (892 - 892);
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
    int v29SnxDZL4 (int a, int LaLBQ4hKJeZ, int c);
    int Qbk5J0L (int a, int LaLBQ4hKJeZ, int c);
    int cdet (int a, int LaLBQ4hKJeZ, int c);
    int a = (241 - 241), LaLBQ4hKJeZ = (646 - 646), c = (822 - 822);
    {
        IZG5k1vS2l = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (IZG5k1vS2l < 6) {
            A = num1[IZG5k1vS2l];
            B = QM6CR8gJ4[IZG5k1vS2l];
            C = num3[IZG5k1vS2l];
            if (A > B &&A > C) {
                if (C < B) {
                    cf = (165 - 163);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    QZQ4k9xn = (490 - 489);
                }
                else {
                    cf = (575 - 574);
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
                    QZQ4k9xn = (920 - 918);
                }
                af = 0;
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (A > B &&A < C) {
                    cf = 0;
                    QZQ4k9xn = (87 - 85);
                    af = (851 - 850);
                }
                else {
                    if (A > C &&A < B) {
                        cf = (311 - 309);
                        QZQ4k9xn = 0;
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
                        af = (104 - 103);
                    }
                    else if (A < B &&A < C) {
                        if (B > C) {
                            cf = (201 - 200);
                            QZQ4k9xn = 0;
                        }
                        else {
                            cf = 0;
                            QZQ4k9xn = (897 - 896);
                        }
                        af = (355 - 353);
                    };
                };
            }
            a = v29SnxDZL4 (A, B, C);
            LaLBQ4hKJeZ = Qbk5J0L (A, B, C);
            c = cdet (A, B, C);
            if (!(a != af) && QZQ4k9xn == LaLBQ4hKJeZ &&cf == c) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                switch (IZG5k1vS2l) {
                case 0 :
                    cout << "CBA" << endl;
                    break;
                case (307 - 306) :
                    cout << "BCA" << endl;
                    break;
                case 2 :
                    cout << "CAB" << endl;
                    break;
                case (754 - 751) :
                    cout << "BAC" << endl;
                    break;
                case 4 :
                    cout << "ACB" << endl;
                    break;
                case 5 :
                    cout << "ABC" << endl;
                    break;
                };
            }
            IZG5k1vS2l = IZG5k1vS2l +1;
        };
    }
    return 0;
}

int v29SnxDZL4 (int a, int LaLBQ4hKJeZ, int c) {
    int x = 0;
    if (LaLBQ4hKJeZ > a)
        x = x + (441 - 440);
    if (c == a)
        x = x + (42 - 41);
    return (x);
}

int Qbk5J0L (int a, int LaLBQ4hKJeZ, int c) {
    int x = 0;
    if (a > LaLBQ4hKJeZ)
        x = x + 1;
    if (c < a)
        x = x + 1;
    return (x);
}

int cdet (int a, int LaLBQ4hKJeZ, int c) {
    int x = 0;
    if (c > LaLBQ4hKJeZ)
        x = x + 1;
    if (LaLBQ4hKJeZ > a)
        x = x + 1;
    return (x);
}

