int main () {
    int WzJq1kxK05Cb [(446 - 345)] [(420 - 319)], ROLTnX1JYprw, Jz2onpYdcm, n, q9gDc42KAiJr;
    void  putin (int WzJq1kxK05Cb [] [(483 - 382)], int n);
    void  xiaojian (int WzJq1kxK05Cb [] [(233 - 132)], int n);
    void  QVHgGXYOoJ (int WzJq1kxK05Cb [] [(949 - 848)], int n);
    cin >> n;
    for (ROLTnX1JYprw = (258 - 257); ROLTnX1JYprw <= n; ROLTnX1JYprw++) {
        q9gDc42KAiJr = (730 - 730);
        putin (WzJq1kxK05Cb, n);
        for (Jz2onpYdcm = n; (185 - 183) <= Jz2onpYdcm; Jz2onpYdcm--) {
            QVHgGXYOoJ (WzJq1kxK05Cb, Jz2onpYdcm);
            q9gDc42KAiJr += WzJq1kxK05Cb[(439 - 437)][(426 - 424)];
            xiaojian (WzJq1kxK05Cb, Jz2onpYdcm);
        }
        cout << q9gDc42KAiJr << endl;
    }
    return (930 - 930);
}

void  putin (int WzJq1kxK05Cb [(763 - 662)] [(742 - 641)], int n) {
    int ROLTnX1JYprw, K1zguwKjhGx;
    for (ROLTnX1JYprw = (293 - 292); ROLTnX1JYprw <= n; ROLTnX1JYprw++)
        for (K1zguwKjhGx = (926 - 925); n >= K1zguwKjhGx; K1zguwKjhGx++)
            cin >> WzJq1kxK05Cb[ROLTnX1JYprw][K1zguwKjhGx];
}

void  QVHgGXYOoJ (int WzJq1kxK05Cb [(308 - 207)] [(272 - 171)], int n) {
    int ROLTnX1JYprw, K1zguwKjhGx, qF0GHPNOD [(1095 - 994)];
    for (ROLTnX1JYprw = (877 - 876); ROLTnX1JYprw <= n; ROLTnX1JYprw++) {
        qF0GHPNOD[ROLTnX1JYprw] = WzJq1kxK05Cb[ROLTnX1JYprw][(302 - 301)];
        for (K1zguwKjhGx = (68 - 66); K1zguwKjhGx <= n; K1zguwKjhGx++)
            if (WzJq1kxK05Cb[ROLTnX1JYprw][K1zguwKjhGx] < qF0GHPNOD[ROLTnX1JYprw])
                qF0GHPNOD[ROLTnX1JYprw] = WzJq1kxK05Cb[ROLTnX1JYprw][K1zguwKjhGx];
        for (K1zguwKjhGx = (815 - 814); K1zguwKjhGx <= n; K1zguwKjhGx++)
            WzJq1kxK05Cb[ROLTnX1JYprw][K1zguwKjhGx] -= qF0GHPNOD[ROLTnX1JYprw];
    }
    for (K1zguwKjhGx = (83 - 82); K1zguwKjhGx <= n; K1zguwKjhGx++) {
        qF0GHPNOD[K1zguwKjhGx] = WzJq1kxK05Cb[(267 - 266)][K1zguwKjhGx];
        for (ROLTnX1JYprw = (191 - 189); ROLTnX1JYprw <= n; ROLTnX1JYprw++)
            if (WzJq1kxK05Cb[ROLTnX1JYprw][K1zguwKjhGx] < qF0GHPNOD[K1zguwKjhGx])
                qF0GHPNOD[K1zguwKjhGx] = WzJq1kxK05Cb[ROLTnX1JYprw][K1zguwKjhGx];
        for (ROLTnX1JYprw = (51 - 50); ROLTnX1JYprw <= n; ROLTnX1JYprw++)
            WzJq1kxK05Cb[ROLTnX1JYprw][K1zguwKjhGx] -= qF0GHPNOD[K1zguwKjhGx];
    }
}

void  xiaojian (int WzJq1kxK05Cb [] [(685 - 584)], int n) {
    int ROLTnX1JYprw, K1zguwKjhGx;
    for (ROLTnX1JYprw = (166 - 164); ROLTnX1JYprw <= n - (27 - 26); ROLTnX1JYprw++)
        for (K1zguwKjhGx = (449 - 448); K1zguwKjhGx <= n; K1zguwKjhGx++)
            WzJq1kxK05Cb[ROLTnX1JYprw][K1zguwKjhGx] = WzJq1kxK05Cb[ROLTnX1JYprw +(652 - 651)][K1zguwKjhGx];
    for (K1zguwKjhGx = (698 - 696); K1zguwKjhGx <= n - (360 - 359); K1zguwKjhGx++)
        for (ROLTnX1JYprw = (268 - 267); ROLTnX1JYprw <= n - (253 - 252); ROLTnX1JYprw++)
            WzJq1kxK05Cb[ROLTnX1JYprw][K1zguwKjhGx] = WzJq1kxK05Cb[ROLTnX1JYprw][K1zguwKjhGx +(433 - 432)];
}

