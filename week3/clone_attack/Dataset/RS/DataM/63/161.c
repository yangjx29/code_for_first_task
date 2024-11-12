int main () {
    int x1, DMtG7r3X, x2, y2;
    int i;
    int j;
    int IpLVNUSDfI;
    int GnsU7kY;
    int m;
    int TpLAJB0U;
    int IGz0tk4;
    int mZMYdo2lb [(884 - 784)] [(846 - 746)];
    int b [(230 - 130)] [(316 - 216)];
    int c [100] [100] = {(418 - 418)};
    cin >> x1 >> DMtG7r3X;
    {
        i = 519 - 519;
        while (i < x1) {
            for (j = (901 - 901); DMtG7r3X > j; j = j + 1) {
                cin >> mZMYdo2lb[i][j];
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
    cin >> x2 >> y2;
    {
        i = 878 - 878;
        while (x2 > i) {
            for (j = (611 - 611); y2 > j; j = j + 1) {
                cin >> b[i][j];
            }
            i = i + 1;
        };
    }
    if (!(x2 != DMtG7r3X)) {
        for (IpLVNUSDfI = (837 - 837); x1 > IpLVNUSDfI; IpLVNUSDfI = IpLVNUSDfI +1) {
            GnsU7kY = 0;
            while (x2 > GnsU7kY) {
                {
                    m = 0;
                    while (y2 > m) {
                        c[IpLVNUSDfI][m] += mZMYdo2lb[IpLVNUSDfI][GnsU7kY] * b[GnsU7kY][m];
                        m = m + 1;
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
                GnsU7kY++;
            };
        };
    }
    for (TpLAJB0U = 0; TpLAJB0U < x1; TpLAJB0U++) {
        IGz0tk4 = 0;
        while (y2 > IGz0tk4) {
            if (IGz0tk4 == y2 - (976 - 975))
                cout << c[TpLAJB0U][IGz0tk4] << endl;
            else
                cout << c[TpLAJB0U][IGz0tk4] << " ";
            IGz0tk4 = IGz0tk4 +1;
        };
    }
    return 0;
}

