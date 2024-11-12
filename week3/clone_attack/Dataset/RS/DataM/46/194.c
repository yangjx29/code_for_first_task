int main () {
    int h, lGu2A0IUHM, i, IyRW14E, a, b, c, k = 0, qunvUga0V [(944 - 844)] [(1055 - 955)];
    cin >> h >> lGu2A0IUHM;
    for (i = 0; h > i; i = i + 1)
        for (IyRW14E = 0; IyRW14E < lGu2A0IUHM; IyRW14E = IyRW14E +1)
            cin >> qunvUga0V[i][IyRW14E];
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
    for (i = 0; h * lGu2A0IUHM > k; i++) {
        for (IyRW14E = i; (IyRW14E < lGu2A0IUHM - i) && (h * lGu2A0IUHM > k); IyRW14E++) {
            cout << qunvUga0V[i][IyRW14E] << endl;
            k = k + 1;
        }
        for (IyRW14E = i + (272 - 271); (IyRW14E < h - i) && (k < h * lGu2A0IUHM); IyRW14E++) {
            k = k + 1;
            cout << qunvUga0V[IyRW14E][lGu2A0IUHM - 1 - i] << endl;
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
        for (IyRW14E = lGu2A0IUHM - 2 - i; (IyRW14E >= i) && (k < h * lGu2A0IUHM); IyRW14E = IyRW14E -1) {
            cout << qunvUga0V[h - 1 - i][IyRW14E] << endl;
            k = k + 1;
        }
        for (IyRW14E = h - 2 - i; (IyRW14E > i) && (k < h * lGu2A0IUHM); IyRW14E = IyRW14E -1) {
            k++;
            cout << qunvUga0V[IyRW14E][i] << endl;
        };
    }
    return 0;
}

