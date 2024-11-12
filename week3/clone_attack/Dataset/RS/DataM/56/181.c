int LLX6bCD (int XkEQ0i6vM);

int main () {
    int yJRpXPn;
    cin >> yJRpXPn;
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
    cout << LLX6bCD (yJRpXPn) << endl;
    return 0;
}

int LLX6bCD (int XkEQ0i6vM) {
    int qCAmhq, t;
    int yJRpXPn, Ytr08GP;
    int XKpswklNdAt;
    int Cm1ADRW;
    int PKdM3rX;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    t = (int) fabs (XkEQ0i6vM);
    XKpswklNdAt = (int) log10 (t) + 1;
    if (XkEQ0i6vM < 0) {
        qCAmhq = -XkEQ0i6vM;
        PKdM3rX = -1;
    }
    else {
        PKdM3rX = 1;
        qCAmhq = XkEQ0i6vM;
    }
    {
        Cm1ADRW = 1;
        while (Cm1ADRW < XKpswklNdAt / 2 + 1) {
            yJRpXPn = (t % (int) pow (10, Cm1ADRW)) / (int) pow (10, Cm1ADRW -1);
            Ytr08GP = t / ((int) pow (10, XKpswklNdAt -Cm1ADRW)) - 10 * (t / ((int) pow (10, XKpswklNdAt -Cm1ADRW+1)));
            qCAmhq -= yJRpXPn * (int) pow (10, Cm1ADRW -1);
            qCAmhq -= Ytr08GP *(int)pow (10, XKpswklNdAt -Cm1ADRW);
            qCAmhq += yJRpXPn * (int) pow (10, XKpswklNdAt -Cm1ADRW);
            Cm1ADRW = Cm1ADRW +1;
            qCAmhq += Ytr08GP *(int)pow (10, Cm1ADRW -1);
        };
    }
    return PKdM3rX *qCAmhq;
}

