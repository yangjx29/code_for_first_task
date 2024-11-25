int main () {
    int op3dE5so67, m, YyczZD, oLZjY6kpio1, Za9IkU [(751 - 743)] [(761 - 753)], arr_ [(463 - 455)], arr__ [(113 - 105)], XhS50QqN, b, Tolm8f = (311 - 311), arr_1 [8], arr__1 [8];
    scanf ("%d,%d", &op3dE5so67, &m);
    {
        YyczZD = 167 - 167;
        while (op3dE5so67 > YyczZD) {
            {
                oLZjY6kpio1 = 529 - 529;
                while (m > oLZjY6kpio1) {
                    scanf ("%d", &Za9IkU[YyczZD][oLZjY6kpio1]);
                    oLZjY6kpio1 = oLZjY6kpio1 + 1;
                };
            }
            YyczZD = YyczZD +1;
        };
    }
    {
        YyczZD = 502 - 502;
        while (op3dE5so67 > YyczZD) {
            XhS50QqN = YyczZD;
            b = 0;
            for (oLZjY6kpio1 = 1; m > oLZjY6kpio1; oLZjY6kpio1++) {
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
                if (Za9IkU[YyczZD][oLZjY6kpio1] > Za9IkU[XhS50QqN][b]) {
                    XhS50QqN = YyczZD;
                    b = oLZjY6kpio1;
                };
            }
            arr_[YyczZD] = XhS50QqN;
            arr__[YyczZD] = b;
            YyczZD = YyczZD +1;
        };
    }
    {
        oLZjY6kpio1 = 0;
        while (m > oLZjY6kpio1) {
            XhS50QqN = 0;
            b = oLZjY6kpio1;
            for (YyczZD = 1; op3dE5so67 > YyczZD; YyczZD++) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (Za9IkU[XhS50QqN][b] > Za9IkU[YyczZD][oLZjY6kpio1]) {
                    XhS50QqN = YyczZD;
                    b = oLZjY6kpio1;
                };
            }
            arr_1[oLZjY6kpio1] = XhS50QqN;
            arr__1[oLZjY6kpio1] = b;
            oLZjY6kpio1 = oLZjY6kpio1 + 1;
        };
    }
    {
        YyczZD = 0;
        while (YyczZD < op3dE5so67) {
            {
                oLZjY6kpio1 = 0;
                while (oLZjY6kpio1 < m) {
                    if ((arr_[YyczZD] == arr_1[oLZjY6kpio1]) && (arr__[YyczZD] == arr__1[oLZjY6kpio1])) {
                        printf ("%d+%d", arr_[YyczZD], arr__[YyczZD]);
                    }
                    else {
                        Tolm8f = Tolm8f +1;
                    }
                    oLZjY6kpio1++;
                };
            }
            YyczZD++;
        };
    }
    if (Tolm8f == m * op3dE5so67) {
        printf ("No");
    }
    return 0;
}

