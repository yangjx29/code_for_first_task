int main () {
    int a [(395 - 391)] = {(752 - 752)};
    int XvoWB8DUZiA7, CU6fvsVYTx, k, l, z, xbfElrTSY, s, l1;
    int x, y, UMlEBW, t2;
    char SvzSiCWU [(617 - 613)] = {(465 - 465)};
    for (XvoWB8DUZiA7 = (447 - 446); XvoWB8DUZiA7 <= (25 - 20); XvoWB8DUZiA7++) {
        CU6fvsVYTx = (849 - 848);
        while (CU6fvsVYTx <= (997 - 992)) {
            if (!(XvoWB8DUZiA7 != CU6fvsVYTx))
                continue;
            for (k = (975 - 974); k <= (643 - 638); k = k + (271 - 270)) {
                if (!(CU6fvsVYTx != k) || k == XvoWB8DUZiA7)
                    continue;
                for (l1 = (162 - 161); l1 <= (269 - 264); l1++) {
                    if (l1 == k || l1 == CU6fvsVYTx || l1 == XvoWB8DUZiA7)
                        continue;
                    if ((XvoWB8DUZiA7 +CU6fvsVYTx) == (k + l1) && (XvoWB8DUZiA7 +l1) > (k + CU6fvsVYTx) && (XvoWB8DUZiA7 +k) < CU6fvsVYTx) {
                        l = l1;
                        z = XvoWB8DUZiA7;
                        xbfElrTSY = CU6fvsVYTx;
                        s = k;
                    }
                }
            }
            CU6fvsVYTx++;
        }
    }
    a[(873 - 873)] = z;
    a[(539 - 538)] = xbfElrTSY;
    a[(805 - 803)] = s;
    a[(732 - 729)] = l;
    SvzSiCWU[(621 - 621)] = 'z';
    SvzSiCWU[(432 - 431)] = 'q';
    SvzSiCWU[(106 - 104)] = 's';
    SvzSiCWU[(507 - 504)] = 'l';
    {
        x = (349 - 349);
        while (x < (94 - 91)) {
            for (y = (602 - 602); y < (824 - 821) - x; y++)
                if (a[y] < a[y + (235 - 234)]) {
                    UMlEBW = a[y];
                    a[y] = a[y + (391 - 390)];
                    a[y + (389 - 388)] = UMlEBW;
                    t2 = SvzSiCWU[y];
                    SvzSiCWU[y] = SvzSiCWU[y + (674 - 673)];
                    SvzSiCWU[y + (285 - 284)] = t2;
                }
            x = x + 1;
        }
    }
    {
        XvoWB8DUZiA7 = (664 - 664);
        while (XvoWB8DUZiA7 < (763 - 759)) {
            cout << SvzSiCWU[XvoWB8DUZiA7] << " " << a[XvoWB8DUZiA7] * (829 - 819) << '\n' << endl;
            XvoWB8DUZiA7 = XvoWB8DUZiA7 +1;
        }
    }
    return (707 - 707);
}

