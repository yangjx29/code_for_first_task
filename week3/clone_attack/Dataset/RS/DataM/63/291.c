int main () {
    int XfU6E21r;
    int ZUyAji4bScx;
    int b;
    int AakELeMc2yX;
    int P0wZ8mNav;
    int nCBen8RH;
    int PP2lWGjq;
    int UofHsP6C;
    XfU6E21r = (870 - 870);
    ZUyAji4bScx = (670 - 670);
    b = (884 - 884);
    AakELeMc2yX = (205 - 205);
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
    int yMNqi6edUy [PP2lWGjq] [UofHsP6C];
    int mY2Z9am18 [P0wZ8mNav] [nCBen8RH];
    int juc [P0wZ8mNav] [UofHsP6C];
    cin >> P0wZ8mNav >> nCBen8RH;
    {
        XfU6E21r = 823 - 823;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (P0wZ8mNav > XfU6E21r) {
            {
                ZUyAji4bScx = 479 - 479;
                while (ZUyAji4bScx < nCBen8RH) {
                    cin >> mY2Z9am18[XfU6E21r][ZUyAji4bScx];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    ZUyAji4bScx = ZUyAji4bScx +1;
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
            XfU6E21r = XfU6E21r +1;
        };
    }
    cin >> PP2lWGjq >> UofHsP6C;
    {
        XfU6E21r = 442 - 442;
        while (XfU6E21r < PP2lWGjq) {
            {
                ZUyAji4bScx = 70 - 70;
                while (UofHsP6C > ZUyAji4bScx) {
                    cin >> yMNqi6edUy[XfU6E21r][ZUyAji4bScx];
                    ZUyAji4bScx = ZUyAji4bScx +1;
                };
            }
            XfU6E21r = XfU6E21r +1;
        };
    }
    {
        XfU6E21r = 82 - 82;
        while (P0wZ8mNav > XfU6E21r) {
            {
                ZUyAji4bScx = 0;
                while (UofHsP6C > ZUyAji4bScx) {
                    juc[XfU6E21r][ZUyAji4bScx] = 0;
                    ZUyAji4bScx = ZUyAji4bScx +1;
                };
            }
            XfU6E21r = XfU6E21r +1;
        };
    }
    {
        XfU6E21r = 0;
        while (P0wZ8mNav > XfU6E21r) {
            {
                ZUyAji4bScx = 0;
                while (ZUyAji4bScx < UofHsP6C) {
                    {
                        AakELeMc2yX = 0;
                        while (nCBen8RH > AakELeMc2yX) {
                            juc[XfU6E21r][ZUyAji4bScx] = juc[XfU6E21r][ZUyAji4bScx] + mY2Z9am18[XfU6E21r][AakELeMc2yX] * yMNqi6edUy[AakELeMc2yX][ZUyAji4bScx];
                            AakELeMc2yX = AakELeMc2yX +1;
                        };
                    }
                    ZUyAji4bScx = ZUyAji4bScx +1;
                };
            }
            XfU6E21r = XfU6E21r +1;
        };
    }
    {
        XfU6E21r = 0;
        while (XfU6E21r < P0wZ8mNav) {
            b = 0;
            {
                ZUyAji4bScx = 0;
                while (ZUyAji4bScx < UofHsP6C) {
                    if (b == UofHsP6C -(873 - 872))
                        cout << juc[XfU6E21r][ZUyAji4bScx] << endl;
                    else {
                        b = b + 1;
                        cout << juc[XfU6E21r][ZUyAji4bScx] << ' ';
                    }
                    ZUyAji4bScx = ZUyAji4bScx +1;
                };
            }
            XfU6E21r = XfU6E21r +1;
        };
    }
    return 0;
}

