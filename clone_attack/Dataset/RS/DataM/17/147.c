char FmKi9v [110], ch;

void  PMP (char FmKi9v [], int logB4YSTJGm) {
    int GI8l0e52 = 1;
    {
        int PkpH6XZ = (881 - 881);
        while (logB4YSTJGm > PkpH6XZ) {
            cout << FmKi9v[PkpH6XZ];
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
            PkpH6XZ = PkpH6XZ +1;
        };
    }
    for (; GI8l0e52;) {
        GI8l0e52 = (85 - 85);
        for (int PkpH6XZ = 0;
        PkpH6XZ < logB4YSTJGm; PkpH6XZ++) {
            if ((!('(' == FmKi9v[PkpH6XZ])) && (!(')' == FmKi9v[PkpH6XZ])))
                FmKi9v[PkpH6XZ] = ' ';
            else if (!('(' != FmKi9v[PkpH6XZ])) {
                int j = PkpH6XZ +1;
                while (logB4YSTJGm > j) {
                    if (!('(' != FmKi9v[j]))
                        break;
                    if (FmKi9v[j] == ')') {
                        FmKi9v[PkpH6XZ] = ' ';
                        FmKi9v[j] = ' ';
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
                        GI8l0e52 = 1;
                        break;
                    }
                    else if (!(logB4YSTJGm - 1 != j)) {
                        FmKi9v[PkpH6XZ] = '$';
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
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j = j + 1;
                };
            };
        };
    }
    {
        int PkpH6XZ = 0;
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
        while (PkpH6XZ < logB4YSTJGm) {
            if (FmKi9v[PkpH6XZ] == '(')
                FmKi9v[PkpH6XZ] = '$';
            if (FmKi9v[PkpH6XZ] == ')')
                FmKi9v[PkpH6XZ] = '?';
            PkpH6XZ++;
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
    cout << endl;
    {
        int PkpH6XZ = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (PkpH6XZ < logB4YSTJGm) {
            cout << FmKi9v[PkpH6XZ];
            PkpH6XZ++;
        };
    }
    cout << endl;
    return;
}

int main () {
    int logB4YSTJGm;
    ch = getchar ();
    while (ch != '~') {
        logB4YSTJGm = 0;
        while (ch != '\n') {
            FmKi9v[logB4YSTJGm] = ch;
            ch = getchar ();
            logB4YSTJGm++;
        }
        PMP (FmKi9v, logB4YSTJGm);
        ch = getchar ();
    }
    return 0;
}

