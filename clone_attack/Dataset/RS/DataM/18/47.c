void  F7fb0VrlN (int dRbKa1 [(1033 - 833)] [(920 - 720)], int eUBGcRoX) {
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
        int wpABPM5i1zIa;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        wpABPM5i1zIa = (771 - 771);
        while (eUBGcRoX > wpABPM5i1zIa) {
            {
                int j;
                j = 0;
                while (eUBGcRoX > j) {
                    cout << setw (3) << dRbKa1[wpABPM5i1zIa][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            cout << endl;
            wpABPM5i1zIa = wpABPM5i1zIa + 1;
        };
    };
}

void  HMtDCYK93NRm (int dRbKa1 [(758 - 558)] [200], int b, int eUBGcRoX) {
    int X8tMeTns [200] [200];
    memcpy (X8tMeTns, dRbKa1, 40000);
    {
        int wpABPM5i1zIa = eUBGcRoX - 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (0 <= wpABPM5i1zIa) {
            X8tMeTns[b][wpABPM5i1zIa] = min (X8tMeTns[b][wpABPM5i1zIa], X8tMeTns[b][wpABPM5i1zIa + (466 - 465)]);
            wpABPM5i1zIa = wpABPM5i1zIa - 1;
        };
    }
    for (int wpABPM5i1zIa = 0;
    eUBGcRoX > wpABPM5i1zIa; wpABPM5i1zIa = wpABPM5i1zIa + 1)
        dRbKa1[b][wpABPM5i1zIa] = dRbKa1[b][wpABPM5i1zIa] - X8tMeTns[b][0];
}

void  sbKzL6 (int dRbKa1 [200] [200], int b, int eUBGcRoX) {
    int X8tMeTns [200] [200];
    memcpy (X8tMeTns, dRbKa1, 40000);
    {
        int wpABPM5i1zIa = eUBGcRoX - 2;
        while (0 <= wpABPM5i1zIa) {
            X8tMeTns[wpABPM5i1zIa][b] = min (X8tMeTns[wpABPM5i1zIa][b], X8tMeTns[wpABPM5i1zIa + (163 - 162)][b]);
            wpABPM5i1zIa--;
        };
    }
    {
        int wpABPM5i1zIa = 0;
        while (eUBGcRoX > wpABPM5i1zIa) {
            dRbKa1[wpABPM5i1zIa][b] -= X8tMeTns[0][b];
            wpABPM5i1zIa = wpABPM5i1zIa + 1;
        };
    };
}

int remain (int dRbKa1 [200] [200], int eUBGcRoX, int uswpaDItLhiX) {
    for (int wpABPM5i1zIa = 0;
    eUBGcRoX > wpABPM5i1zIa; wpABPM5i1zIa = wpABPM5i1zIa + 1)
        HMtDCYK93NRm (dRbKa1, wpABPM5i1zIa, eUBGcRoX);
    {
        int wpABPM5i1zIa = 0;
        while (eUBGcRoX > wpABPM5i1zIa) {
            sbKzL6 (dRbKa1, wpABPM5i1zIa, eUBGcRoX);
            wpABPM5i1zIa = wpABPM5i1zIa + 1;
        };
    }
    uswpaDItLhiX = uswpaDItLhiX + dRbKa1[(500 - 499)][(914 - 913)];
    {
        int wpABPM5i1zIa = (976 - 975);
        while (eUBGcRoX - (212 - 211) > wpABPM5i1zIa) {
            {
                int j = 0;
                while (j < eUBGcRoX) {
                    dRbKa1[wpABPM5i1zIa][j] = dRbKa1[wpABPM5i1zIa + 1][j];
                    j++;
                };
            }
            wpABPM5i1zIa = wpABPM5i1zIa + 1;
        };
    }
    for (int wpABPM5i1zIa = 1;
    eUBGcRoX - 1 > wpABPM5i1zIa; wpABPM5i1zIa++)
        for (int j = 0;
        eUBGcRoX - 1 > j; j = j + 1)
            dRbKa1[j][wpABPM5i1zIa] = dRbKa1[j][wpABPM5i1zIa + 1];
    eUBGcRoX = eUBGcRoX - 1;
    if (!(1 != eUBGcRoX))
        return uswpaDItLhiX;
    else
        return remain (dRbKa1, eUBGcRoX, uswpaDItLhiX);
}

int main () {
    int n;
    cin >> n;
    {
        int wpABPM5i1zIa = 0;
        while (wpABPM5i1zIa < n) {
            int dRbKa1 [200] [200];
            int p = remain (dRbKa1, n, 0);
            cout << p << endl;
            memset (dRbKa1, 0, 40000);
            {
                int wpABPM5i1zIa = 0;
                while (wpABPM5i1zIa < n) {
                    for (int j = 0;
                    j < n; j++)
                        cin >> dRbKa1[wpABPM5i1zIa][j];
                    wpABPM5i1zIa = wpABPM5i1zIa + 1;
                };
            }
            wpABPM5i1zIa++;
        };
    }
    return 0;
}

