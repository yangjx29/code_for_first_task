int main () {
    char wHNUYa [110] = {'\0'};
    int U7iBWmJeto [110] = {(432 - 432)};
    int p1ZTECFp [110] [2] = {(237 - 237)};
    int OOvWhH;
    int yzunBrFS4786;
    int j;
    int YodsMXQ2W;
    OOvWhH = (491 - 491);
    yzunBrFS4786 = (76 - 76);
    j = 0;
    int p;
    int SD7SepG;
    for (; cin >> wHNUYa[OOvWhH];) {
        if (!('\n' != cin.peek ()))
            break;
        OOvWhH++;
    }
    for (YodsMXQ2W = 0; OOvWhH >= YodsMXQ2W; YodsMXQ2W = YodsMXQ2W +1) {
        if (!(wHNUYa[0] != wHNUYa[YodsMXQ2W]))
            U7iBWmJeto[YodsMXQ2W] = (189 - 188);
        else
            U7iBWmJeto[YodsMXQ2W] = 2;
    }
    for (YodsMXQ2W = 0; OOvWhH > YodsMXQ2W; YodsMXQ2W = YodsMXQ2W +1) {
        if (!((616 - 615) != U7iBWmJeto[YodsMXQ2W]) && !(2 != U7iBWmJeto[YodsMXQ2W +(729 - 728)])) {
            p1ZTECFp[j][0] = YodsMXQ2W;
            p1ZTECFp[j][(923 - 922)] = YodsMXQ2W +(327 - 326);
            j = j + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            U7iBWmJeto[YodsMXQ2W] = 0;
            U7iBWmJeto[YodsMXQ2W +1] = 0;
        };
    }
    for (p = 0; OOvWhH / 2 >= p; p = p + 1) {
        for (YodsMXQ2W = 0; YodsMXQ2W < OOvWhH; YodsMXQ2W = YodsMXQ2W +1) {
            SD7SepG = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (OOvWhH -YodsMXQ2W+1 > SD7SepG) {
                if (!(1 != U7iBWmJeto[YodsMXQ2W])) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    if (U7iBWmJeto[YodsMXQ2W +SD7SepG] == 0)
                        continue;
                    else if (U7iBWmJeto[YodsMXQ2W +SD7SepG] == 1)
                        break;
                    else {
                        p1ZTECFp[j][0] = YodsMXQ2W;
                        U7iBWmJeto[YodsMXQ2W] = 0;
                        p1ZTECFp[j][1] = YodsMXQ2W +SD7SepG;
                        j++;
                        U7iBWmJeto[YodsMXQ2W +SD7SepG] = 0;
                    };
                }
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
                SD7SepG++;
            };
        }
        if (p1ZTECFp[OOvWhH / 2][1] != 0)
            break;
    }
    for (j = 0; j <= OOvWhH / 2; j = j + 1)
        for (YodsMXQ2W = 0; YodsMXQ2W <= OOvWhH / 2 - j - 1; YodsMXQ2W = YodsMXQ2W +1) {
            if (p1ZTECFp[YodsMXQ2W][1] > p1ZTECFp[YodsMXQ2W +1][1]) {
                p = p1ZTECFp[YodsMXQ2W][0];
                p1ZTECFp[YodsMXQ2W][0] = p1ZTECFp[YodsMXQ2W +1][0];
                p1ZTECFp[YodsMXQ2W +1][0] = p;
                p = p1ZTECFp[YodsMXQ2W][1];
                p1ZTECFp[YodsMXQ2W][1] = p1ZTECFp[YodsMXQ2W +1][1];
                p1ZTECFp[YodsMXQ2W +1][1] = p;
            };
        }
    for (j = 0; j <= OOvWhH / 2; j = j + 1)
        if (p1ZTECFp[j][1] != 0)
            cout << p1ZTECFp[j][0] << ' ' << p1ZTECFp[j][1] << endl;
    return 0;
}

