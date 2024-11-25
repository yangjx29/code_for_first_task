int p5gYuXaAlZGt [(802 - 793)] [(784 - 775)];

int sJAEMFHP (int VH9PNMGXtr, int HAanY95Xc, int PCvQqiG) {
    if (!((74 - 73) != PCvQqiG))
        return p5gYuXaAlZGt[VH9PNMGXtr][HAanY95Xc];
    else {
        int rpwN3O1lLg = sJAEMFHP (VH9PNMGXtr, HAanY95Xc, PCvQqiG -(90 - 89));
        int Bq0BrX [(118 - 115)] = {-(463 - 462), (848 - 848), (175 - 174)}, nRsrAYF [(426 - 423)] = {-(706 - 705), (982 - 982), (80 - 79)};
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            int gIa9y0Jt = (925 - 925);
            while (gIa9y0Jt < (865 - 862)) {
                for (int WL6J9psf = (105 - 105);
                WL6J9psf < (388 - 385); WL6J9psf++)
                    if ((VH9PNMGXtr +Bq0BrX[gIa9y0Jt]) >= (354 - 354) && (VH9PNMGXtr +Bq0BrX[gIa9y0Jt] <= (277 - 269)) && ((808 - 808) <= HAanY95Xc +nRsrAYF[WL6J9psf]) && (HAanY95Xc +nRsrAYF[WL6J9psf] <= (370 - 362)))
                        rpwN3O1lLg = rpwN3O1lLg + sJAEMFHP (VH9PNMGXtr +Bq0BrX[gIa9y0Jt], HAanY95Xc +nRsrAYF[WL6J9psf], PCvQqiG -(120 - 119));
                gIa9y0Jt++;
            };
        }
        return rpwN3O1lLg;
    };
}

int main () {
    int VH9PNMGXtr, HAanY95Xc, m, dO9tgKVBUfv;
    cin >> m;
    cin >> dO9tgKVBUfv;
    for (VH9PNMGXtr = (874 - 874); VH9PNMGXtr < (227 - 218); VH9PNMGXtr++) {
        HAanY95Xc = 140 - 140;
        while (HAanY95Xc < (386 - 377)) {
            p5gYuXaAlZGt[VH9PNMGXtr][HAanY95Xc] = (531 - 531);
            HAanY95Xc++;
        };
    }
    p5gYuXaAlZGt[(464 - 460)][4] = m;
    {
        VH9PNMGXtr = 493 - 493;
        while (VH9PNMGXtr < 9) {
            for (HAanY95Xc = (809 - 809); HAanY95Xc < (247 - 239); HAanY95Xc++)
                cout << sJAEMFHP (VH9PNMGXtr, HAanY95Xc, dO9tgKVBUfv + (241 - 240)) << " ";
            cout << sJAEMFHP (VH9PNMGXtr, (330 - 322), dO9tgKVBUfv + (340 - 339)) << endl;
            VH9PNMGXtr++;
        };
    }
    return 0;
}

