int main () {
    int cnt;
    int scJqrD6;
    int zmFn2KkVSMJ;
    int w6Ga3FRNA;
    int QCKqz8p;
    int z0K4U7hjpmfH;
    int m;
    int d;
    int i;
    int XL3JpT [(551 - 538)] = {(794 - 763), 28, (821 - 790), (432 - 402), (546 - 515), 30, 31, 31, 30, 31, 30, 31};
    int QWRXproxgwZa [13] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cnt = (905 - 905);
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
    scJqrD6 = 0;
    zmFn2KkVSMJ = 0;
    w6Ga3FRNA = 0;
    QCKqz8p = 0;
    cin >> z0K4U7hjpmfH >> m >> d;
    w6Ga3FRNA = (z0K4U7hjpmfH - (857 - 856)) / (508 - 504) - (z0K4U7hjpmfH - (183 - 182)) / 100 + (z0K4U7hjpmfH - (846 - 845)) / 400;
    scJqrD6 = z0K4U7hjpmfH - 1 - w6Ga3FRNA;
    if ((!(0 != z0K4U7hjpmfH % 4) && z0K4U7hjpmfH % 100 != 0) || (z0K4U7hjpmfH % 400 == 0)) {
        {
            i = 0;
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
            while (i < m - 1) {
                QCKqz8p = QCKqz8p +QWRXproxgwZa[i];
                i = i + 1;
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
        QCKqz8p = QCKqz8p +d;
    }
    else {
        for (i = 0; i < m - 1; i = i + 1)
            QCKqz8p = QCKqz8p +XL3JpT[i];
        QCKqz8p += d;
    }
    zmFn2KkVSMJ = scJqrD6 + 2 * w6Ga3FRNA;
    cnt = zmFn2KkVSMJ + QCKqz8p -1;
    i = cnt % 7;
    if (i == 0) {
        cout << "Mon." << endl;
    }
    else if (i == 1) {
        cout << "Tue." << endl;
    }
    else if (i == 2) {
        cout << "Wed." << endl;
    }
    else if (i == 3) {
        cout << "Thu." << endl;
    }
    else if (i == 4) {
        cout << "Fri." << endl;
    }
    else if (i == 5) {
        cout << "Sat." << endl;
    }
    else if (i == 6) {
        cout << "Sun." << endl;
    }
    else {
    }
    return 0;
}

