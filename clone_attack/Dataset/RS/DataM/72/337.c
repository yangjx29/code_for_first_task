int main () {
    int a42ap8Sx1, pVqdFP18HS, jpv527k [50] [50] = {{0}}, LwPgnrV, ypsye6BRGu, QjASIRd [(1087 - 587)], l [500], FFxcrY948mEi = 0;
    int z7CPovHO = FFxcrY948mEi;
    cin >> a42ap8Sx1 >> pVqdFP18HS;
    {
        LwPgnrV = 658 - 657;
        while (a42ap8Sx1 >= LwPgnrV) {
            {
                ypsye6BRGu = 517 - 516;
                while (pVqdFP18HS >= ypsye6BRGu) {
                    cin >> jpv527k[LwPgnrV][ypsye6BRGu];
                    ypsye6BRGu++;
                };
            }
            LwPgnrV = LwPgnrV +1;
        };
    }
    for (LwPgnrV = (313 - 312); LwPgnrV <= a42ap8Sx1; LwPgnrV++) {
        ypsye6BRGu = 1;
        while (ypsye6BRGu <= pVqdFP18HS) {
            if (jpv527k[LwPgnrV][ypsye6BRGu] >= jpv527k[LwPgnrV][ypsye6BRGu + 1] && jpv527k[LwPgnrV][ypsye6BRGu] >= jpv527k[LwPgnrV][ypsye6BRGu - 1] && jpv527k[LwPgnrV][ypsye6BRGu] >= jpv527k[LwPgnrV +1][ypsye6BRGu] && jpv527k[LwPgnrV][ypsye6BRGu] >= jpv527k[LwPgnrV -1][ypsye6BRGu]) {
                QjASIRd[FFxcrY948mEi] = LwPgnrV;
                l[FFxcrY948mEi] = ypsye6BRGu;
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
                FFxcrY948mEi++;
            }
            ypsye6BRGu++;
        };
    }
    for (LwPgnrV = 0; LwPgnrV < z7CPovHO; LwPgnrV++) {
        ypsye6BRGu = 0;
        while (ypsye6BRGu < z7CPovHO - 1) {
            if (QjASIRd[ypsye6BRGu] > QjASIRd[ypsye6BRGu + 1]) {
                int zv8s2XuNc4S;
                zv8s2XuNc4S = QjASIRd[ypsye6BRGu + 1];
                QjASIRd[ypsye6BRGu + 1] = QjASIRd[ypsye6BRGu];
                QjASIRd[ypsye6BRGu] = zv8s2XuNc4S;
                zv8s2XuNc4S = l[ypsye6BRGu + 1];
                l[ypsye6BRGu + 1] = l[ypsye6BRGu];
                l[ypsye6BRGu] = zv8s2XuNc4S;
                continue;
            }
            if (QjASIRd[ypsye6BRGu] == QjASIRd[ypsye6BRGu + 1] && l[ypsye6BRGu] > l[ypsye6BRGu + 1]) {
                int zv8s2XuNc4S;
                zv8s2XuNc4S = QjASIRd[ypsye6BRGu + 1];
                QjASIRd[ypsye6BRGu + 1] = QjASIRd[ypsye6BRGu];
                QjASIRd[ypsye6BRGu] = zv8s2XuNc4S;
                zv8s2XuNc4S = l[ypsye6BRGu + 1];
                l[ypsye6BRGu + 1] = l[ypsye6BRGu];
                l[ypsye6BRGu] = zv8s2XuNc4S;
            }
            ypsye6BRGu++;
        };
    }
    {
        LwPgnrV = 0;
        while (LwPgnrV < z7CPovHO) {
            cout << QjASIRd[LwPgnrV] - 1 << " " << l[LwPgnrV] - 1 << endl;
            LwPgnrV++;
        };
    }
    return 0;
}

