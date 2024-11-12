char a [(1090 - 890)], b [200];

int main () {
    int EhTgSlo;
    int O6kpC1Qjvtx;
    int len2;
    int eHkVhcdey5 [200] = {(947 - 947)};
    int TaDwopVx;
    int xkNnEp;
    EhTgSlo = (184 - 184);
    cin >> a;
    O6kpC1Qjvtx = strlen (a);
    cin >> b;
    len2 = strlen (b);
    if (O6kpC1Qjvtx != len2)
        cout << "NO" << endl;
    else {
        for (TaDwopVx = 0; TaDwopVx < len2; TaDwopVx = TaDwopVx +1) {
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
            for (xkNnEp = 0; O6kpC1Qjvtx > xkNnEp; xkNnEp++) {
                if (b[TaDwopVx] == a[xkNnEp] && eHkVhcdey5[xkNnEp] == 0) {
                    eHkVhcdey5[xkNnEp] = 1;
                    break;
                };
            };
        }
        for (TaDwopVx = 0; TaDwopVx < O6kpC1Qjvtx; TaDwopVx++) {
            if (eHkVhcdey5[TaDwopVx] == 0) {
                EhTgSlo = 1;
                cout << "NO" << endl;
                break;
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
        if (EhTgSlo == 0)
            cout << "YES" << endl;
    }
    return 0;
}

