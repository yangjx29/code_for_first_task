int main () {
    int QhiKAn = (558 - 558), lzisMfRagoC = (763 - 763);
    int YZRHzD7ghNk;
    float Y4FCIb5L7pX [(728 - 628)];
    float gyR4o7 [100];
    cin >> YZRHzD7ghNk;
    {
        int nPbRJq;
        nPbRJq = (600 - 599);
        while (YZRHzD7ghNk >= nPbRJq) {
            char nEr8so0 [10];
            float gaS5xId;
            cin >> nEr8so0 >> gaS5xId;
            if (!('m' != nEr8so0[(23 - 23)])) {
                Y4FCIb5L7pX[QhiKAn] = gaS5xId;
                QhiKAn = QhiKAn +1;
            }
            else {
                gyR4o7[lzisMfRagoC] = gaS5xId;
                lzisMfRagoC = lzisMfRagoC + 1;
            }
            nPbRJq = nPbRJq + 1;
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
    {
        int nPbRJq;
        nPbRJq = 0;
        while (QhiKAn > nPbRJq) {
            {
                int cXvs5d8 = nPbRJq + 1;
                while (QhiKAn > cXvs5d8) {
                    if (Y4FCIb5L7pX[cXvs5d8] < Y4FCIb5L7pX[nPbRJq]) {
                        float NwrDGlSUYcf = Y4FCIb5L7pX[nPbRJq];
                        Y4FCIb5L7pX[nPbRJq] = Y4FCIb5L7pX[cXvs5d8];
                        Y4FCIb5L7pX[cXvs5d8] = NwrDGlSUYcf;
                    }
                    cXvs5d8++;
                };
            }
            nPbRJq++;
        };
    }
    {
        int nPbRJq = 0;
        while (nPbRJq < lzisMfRagoC) {
            for (int cXvs5d8 = nPbRJq + 1;
            lzisMfRagoC > cXvs5d8; cXvs5d8++)
                if (gyR4o7[nPbRJq] < gyR4o7[cXvs5d8]) {
                    float NwrDGlSUYcf = gyR4o7[nPbRJq];
                    gyR4o7[nPbRJq] = gyR4o7[cXvs5d8];
                    gyR4o7[cXvs5d8] = NwrDGlSUYcf;
                }
            nPbRJq++;
        };
    }
    cout << fixed << setprecision (2);
    cout << Y4FCIb5L7pX[0];
    {
        int nPbRJq = 1;
        while (nPbRJq < QhiKAn) {
            cout << ' ' << Y4FCIb5L7pX[nPbRJq];
            nPbRJq++;
        };
    }
    {
        int nPbRJq = 0;
        while (nPbRJq < lzisMfRagoC) {
            cout << ' ' << gyR4o7[nPbRJq];
            nPbRJq++;
        };
    }
    return 0;
}

