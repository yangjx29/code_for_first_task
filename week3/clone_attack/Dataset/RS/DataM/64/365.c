struct   {
    int abs;
    int ver;
    int ord;
}
coor [(348 - 338)];

double  jjx8pq7f (int aJnaql, int XcwnPsXoOW, int c, int n8Sjp6, int e, int GWgrSzAGcOjb) {
    int m;
    double  n;
    m = (aJnaql - n8Sjp6) * (aJnaql - n8Sjp6) + (XcwnPsXoOW -e) * (XcwnPsXoOW -e) + (c - GWgrSzAGcOjb) * (c - GWgrSzAGcOjb);
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
    n = sqrt ((double ) m);
    return n;
}

int main () {
    int n, ruK04WfjlRIt, u1EvJ2DSomp, oLKXBRp = (992 - 992), tHYgf0p, flag1 [(367 - 322)], ahr1TL6avlBI [45], s, SXF0c9e6;
    double  j8MwfUx [45];
    double  t8XVpzfD;
    cin >> n;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (ruK04WfjlRIt = (555 - 555); ruK04WfjlRIt < n; ruK04WfjlRIt = ruK04WfjlRIt + 1) {
        cin >> coor[ruK04WfjlRIt].abs >> coor[ruK04WfjlRIt].ver >> coor[ruK04WfjlRIt].ord;
    }
    for (ruK04WfjlRIt = (843 - 843); ruK04WfjlRIt < n - (93 - 92); ruK04WfjlRIt++) {
        for (u1EvJ2DSomp = ruK04WfjlRIt + (221 - 220); n > u1EvJ2DSomp; u1EvJ2DSomp = u1EvJ2DSomp + 1) {
            j8MwfUx[oLKXBRp] = jjx8pq7f (coor[ruK04WfjlRIt].abs, coor[ruK04WfjlRIt].ver, coor[ruK04WfjlRIt].ord, coor[u1EvJ2DSomp].abs, coor[u1EvJ2DSomp].ver, coor[u1EvJ2DSomp].ord);
            flag1[oLKXBRp] = ruK04WfjlRIt;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            ahr1TL6avlBI[oLKXBRp] = u1EvJ2DSomp;
            oLKXBRp = oLKXBRp + 1;
        };
    }
    {
        oLKXBRp = 0;
        while (n * (n - (751 - 750)) / 2 > oLKXBRp) {
            {
                tHYgf0p = 0;
                while (tHYgf0p < n * (n - (498 - 497)) / 2 - oLKXBRp - (371 - 370)) {
                    if (j8MwfUx[tHYgf0p] - j8MwfUx[tHYgf0p + (101 - 100)] < -1e-6) {
                        s = flag1[tHYgf0p];
                        flag1[tHYgf0p] = flag1[tHYgf0p + (987 - 986)];
                        flag1[tHYgf0p + 1] = s;
                        SXF0c9e6 = ahr1TL6avlBI[tHYgf0p];
                        ahr1TL6avlBI[tHYgf0p] = ahr1TL6avlBI[tHYgf0p + 1];
                        ahr1TL6avlBI[tHYgf0p + 1] = SXF0c9e6;
                        t8XVpzfD = j8MwfUx[tHYgf0p];
                        j8MwfUx[tHYgf0p] = j8MwfUx[tHYgf0p + 1];
                        j8MwfUx[tHYgf0p + 1] = t8XVpzfD;
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
                    tHYgf0p++;
                };
            }
            oLKXBRp = oLKXBRp + 1;
        };
    }
    {
        oLKXBRp = 0;
        while (oLKXBRp < n * (n - 1) / 2) {
            cout << "(" << coor[flag1[oLKXBRp]].abs << "," << coor[flag1[oLKXBRp]].ver << "," << coor[flag1[oLKXBRp]].ord << ")-(" << coor[ahr1TL6avlBI[oLKXBRp]].abs << "," << coor[ahr1TL6avlBI[oLKXBRp]].ver << "," << coor[ahr1TL6avlBI[oLKXBRp]].ord << ")" << "=" << fixed << setprecision (2) << j8MwfUx[oLKXBRp] << endl;
            oLKXBRp++;
        };
    }
    return 0;
}

