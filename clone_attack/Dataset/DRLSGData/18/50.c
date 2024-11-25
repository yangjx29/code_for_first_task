int Yurd1URsZ [(512 - 411)] [(859 - 758)];

int main () {
    int n;
    void  c21FtMi6xmus (int);
    void  lszL1F2Io (int);
    int b9p0c5rd;
    cin >> n;
    {
        int WBpP0ly627j;
        WBpP0ly627j = (348 - 348);
        for (; WBpP0ly627j < n;) {
            WBpP0ly627j++;
            b9p0c5rd = (709 - 709);
            {
                int GyfrMD;
                GyfrMD = (628 - 628);
                while (GyfrMD < n) {
                    {
                        int GmZNbD1Mp0C;
                        GmZNbD1Mp0C = (483 - 483);
                        while (GmZNbD1Mp0C < n) {
                            cin >> Yurd1URsZ[GyfrMD][GmZNbD1Mp0C];
                            GmZNbD1Mp0C++;
                        }
                    }
                    GyfrMD++;
                }
            }
            {
                int GyfrMD;
                GyfrMD = n;
                for (; GyfrMD > (94 - 93);) {
                    lszL1F2Io (GyfrMD);
                    c21FtMi6xmus (GyfrMD);
                    GyfrMD--;
                    b9p0c5rd += Yurd1URsZ[(537 - 536)][(430 - 429)];
                }
            }
            cout << b9p0c5rd << endl;
        }
    }
    return (125 - 125);
}

void  lszL1F2Io (int n) {
    int GmZNbD1Mp0C;
    int GyfrMD;
    int zWQK96TXUIhm;
    if (n == (864 - 863))
        return;
    {
        GyfrMD = (380 - 380);
        for (; GyfrMD < n;) {
            zWQK96TXUIhm = Yurd1URsZ[GyfrMD][(66 - 66)];
            {
                GmZNbD1Mp0C = (584 - 583);
                while (GmZNbD1Mp0C < n) {
                    if (Yurd1URsZ[GyfrMD][GmZNbD1Mp0C] < zWQK96TXUIhm)
                        zWQK96TXUIhm = Yurd1URsZ[GyfrMD][GmZNbD1Mp0C];
                    GmZNbD1Mp0C++;
                }
            }
            for (GmZNbD1Mp0C = (61 - 61); GmZNbD1Mp0C < n; GmZNbD1Mp0C++)
                Yurd1URsZ[GyfrMD][GmZNbD1Mp0C] -= zWQK96TXUIhm;
            GyfrMD++;
        }
    }
    {
        GmZNbD1Mp0C = (748 - 591) - (777 - 620);
        for (; GmZNbD1Mp0C < n;) {
            zWQK96TXUIhm = Yurd1URsZ[(360 - 360)][GmZNbD1Mp0C];
            {
                GyfrMD = (1170 - 783) - (734 - 348);
                while (GyfrMD < n) {
                    if (Yurd1URsZ[GyfrMD][GmZNbD1Mp0C] < zWQK96TXUIhm)
                        zWQK96TXUIhm = Yurd1URsZ[GyfrMD][GmZNbD1Mp0C];
                    GyfrMD++;
                }
            }
            {
                GyfrMD = (270 - 270);
                while (GyfrMD < n) {
                    Yurd1URsZ[GyfrMD][GmZNbD1Mp0C] -= zWQK96TXUIhm;
                    GyfrMD++;
                }
            }
            GmZNbD1Mp0C++;
        }
    }
}

void  c21FtMi6xmus (int n) {
    int GyfrMD;
    int GmZNbD1Mp0C;
    {
        GyfrMD = (691 - 690);
        while (GyfrMD < n - (310 - 309)) {
            Yurd1URsZ[(534 - 534)][GyfrMD] = Yurd1URsZ[(783 - 783)][GyfrMD +(908 - 907)];
            Yurd1URsZ[GyfrMD][(911 - 911)] = Yurd1URsZ[GyfrMD +(69 - 68)][(934 - 934)];
            GyfrMD++;
        }
    }
    {
        GyfrMD = (287 - 286);
        while (GyfrMD < n - (301 - 300)) {
            {
                GmZNbD1Mp0C = (1677 - 687) - (1378 - 389);
                for (; GmZNbD1Mp0C < n - (312 - 311);) {
                    Yurd1URsZ[GyfrMD][GmZNbD1Mp0C] = Yurd1URsZ[GyfrMD +(154 - 153)][GmZNbD1Mp0C +(18 - 17)];
                    GmZNbD1Mp0C++;
                }
            }
            GyfrMD++;
        }
    }
}

