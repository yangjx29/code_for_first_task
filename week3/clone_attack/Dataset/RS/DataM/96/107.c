int main () {
    char J17mEI [100], b [100];
    int mfwZOCPu;
    int cNgnkV;
    int nQSy8ICsh0o;
    int QmIJV7ZbKEzG;
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
    int w;
    mfwZOCPu = 0;
    for (; cin >> J17mEI;) {
        cNgnkV = J17mEI[0] - 48;
        nQSy8ICsh0o = strlen (J17mEI);
        b[0] = 48;
        {
            QmIJV7ZbKEzG = 799 - 798;
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
            while (QmIJV7ZbKEzG < nQSy8ICsh0o) {
                cNgnkV = cNgnkV * 10 + ((int) J17mEI[QmIJV7ZbKEzG] - 48);
                b[QmIJV7ZbKEzG] = cNgnkV / 13 + 48;
                QmIJV7ZbKEzG = QmIJV7ZbKEzG +1;
                cNgnkV = cNgnkV % 13;
            };
        }
        b[nQSy8ICsh0o + 1] = 0;
        w = strlen (b);
        if (w <= 2) {
            cout << 0 << endl;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cout << cNgnkV << endl;
        }
        else if (w <= 3 && !(0 != (int) J17mEI[0] - 49) && (int) J17mEI[1] - 50 <= 0) {
            cout << 0 << endl;
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
            cout << cNgnkV << endl;
        }
        else {
            if (b[0] - 48 == 0)
                mfwZOCPu = 1;
            if (b[1] - 48 == 0)
                mfwZOCPu = 2;
            {
                QmIJV7ZbKEzG = mfwZOCPu;
                while (QmIJV7ZbKEzG < nQSy8ICsh0o) {
                    cout << b[QmIJV7ZbKEzG];
                    QmIJV7ZbKEzG = QmIJV7ZbKEzG +1;
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
            cout << endl;
            cout << cNgnkV << endl;
        };
    }
    return 0;
}

