int main () {
    char s [50] = {'0'};
    int EdqslecB;
    int uMq7o26TQm;
    int HPLxiJIwX7;
    int eMygiC;
    int t;
    int Pb7z20;
    eMygiC = 1;
    cin >> EdqslecB;
    s[0] = '1';
    {
        uMq7o26TQm = 1;
        while (uMq7o26TQm <= EdqslecB) {
            uMq7o26TQm++;
            Pb7z20 = 0;
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
            for (HPLxiJIwX7 = 0; eMygiC > HPLxiJIwX7; HPLxiJIwX7++) {
                t = Pb7z20 +2 * (s[HPLxiJIwX7] - '0');
                if (t < 10) {
                    Pb7z20 = 0;
                    s[HPLxiJIwX7] = '0' + t;
                }
                else {
                    Pb7z20 = 1;
                    s[HPLxiJIwX7] = t - 10 + '0';
                };
            }
            if (Pb7z20 == 1) {
                s[eMygiC] = '1';
                eMygiC++;
            };
        };
    }
    {
        uMq7o26TQm = eMygiC - 1;
        while (uMq7o26TQm >= 0) {
            cout << s[uMq7o26TQm];
            uMq7o26TQm--;
        };
    }
    cout << endl;
    return 0;
}

