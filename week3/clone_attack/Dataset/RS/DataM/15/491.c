int main () {
    int R45OVGT9K, h [(672 - 572)], XQZOflg = 0, GTgJkL;
    int XjbNiK;
    XjbNiK = (GTgJkL -2) * (XQZOflg -2);
    int CMYw8C7 [100] [100];
    cin >> R45OVGT9K;
    {
        int zuyFoJl = 1;
        while (R45OVGT9K >= zuyFoJl) {
            h[zuyFoJl] = 0;
            {
                int bx1S5k = 1;
                while (bx1S5k <= R45OVGT9K) {
                    cin >> CMYw8C7[zuyFoJl][bx1S5k];
                    if (!(0 != CMYw8C7[zuyFoJl][bx1S5k]))
                        h[zuyFoJl]++;
                    bx1S5k++;
                };
            }
            zuyFoJl++;
        };
    }
    for (int zuyFoJl = 1;
    zuyFoJl <= R45OVGT9K; zuyFoJl = zuyFoJl + 1) {
        if (h[zuyFoJl] != 0) {
            GTgJkL = h[zuyFoJl];
            break;
        };
    }
    for (int zuyFoJl = 1;
    zuyFoJl <= R45OVGT9K; zuyFoJl++) {
        if (h[zuyFoJl] != 0) {
            XQZOflg++;
        }
        else
            continue;
    }
    cout << XjbNiK;
}

