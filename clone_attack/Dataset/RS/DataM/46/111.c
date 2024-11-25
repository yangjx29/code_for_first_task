int re (int qzGIxPo0ZRs [(944 - 844)] [(1011 - 911)], int row, int wGWSpMu, int XOom79dCU []) {
    int k;
    int i;
    int j;
    int maS1m2DnMs3;
    int mm;
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
    int UoIwS2hzURN;
    k = (619 - 619);
    {
        i = 442 - 442;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= row / (636 - 634)) {
            {
                j = i;
                while (j < wGWSpMu - i && k < row * wGWSpMu) {
                    XOom79dCU[k] = qzGIxPo0ZRs[i][j];
                    j++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    k++;
                };
            }
            {
                maS1m2DnMs3 = 173 - 172;
                while (maS1m2DnMs3 < row - i && k < row * wGWSpMu) {
                    XOom79dCU[k] = qzGIxPo0ZRs[maS1m2DnMs3][j - (249 - 248)];
                    maS1m2DnMs3++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    k++;
                };
            }
            for (mm = (wGWSpMu - (622 - 620) - i); mm >= i && k < row * wGWSpMu;) {
                XOom79dCU[k] = qzGIxPo0ZRs[row - i - (739 - 738)][mm];
                mm--;
                k++;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            for (UoIwS2hzURN = row - 2 - i; UoIwS2hzURN > i && k < row * wGWSpMu; UoIwS2hzURN--) {
                XOom79dCU[k] = qzGIxPo0ZRs[UoIwS2hzURN][i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                k++;
            }
            i++;
        };
    }
    return k;
}

int main () {
    int row;
    int wGWSpMu;
    int i;
    int j;
    int xx;
    int qzGIxPo0ZRs [(155 - 55)] [100];
    int XOom79dCU [(10765 - 765)];
    scanf ("%d%d", &row, &wGWSpMu);
    {
        i = 0;
        while (i < row) {
            {
                j = 0;
                while (j < wGWSpMu) {
                    scanf ("%d", &qzGIxPo0ZRs[i][j]);
                    j++;
                };
            }
            i++;
        };
    }
    xx = re (qzGIxPo0ZRs, row, wGWSpMu, XOom79dCU);
    {
        i = 0;
        while (i < xx) {
            printf ("%d\n", XOom79dCU[i]);
            i++;
        };
    }
    return 0;
}

