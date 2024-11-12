int main () {
    int zIkLn08pZNRQ;
    int Vf9lP8yxTKB;
    int nXupW8Co;
    int x7GeT6hfw3;
    int k;
    int fgrAa6142XFU;
    int qQhR3cNnPwp;
    nXupW8Co = (494 - 494);
    x7GeT6hfw3 = (769 - 769);
    k = (201 - 201);
    int HHAP2d [fgrAa6142XFU] [qQhR3cNnPwp];
    int ANZObVpU [zIkLn08pZNRQ] [Vf9lP8yxTKB];
    int xmWcyf61 [fgrAa6142XFU] [Vf9lP8yxTKB];
    cin >> fgrAa6142XFU >> qQhR3cNnPwp;
    {
        int nXupW8Co = (122 - 122);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (fgrAa6142XFU > nXupW8Co) {
            {
                int x7GeT6hfw3 = 0;
                while (x7GeT6hfw3 < qQhR3cNnPwp) {
                    cin >> HHAP2d[nXupW8Co][x7GeT6hfw3];
                    x7GeT6hfw3 = x7GeT6hfw3 + 1;
                };
            }
            nXupW8Co = nXupW8Co + 1;
        };
    }
    cin >> zIkLn08pZNRQ >> Vf9lP8yxTKB;
    {
        int nXupW8Co = 0;
        while (zIkLn08pZNRQ > nXupW8Co) {
            {
                int x7GeT6hfw3 = 0;
                while (x7GeT6hfw3 < Vf9lP8yxTKB) {
                    cin >> ANZObVpU[nXupW8Co][x7GeT6hfw3];
                    x7GeT6hfw3 = x7GeT6hfw3 + 1;
                };
            }
            nXupW8Co = nXupW8Co + 1;
        };
    }
    for (int nXupW8Co = 0;
    nXupW8Co < fgrAa6142XFU; nXupW8Co = nXupW8Co + 1) {
        int x7GeT6hfw3 = 0;
        while (x7GeT6hfw3 < Vf9lP8yxTKB) {
            xmWcyf61[nXupW8Co][x7GeT6hfw3] = 0;
            {
                int k = 0;
                while (qQhR3cNnPwp > k) {
                    xmWcyf61[nXupW8Co][x7GeT6hfw3] = xmWcyf61[nXupW8Co][x7GeT6hfw3] + HHAP2d[nXupW8Co][k] * ANZObVpU[k][x7GeT6hfw3];
                    k = k + 1;
                };
            }
            cout << xmWcyf61[nXupW8Co][x7GeT6hfw3];
            if (Vf9lP8yxTKB -1 > x7GeT6hfw3)
                cout << " ";
            else
                cout << endl;
            x7GeT6hfw3++;
        };
    }
    return 0;
}

