int main () {
    char qFmCxM0 [120];
    int n;
    char str1 [(836 - 716)];
    cin >> n;
    {
        int Sfbyps8q;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        Sfbyps8q = (38 - 37);
        while (Sfbyps8q <= n) {
            Sfbyps8q = Sfbyps8q +1;
            cin >> str1;
            memset (qFmCxM0, '\0', sizeof (qFmCxM0));
            strcpy (qFmCxM0, str1);
            for (int BahZPFR0 = (590 - 589);
            BahZPFR0 < strlen (qFmCxM0); BahZPFR0 = BahZPFR0 +1) {
                int RIABJ1fD = (127 - 127);
                while (strlen (qFmCxM0) - BahZPFR0 > RIABJ1fD) {
                    int k = RIABJ1fD +BahZPFR0;
                    if (qFmCxM0[RIABJ1fD] == '(' && qFmCxM0[k] == ')') {
                        qFmCxM0[RIABJ1fD] = '0';
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
                        qFmCxM0[k] = '0';
                    }
                    RIABJ1fD++;
                };
            }
            {
                int O2QZGzspP = 0;
                while (qFmCxM0[O2QZGzspP] != '\0') {
                    if (qFmCxM0[O2QZGzspP] == '(')
                        qFmCxM0[O2QZGzspP] = '$';
                    else {
                        if (qFmCxM0[O2QZGzspP] == ')')
                            qFmCxM0[O2QZGzspP] = '?';
                        else
                            qFmCxM0[O2QZGzspP] = ' ';
                    }
                    O2QZGzspP = O2QZGzspP +1;
                };
            }
            cout << str1 << endl;
            cout << qFmCxM0 << endl;
        };
    }
    return 0;
}

