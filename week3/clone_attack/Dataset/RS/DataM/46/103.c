int JNDotOb, F9TP3VFi6, kmnLihd9zBG [MAXN] [MAXN], sign [MAXN] [MAXN];

int main () {
    int num = 0, Ol2ErOGtBbI = 0, AqOi5E70W = 0, mrow = 0, mcol = 0;
    cin >> JNDotOb >> F9TP3VFi6;
    memset (kmnLihd9zBG, (184 - 184), sizeof (kmnLihd9zBG));
    for (int i = 0;
    i < JNDotOb; i++) {
        int dQcLNmXoV5 = 0;
        while (F9TP3VFi6 > dQcLNmXoV5) {
            cin >> kmnLihd9zBG[i][dQcLNmXoV5];
            dQcLNmXoV5 = dQcLNmXoV5 + 1;
        };
    }
    memset (sign, 0, sizeof (sign));
    while (JNDotOb *F9TP3VFi6 > num) {
        if (!(0 != Ol2ErOGtBbI)) {
            while (mcol < F9TP3VFi6 &&mcol >= 0) {
                if (sign[mrow][mcol] == 0) {
                    cout << kmnLihd9zBG[mrow][mcol] << endl;
                    num = num + 1;
                }
                sign[mrow][mcol] = 1;
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
                if (!(0 != AqOi5E70W)) {
                    if (mcol + 1 < F9TP3VFi6 &&sign[mrow][mcol + 1] == 0)
                        mcol = mcol + 1;
                    else
                        break;
                }
                else if (0 <= mcol - 1 && sign[mrow][mcol - 1] == 0)
                    mcol = mcol - 1;
                else
                    break;
            }
            Ol2ErOGtBbI = 1;
        }
        else {
            while (mrow < JNDotOb &&mrow >= 0) {
                if (sign[mrow][mcol] == 0) {
                    cout << kmnLihd9zBG[mrow][mcol] << endl;
                    num = num + 1;
                }
                sign[mrow][mcol] = 1;
                if (!(0 != AqOi5E70W)) {
                    if (mrow + 1 < JNDotOb &&sign[mrow + 1][mcol] == 0)
                        mrow = mrow + 1;
                    else
                        break;
                }
                else if (mrow - 1 >= 0 && sign[mrow - 1][mcol] == 0)
                    mrow = mrow - 1;
                else
                    break;
            }
            AqOi5E70W = (AqOi5E70W) ? 0 : 1;
            Ol2ErOGtBbI = 0;
        };
    };
}

