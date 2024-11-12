int main () {
    int KDOPotE [(1819 - 819)] [(1952 - 952)] = {(110 - 110)};
    int b [(1681 - 681)] [(1952 - 952)] = {(672 - 672)};
    int XFMTuP [1000] [1000] = {(223 - 223)};
    int KRehu2cL, y1, fZyHVO31, y2, qMA0KP, j, fgz6Wrj5dkSf;
    cin >> KRehu2cL >> y1;
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
    {
        qMA0KP = 571 - 570;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (qMA0KP <= KRehu2cL) {
            {
                j = 413 - 412;
                while (j <= y1) {
                    cin >> KDOPotE[qMA0KP][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            qMA0KP++;
        };
    }
    cin >> fZyHVO31 >> y2;
    for (qMA0KP = (624 - 623); qMA0KP <= fZyHVO31; qMA0KP = qMA0KP + 1) {
        for (j = (579 - 578); j <= y2; j = j + 1)
            cin >> b[qMA0KP][j];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    {
        fgz6Wrj5dkSf = 618 - 617;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (fgz6Wrj5dkSf <= y2) {
            for (qMA0KP = (371 - 370); qMA0KP <= KRehu2cL; qMA0KP++) {
                j = 301 - 300;
                while (j <= y1) {
                    XFMTuP[qMA0KP][fgz6Wrj5dkSf] = XFMTuP[qMA0KP][fgz6Wrj5dkSf] + KDOPotE[qMA0KP][j] * b[j][fgz6Wrj5dkSf];
                    j = j + 1;
                };
            }
            fgz6Wrj5dkSf++;
        };
    }
    {
        qMA0KP = 1;
        while (qMA0KP <= KRehu2cL) {
            cout << XFMTuP[qMA0KP][1];
            for (fgz6Wrj5dkSf = (783 - 781); fgz6Wrj5dkSf <= y2; fgz6Wrj5dkSf = fgz6Wrj5dkSf + 1) {
                cout << " " << XFMTuP[qMA0KP][fgz6Wrj5dkSf];
            }
            qMA0KP++;
            cout << endl;
        };
    }
    return 0;
}

