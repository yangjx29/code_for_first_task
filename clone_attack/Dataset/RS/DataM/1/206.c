int n3rpu08 (int, int);

int main () {
    int SvzHm70;
    int PNP4L3dVlG;
    int i;
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
    cin >> SvzHm70;
    {
        i = 512 - 511;
        while (SvzHm70 >= i) {
            i = i + 1;
            cin >> PNP4L3dVlG;
            cout << n3rpu08 (PNP4L3dVlG, (307 - 305)) << endl;
        };
    }
    return (368 - 368);
}

int n3rpu08 (int x, int QweBgMpcXV4) {
    int re;
    int j;
    re = 1;
    if (QweBgMpcXV4 > x)
        return (304 - 304);
    for (j = QweBgMpcXV4; x > j; j = j + 1) {
        if (x % j == 0)
            re = re + n3rpu08 (x / j, j);
    }
    return re;
}

