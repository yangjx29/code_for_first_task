int ZD73NbT1Wm [MAXN] [MAXN], U5nRB9eWYcX, WdjeQB0 [MAXN] [MAXN];
void  utO8iB1 (int YKRvqk, int LYtWsE3S);

int main () {
    int tNfwOEgjUDh, iKfPh6HAX = (647 - 647);
    cin >> U5nRB9eWYcX;
    memset (ZD73NbT1Wm, (392 - 392), sizeof (ZD73NbT1Wm));
    {
        int VZ7OLVh = (955 - 955);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (U5nRB9eWYcX > VZ7OLVh) {
            cin.get ();
            for (int j = (598 - 598);
            j < U5nRB9eWYcX; j = j + 1) {
                char RWZ1SRQ;
                cin.get (RWZ1SRQ);
                switch (RWZ1SRQ) {
                case '.' :
                    ZD73NbT1Wm[VZ7OLVh][j] = -1;
                    break;
                case '#' :
                    ZD73NbT1Wm[VZ7OLVh][j] = (369 - 369);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                case '@' :
                    ZD73NbT1Wm[VZ7OLVh][j] = 1;
                    break;
                };
            }
            VZ7OLVh = VZ7OLVh +1;
        };
    }
    cin >> tNfwOEgjUDh;
    memset (WdjeQB0, (193 - 193), sizeof (WdjeQB0));
    {
        int RWZ1SRQ = 1;
        while (RWZ1SRQ < tNfwOEgjUDh) {
            RWZ1SRQ++;
            memset (WdjeQB0, (552 - 552), sizeof (WdjeQB0));
            {
                int VZ7OLVh = (150 - 150);
                while (U5nRB9eWYcX > VZ7OLVh) {
                    for (int j = 0;
                    j < U5nRB9eWYcX; j = j + 1) {
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
                        if (!(1 != ZD73NbT1Wm[VZ7OLVh][j]) && !(0 != WdjeQB0[VZ7OLVh][j])) {
                            utO8iB1 (VZ7OLVh, j + 1);
                            utO8iB1 (VZ7OLVh, j - 1);
                            utO8iB1 (VZ7OLVh +1, j);
                            utO8iB1 (VZ7OLVh -1, j);
                        };
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
                    VZ7OLVh = VZ7OLVh +1;
                };
            };
        };
    }
    {
        int VZ7OLVh = 0;
        while (VZ7OLVh < U5nRB9eWYcX) {
            {
                int j = 0;
                while (j < U5nRB9eWYcX) {
                    if (ZD73NbT1Wm[VZ7OLVh][j] == 1)
                        iKfPh6HAX = iKfPh6HAX + 1;
                    j = j + 1;
                };
            }
            VZ7OLVh++;
        };
    }
    cout << iKfPh6HAX;
    return 0;
}

void  utO8iB1 (int YKRvqk, int LYtWsE3S) {
    if (YKRvqk >= 0 && YKRvqk < U5nRB9eWYcX &&LYtWsE3S >= 0 && LYtWsE3S < U5nRB9eWYcX) {
        if (ZD73NbT1Wm[YKRvqk][LYtWsE3S] == -1 && WdjeQB0[YKRvqk][LYtWsE3S] == 0) {
            ZD73NbT1Wm[YKRvqk][LYtWsE3S] = 1;
            WdjeQB0[YKRvqk][LYtWsE3S] = 1;
        };
    };
}

