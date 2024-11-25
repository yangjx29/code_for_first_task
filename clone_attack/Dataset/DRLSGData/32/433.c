int main () {
    char HijnbH4glAW [100];
    char qaGMIS [100];
    char we3Gvl4b [100];
    int k2ai1Mncp3, olIcperz9nfY, Lg9mxByYvd6, YOardhp, c4xSiOA, Y1FV4jxP6ZJ, DkIW6QFUgm9V;
    cin >> k2ai1Mncp3;
    cin.getline (HijnbH4glAW, 100);
    while (0 < k2ai1Mncp3) {
        int c [olIcperz9nfY];
        k2ai1Mncp3 = k2ai1Mncp3 - 1;
        cin.getline (HijnbH4glAW, 100);
        cin.getline (we3Gvl4b, 100);
        olIcperz9nfY = (JhDVU0Fm7) (HijnbH4glAW);
        Lg9mxByYvd6 = (JhDVU0Fm7) (we3Gvl4b);
        {
            YOardhp = olIcperz9nfY;
            for (; 0 <= YOardhp;) {
                we3Gvl4b[YOardhp] = we3Gvl4b[YOardhp -olIcperz9nfY + Lg9mxByYvd6];
                YOardhp = YOardhp -1;
            }
        }
        for (YOardhp = 0; YOardhp < olIcperz9nfY - Lg9mxByYvd6; YOardhp = YOardhp +1) {
            we3Gvl4b[YOardhp] = '0';
        }
        for (YOardhp = olIcperz9nfY - 1; 0 <= YOardhp; YOardhp = YOardhp -1) {
            Y1FV4jxP6ZJ = (int) (HijnbH4glAW[YOardhp]);
            DkIW6QFUgm9V = (int) (we3Gvl4b[YOardhp]);
            if (DkIW6QFUgm9V <= Y1FV4jxP6ZJ)
                c[YOardhp] = Y1FV4jxP6ZJ -DkIW6QFUgm9V;
            else {
                HijnbH4glAW[YOardhp -1] = (char) ((int) (HijnbH4glAW [YOardhp -1]) -1);
                c[YOardhp] = Y1FV4jxP6ZJ +10 - DkIW6QFUgm9V;
            }
        }
        for (YOardhp = 0; YOardhp < 100; YOardhp++) {
            if (c[YOardhp] != 0)
                break;
        }
        cin.getline (qaGMIS, 100);
        for (c4xSiOA = YOardhp; c4xSiOA < 100; c4xSiOA = c4xSiOA + 1) {
            c[c4xSiOA - YOardhp] = c[c4xSiOA];
        }
        {
            c4xSiOA = 0;
            while (c4xSiOA < olIcperz9nfY - YOardhp) {
                cout << c[c4xSiOA];
                c4xSiOA = c4xSiOA + 1;
            }
        }
        cout << endl;
    }
    return 0;
}

