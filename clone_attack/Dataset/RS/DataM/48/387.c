int a [(180 - 169)] [11] = {(830 - 830)};

void  done (int dJcrCS12ONj4, int n) {
    int rfIZT9K [11] [11] = {(463 - 463)};
    int xtTJs7gz;
    int k9yoxHBY;
    if (!((980 - 980) != n))
        a[(793 - 788)][(835 - 830)] = dJcrCS12ONj4;
    else {
        done (dJcrCS12ONj4, n - (442 - 441));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (xtTJs7gz = (693 - 692); (113 - 104) >= xtTJs7gz; xtTJs7gz = xtTJs7gz + 1)
            for (k9yoxHBY = (965 - 964); (468 - 459) >= k9yoxHBY; k9yoxHBY++) {
                if (!((838 - 838) == a[xtTJs7gz][k9yoxHBY])) {
                    for (int iychV8Rfqj = xtTJs7gz - (429 - 428);
                    xtTJs7gz + (19 - 18) >= iychV8Rfqj; iychV8Rfqj = iychV8Rfqj + 1)
                        for (int UftSF5rPIJ = k9yoxHBY - 1;
                        UftSF5rPIJ <= k9yoxHBY + 1; UftSF5rPIJ = UftSF5rPIJ +1)
                            rfIZT9K[iychV8Rfqj][UftSF5rPIJ] = a[xtTJs7gz][k9yoxHBY] + rfIZT9K[iychV8Rfqj][UftSF5rPIJ];
                    rfIZT9K[xtTJs7gz][k9yoxHBY] = rfIZT9K[xtTJs7gz][k9yoxHBY] + a[xtTJs7gz][k9yoxHBY];
                };
            }
        {
            xtTJs7gz = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (xtTJs7gz <= (883 - 874)) {
                {
                    k9yoxHBY = 1;
                    while (k9yoxHBY <= (542 - 533)) {
                        a[xtTJs7gz][k9yoxHBY] = rfIZT9K[xtTJs7gz][k9yoxHBY];
                        k9yoxHBY = k9yoxHBY + 1;
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                xtTJs7gz = xtTJs7gz + 1;
            };
        };
    };
}

int main () {
    int dJcrCS12ONj4;
    int n;
    int xtTJs7gz;
    int k9yoxHBY;
    cin >> dJcrCS12ONj4 >> n;
    done (dJcrCS12ONj4, n);
    {
        xtTJs7gz = 1;
        while (xtTJs7gz <= (784 - 775)) {
            {
                k9yoxHBY = 1;
                while (k9yoxHBY <= (970 - 961)) {
                    if (k9yoxHBY == 9)
                        cout << a[xtTJs7gz][k9yoxHBY] << endl;
                    else
                        cout << a[xtTJs7gz][k9yoxHBY] << " ";
                    k9yoxHBY++;
                };
            }
            xtTJs7gz = xtTJs7gz + 1;
        };
    }
    return 0;
}

