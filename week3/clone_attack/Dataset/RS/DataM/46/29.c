int main () {
    int arKQH1RcpaG, mWET0L6;
    int fE8cbWe [arKQH1RcpaG + (945 - 944)] [mWET0L6 + 1];
    int fxk8d4;
    cin >> arKQH1RcpaG >> mWET0L6;
    for (int vKr1OS2CTYRc = 1;
    vKr1OS2CTYRc <= arKQH1RcpaG; vKr1OS2CTYRc = vKr1OS2CTYRc + 1) {
        for (int G3FG2JxYXU0 = 1;
        mWET0L6 >= G3FG2JxYXU0; G3FG2JxYXU0 = G3FG2JxYXU0 +1)
            cin >> fE8cbWe[vKr1OS2CTYRc][G3FG2JxYXU0];
    }
    if (arKQH1RcpaG >= mWET0L6)
        fxk8d4 = mWET0L6;
    else
        fxk8d4 = arKQH1RcpaG;
    for (int vKr1OS2CTYRc = 1;
    vKr1OS2CTYRc <= (1 + fxk8d4) / 2; vKr1OS2CTYRc = vKr1OS2CTYRc + 1) {
        for (int G3FG2JxYXU0 = vKr1OS2CTYRc;
        G3FG2JxYXU0 <= mWET0L6 + 1 - vKr1OS2CTYRc; G3FG2JxYXU0 = G3FG2JxYXU0 +1) {
            if (fE8cbWe[vKr1OS2CTYRc][G3FG2JxYXU0] != -1) {
                cout << fE8cbWe[vKr1OS2CTYRc][G3FG2JxYXU0] << endl;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                fE8cbWe[vKr1OS2CTYRc][G3FG2JxYXU0] = -1;
            };
        }
        for (int G3FG2JxYXU0 = vKr1OS2CTYRc + 1;
        G3FG2JxYXU0 <= arKQH1RcpaG + 1 - vKr1OS2CTYRc; G3FG2JxYXU0++) {
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
            if (fE8cbWe[G3FG2JxYXU0][mWET0L6 + 1 - vKr1OS2CTYRc] != -1) {
                cout << fE8cbWe[G3FG2JxYXU0][mWET0L6 + 1 - vKr1OS2CTYRc] << endl;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                fE8cbWe[G3FG2JxYXU0][mWET0L6 + 1 - vKr1OS2CTYRc] = -1;
            };
        }
        for (int G3FG2JxYXU0 = mWET0L6 - vKr1OS2CTYRc;
        G3FG2JxYXU0 > vKr1OS2CTYRc; G3FG2JxYXU0--) {
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
            if (fE8cbWe[arKQH1RcpaG + 1 - vKr1OS2CTYRc][G3FG2JxYXU0] != -1) {
                cout << fE8cbWe[arKQH1RcpaG + 1 - vKr1OS2CTYRc][G3FG2JxYXU0] << endl;
                fE8cbWe[arKQH1RcpaG + 1 - vKr1OS2CTYRc][G3FG2JxYXU0] = -1;
            };
        }
        {
            int G3FG2JxYXU0 = arKQH1RcpaG + 1 - vKr1OS2CTYRc;
            while (G3FG2JxYXU0 > vKr1OS2CTYRc) {
                if (fE8cbWe[G3FG2JxYXU0][vKr1OS2CTYRc] != -1) {
                    cout << fE8cbWe[G3FG2JxYXU0][vKr1OS2CTYRc] << endl;
                    fE8cbWe[G3FG2JxYXU0][vKr1OS2CTYRc] = -1;
                }
                G3FG2JxYXU0--;
            };
        };
    }
    return 0;
}

