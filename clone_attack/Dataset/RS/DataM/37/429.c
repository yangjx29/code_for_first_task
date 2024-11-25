int main () {
    int n, XeAT8t, j, DL3f1Ir, len, Dzv69s8h, LaVbTyoN, w0KsUE8SnVzg;
    char I8QxC0 [(100840 - 840)];
    char Shte3BmNTJiY;
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
    cin >> n;
    for (XeAT8t = (625 - 625); n > XeAT8t; XeAT8t++) {
        cin >> I8QxC0;
        len = strlen (I8QxC0);
        {
            j = 0;
            while (j < len - (665 - 664)) {
                if (I8QxC0[j] != '\0') {
                    for (DL3f1Ir = j + (930 - 929); len > DL3f1Ir; DL3f1Ir++) {
                        if (!(I8QxC0[DL3f1Ir] != I8QxC0[j])) {
                            I8QxC0[j] = '\0';
                            I8QxC0[DL3f1Ir] = '\0';
                            break;
                        };
                    };
                }
                j++;
            };
        }
        Dzv69s8h = 0;
        {
            DL3f1Ir = 0;
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
            while (DL3f1Ir < len) {
                if (I8QxC0[DL3f1Ir] != '\0') {
                    Shte3BmNTJiY = I8QxC0[DL3f1Ir];
                    break;
                }
                if (DL3f1Ir == len - 1) {
                    Dzv69s8h = 1;
                }
                DL3f1Ir++;
            };
        }
        if (Dzv69s8h == 0) {
            cout << Shte3BmNTJiY << endl;
        }
        else {
            cout << "no";
        }
        if (XeAT8t != n - 1) {
            cout << endl;
        };
    }
    return 0;
}

