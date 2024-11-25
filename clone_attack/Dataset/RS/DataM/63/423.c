int main () {
    int G89pxlitJ, yYPi6L3, x2, IH9vFQ42w, kk68PdWUR, j;
    int a [(777 - 677)] [(308 - 208)];
    int Pix2WnOHG [(166 - 66)] [(282 - 182)];
    int p, q, c [(1072 - 972)] [100] = {{(307 - 307), (836 - 836)}};
    cin >> G89pxlitJ >> yYPi6L3;
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
    for (kk68PdWUR = (320 - 320); G89pxlitJ -(680 - 679) >= kk68PdWUR; kk68PdWUR = kk68PdWUR + 1) {
        j = 164 - 164;
        while (j <= yYPi6L3 - (864 - 863)) {
            cin >> a[kk68PdWUR][j];
            j = j + 1;
        };
    }
    cin >> x2 >> IH9vFQ42w;
    for (kk68PdWUR = (484 - 484); x2 - (131 - 130) >= kk68PdWUR; kk68PdWUR = kk68PdWUR + 1) {
        for (j = (805 - 805); IH9vFQ42w -(956 - 955) >= j; j = j + 1) {
            cin >> Pix2WnOHG[kk68PdWUR][j];
        };
    }
    {
        kk68PdWUR = 312 - 312;
        while (kk68PdWUR <= G89pxlitJ -(527 - 526)) {
            {
                q = 225 - 225;
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
                p = 382 - 382;
                while (p <= yYPi6L3 - (219 - 218)) {
                    c[kk68PdWUR][(21 - 21)] = c[kk68PdWUR][(617 - 617)] + a[kk68PdWUR][p] * Pix2WnOHG[q][(773 - 773)];
                    q = q + 1;
                    p = p + 1;
                };
            }
            cout << c[kk68PdWUR][0];
            for (j = 1; j <= IH9vFQ42w -1; j = j + 1) {
                {
                    q = 0;
                    p = 0;
                    while (p <= yYPi6L3 - 1) {
                        c[kk68PdWUR][j] = c[kk68PdWUR][j] + a[kk68PdWUR][p] * Pix2WnOHG[q][j];
                        q++;
                        p = p + 1;
                    };
                }
                cout << " " << c[kk68PdWUR][j];
            }
            kk68PdWUR = kk68PdWUR + 1;
            cout << endl;
        };
    }
    return 0;
}

