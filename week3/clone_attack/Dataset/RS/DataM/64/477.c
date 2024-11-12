struct   {
    int xGWfdlF;
    int XSYfqHBg;
    int yVqJ9HB;
}
GmaOBFX [10];
struct   {
    int f1;
    int UfRrhouY5UiT;
    double  rVgQG7nUP;
}
mMV9J7 [55], EqyhYg;

int main () {
    int ofNq4mIS;
    int yGbEidl6Nmg;
    int oucdbts8Hqk;
    int eN2kfl8eIr;
    int nIbmEfUvPTYD;
    int lQhNG9YLHVX;
    int J6RFQmlf;
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
    ofNq4mIS = (288 - 288);
    cin >> yGbEidl6Nmg;
    {
        oucdbts8Hqk = 0;
        while (oucdbts8Hqk < yGbEidl6Nmg) {
            cin >> GmaOBFX[oucdbts8Hqk].xGWfdlF >> GmaOBFX[oucdbts8Hqk].XSYfqHBg >> GmaOBFX[oucdbts8Hqk].yVqJ9HB;
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
            oucdbts8Hqk++;
        };
    }
    for (oucdbts8Hqk = 0; oucdbts8Hqk < yGbEidl6Nmg - 1; oucdbts8Hqk = oucdbts8Hqk + 1) {
        eN2kfl8eIr = oucdbts8Hqk + 1;
        while (eN2kfl8eIr < yGbEidl6Nmg) {
            nIbmEfUvPTYD = (GmaOBFX[oucdbts8Hqk].xGWfdlF - GmaOBFX[eN2kfl8eIr].xGWfdlF) * (GmaOBFX[oucdbts8Hqk].xGWfdlF - GmaOBFX[eN2kfl8eIr].xGWfdlF);
            lQhNG9YLHVX = (GmaOBFX[oucdbts8Hqk].XSYfqHBg - GmaOBFX[eN2kfl8eIr].XSYfqHBg) * (GmaOBFX[oucdbts8Hqk].XSYfqHBg - GmaOBFX[eN2kfl8eIr].XSYfqHBg);
            J6RFQmlf = (GmaOBFX[oucdbts8Hqk].yVqJ9HB - GmaOBFX[eN2kfl8eIr].yVqJ9HB) * (GmaOBFX[oucdbts8Hqk].yVqJ9HB - GmaOBFX[eN2kfl8eIr].yVqJ9HB);
            mMV9J7[ofNq4mIS].f1 = oucdbts8Hqk;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            mMV9J7[ofNq4mIS].UfRrhouY5UiT = eN2kfl8eIr;
            eN2kfl8eIr++;
            mMV9J7[ofNq4mIS++].rVgQG7nUP = sqrt (nIbmEfUvPTYD + lQhNG9YLHVX + J6RFQmlf);
        };
    }
    {
        oucdbts8Hqk = 0;
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
        while (oucdbts8Hqk < ofNq4mIS) {
            {
                eN2kfl8eIr = ofNq4mIS - 1;
                while (eN2kfl8eIr > oucdbts8Hqk) {
                    if (mMV9J7[eN2kfl8eIr].rVgQG7nUP > mMV9J7[eN2kfl8eIr - 1].rVgQG7nUP) {
                        EqyhYg = mMV9J7[eN2kfl8eIr - 1];
                        mMV9J7[eN2kfl8eIr - 1] = mMV9J7[eN2kfl8eIr];
                        mMV9J7[eN2kfl8eIr] = EqyhYg;
                    }
                    eN2kfl8eIr = eN2kfl8eIr - 1;
                };
            }
            oucdbts8Hqk++;
        };
    }
    for (oucdbts8Hqk = 0; oucdbts8Hqk < ofNq4mIS; oucdbts8Hqk++) {
        cout << '(' << GmaOBFX[mMV9J7[oucdbts8Hqk].f1].xGWfdlF << ',' << GmaOBFX[mMV9J7[oucdbts8Hqk].f1].XSYfqHBg << ',' << GmaOBFX[mMV9J7[oucdbts8Hqk].f1].yVqJ9HB << ")-(" << GmaOBFX[mMV9J7[oucdbts8Hqk].UfRrhouY5UiT].xGWfdlF << ',' << GmaOBFX[mMV9J7[oucdbts8Hqk].UfRrhouY5UiT].XSYfqHBg << ',' << GmaOBFX[mMV9J7[oucdbts8Hqk].UfRrhouY5UiT].yVqJ9HB << ")=";
        cout << fixed << setprecision (2) << mMV9J7[oucdbts8Hqk].rVgQG7nUP << endl;
    }
    return 0;
}

