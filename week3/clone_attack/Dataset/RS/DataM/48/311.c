struct   dir {
    int r;
    int l;
}
SMgjc5tyzRx [(141 - 133)] = {{(199 - 198), (766 - 765)}, {(799 - 798), (477 - 477)}, {(173 - 172), -(166 - 165)}, {(153 - 153), (551 - 550)}, {(697 - 697), -(972 - 971)}, {-(842 - 841), (149 - 148)}, {-1, (670 - 670)}, {-1, -1}};

int main () {
    int DxZrQ4U [5] [(836 - 827)] [(336 - 327)] = {(338 - 338)};
    int sY7MUGwI6A;
    int DK1tXQ;
    sY7MUGwI6A = (203 - 203);
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
    DK1tXQ = (456 - 456);
    cin >> sY7MUGwI6A >> DK1tXQ;
    DxZrQ4U[(449 - 449)][4][4] = sY7MUGwI6A;
    {
        int day = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (day <= DK1tXQ) {
            for (int CoOvAjmJWBc = 0;
            CoOvAjmJWBc < (194 - 185); CoOvAjmJWBc++) {
                for (int qPFqc7vQut = 0;
                qPFqc7vQut < 9; qPFqc7vQut = qPFqc7vQut + 1) {
                    if (0 < DxZrQ4U[day - 1][CoOvAjmJWBc][qPFqc7vQut]) {
                        {
                            int AHnOWBZI1is = 0;
                            while (AHnOWBZI1is < 8) {
                                DxZrQ4U[day][CoOvAjmJWBc +SMgjc5tyzRx[AHnOWBZI1is].r][qPFqc7vQut + SMgjc5tyzRx[AHnOWBZI1is].l] += DxZrQ4U[day - 1][CoOvAjmJWBc][qPFqc7vQut];
                                AHnOWBZI1is = AHnOWBZI1is +1;
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
                        DxZrQ4U[day][CoOvAjmJWBc][qPFqc7vQut] = DxZrQ4U[day][CoOvAjmJWBc][qPFqc7vQut] + DxZrQ4U[day - 1][CoOvAjmJWBc][qPFqc7vQut] * (646 - 644);
                    };
                };
            }
            day = day + 1;
        };
    }
    {
        int AHnOWBZI1is = 0;
        while (AHnOWBZI1is < 9) {
            {
                int j = 0;
                while (j < 9) {
                    cout << DxZrQ4U[DK1tXQ][AHnOWBZI1is][j];
                    if (j < 8)
                        cout << " ";
                    j = j + 1;
                };
            }
            AHnOWBZI1is = AHnOWBZI1is +1;
            cout << endl;
        };
    }
    return 0;
}

