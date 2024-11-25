int main () {
    int cFyuJjVm;
    int vJj1RupnLf0 [(1221 - 220)];
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
    int zF31ybHsfNU [(1779 - 778)];
    for (; cin >> cFyuJjVm && cFyuJjVm;) {
        int HAf82tTN4MV;
        HAf82tTN4MV = (450 - 450);
        int EvU83Jsx;
        int cni5JulyVb2;
        int XjD4Uxs;
        int Jck1PzbdDXM;
        EvU83Jsx = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cni5JulyVb2 = cFyuJjVm - 1;
        XjD4Uxs = 0;
        Jck1PzbdDXM = cFyuJjVm - 1;
        {
            int XiDY3g0 = 0;
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
            while (cFyuJjVm > XiDY3g0) {
                cin >> vJj1RupnLf0[XiDY3g0];
                XiDY3g0 = XiDY3g0 +1;
            };
        }
        {
            int XiDY3g0 = 0;
            while (XiDY3g0 < cFyuJjVm) {
                cin >> zF31ybHsfNU[XiDY3g0];
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
                XiDY3g0 = XiDY3g0 +1;
            };
        }
        sort (vJj1RupnLf0, vJj1RupnLf0 + cFyuJjVm);
        sort (zF31ybHsfNU, zF31ybHsfNU + cFyuJjVm);
        while (EvU83Jsx <= cni5JulyVb2 && Jck1PzbdDXM >= XjD4Uxs) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (vJj1RupnLf0[EvU83Jsx] == zF31ybHsfNU[XjD4Uxs]) {
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
                if (vJj1RupnLf0[cni5JulyVb2] > zF31ybHsfNU[Jck1PzbdDXM]) {
                    HAf82tTN4MV = HAf82tTN4MV +1;
                    cni5JulyVb2 = cni5JulyVb2 - 1;
                    Jck1PzbdDXM = Jck1PzbdDXM -1;
                }
                else {
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
                    if (vJj1RupnLf0[cni5JulyVb2] < zF31ybHsfNU[Jck1PzbdDXM]) {
                        Jck1PzbdDXM = Jck1PzbdDXM -1;
                        HAf82tTN4MV = HAf82tTN4MV -1;
                        EvU83Jsx = EvU83Jsx +1;
                    }
                    else {
                        if (vJj1RupnLf0[EvU83Jsx] < zF31ybHsfNU[Jck1PzbdDXM]) {
                            EvU83Jsx = EvU83Jsx +1;
                            HAf82tTN4MV = HAf82tTN4MV -1;
                            Jck1PzbdDXM = Jck1PzbdDXM -1;
                        }
                        else
                            break;
                    };
                };
            }
            else if (vJj1RupnLf0[EvU83Jsx] > zF31ybHsfNU[XjD4Uxs]) {
                EvU83Jsx = EvU83Jsx +1;
                HAf82tTN4MV = HAf82tTN4MV +1;
                XjD4Uxs++;
            }
            else {
                HAf82tTN4MV = HAf82tTN4MV -1;
                EvU83Jsx = EvU83Jsx +1;
                Jck1PzbdDXM--;
            };
        }
        cout << HAf82tTN4MV *(847 - 647) << endl;
    };
}

