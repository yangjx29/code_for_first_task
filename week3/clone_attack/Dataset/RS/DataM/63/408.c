int main () {
    int x1;
    int y1;
    int U2JWrxm1FiA;
    int EDVvau;
    int pXFgnYRTk [(829 - 728)] [(173 - 72)];
    int tEPgw5so [(296 - 195)] [(756 - 655)];
    int c [101] [101];
    int xqfK1BZV2t;
    int Bjqaf0D3;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    memset (c, (596 - 596), sizeof (c));
    cin >> x1 >> y1;
    {
        xqfK1BZV2t = 225 - 225;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x1 > xqfK1BZV2t) {
            {
                Bjqaf0D3 = 253 - 253;
                while (y1 > Bjqaf0D3) {
                    cin >> pXFgnYRTk[xqfK1BZV2t][Bjqaf0D3];
                    Bjqaf0D3 = Bjqaf0D3 +1;
                };
            }
            xqfK1BZV2t = xqfK1BZV2t + 1;
        };
    }
    cin >> U2JWrxm1FiA >> EDVvau;
    for (xqfK1BZV2t = (727 - 727); U2JWrxm1FiA > xqfK1BZV2t; xqfK1BZV2t = xqfK1BZV2t + 1)
        for (Bjqaf0D3 = (845 - 845); EDVvau > Bjqaf0D3; Bjqaf0D3++)
            cin >> tEPgw5so[xqfK1BZV2t][Bjqaf0D3];
    {
        xqfK1BZV2t = 722 - 722;
        while (x1 > xqfK1BZV2t) {
            {
                Bjqaf0D3 = 0;
                while (EDVvau > Bjqaf0D3) {
                    {
                        int l6mW8jU4YrL = 0;
                        while (y1 > l6mW8jU4YrL) {
                            c[xqfK1BZV2t][Bjqaf0D3] = c[xqfK1BZV2t][Bjqaf0D3] + pXFgnYRTk[xqfK1BZV2t][l6mW8jU4YrL] * tEPgw5so[l6mW8jU4YrL][Bjqaf0D3];
                            l6mW8jU4YrL = l6mW8jU4YrL + 1;
                        };
                    }
                    Bjqaf0D3++;
                };
            }
            xqfK1BZV2t++;
        };
    }
    for (xqfK1BZV2t = 0; xqfK1BZV2t < x1; xqfK1BZV2t++) {
        cout << c[xqfK1BZV2t][0];
        {
            Bjqaf0D3 = 243 - 242;
            while (EDVvau > Bjqaf0D3) {
                cout << " " << c[xqfK1BZV2t][Bjqaf0D3];
                Bjqaf0D3++;
            };
        }
        cout << endl;
    }
    return 0;
}

