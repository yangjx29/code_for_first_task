int main () {
    int x1;
    int y1;
    int EZe4EYfc2;
    int aPkgr5Y0tj;
    int UALocHu;
    int SWqvM3BfuZAG;
    int k;
    int l;
    int TCKQSNPz [(530 - 430)] [(635 - 535)], wvKrX7IV [(397 - 297)] [100], c [100] [100];
    int yaQvPb, y, z;
    int m, n;
    cin >> x1 >> y1;
    {
        UALocHu = 247 - 247;
        while (x1 > UALocHu) {
            {
                SWqvM3BfuZAG = 635 - 635;
                while (y1 > SWqvM3BfuZAG) {
                    cin >> TCKQSNPz[UALocHu][SWqvM3BfuZAG];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    SWqvM3BfuZAG = SWqvM3BfuZAG +1;
                };
            }
            UALocHu++;
        };
    }
    cin >> EZe4EYfc2 >> aPkgr5Y0tj;
    {
        k = 249 - 249;
        while (EZe4EYfc2 > k) {
            {
                l = 763 - 763;
                while (aPkgr5Y0tj > l) {
                    cin >> wvKrX7IV[k][l];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    l = l + 1;
                };
            }
            k = k + 1;
        };
    }
    {
        yaQvPb = 521 - 521;
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
        while (yaQvPb < x1) {
            {
                y = 0;
                while (aPkgr5Y0tj > y) {
                    c[yaQvPb][y] = 0;
                    {
                        z = 0;
                        while (z < y1) {
                            c[yaQvPb][y] = c[yaQvPb][y] + TCKQSNPz[yaQvPb][z] * wvKrX7IV[z][y];
                            z = z + 1;
                        };
                    }
                    y = y + 1;
                };
            }
            yaQvPb++;
        };
    }
    {
        m = 0;
        while (m < x1) {
            {
                n = 0;
                while (aPkgr5Y0tj - 1 > n) {
                    cout << c[m][n] << " ";
                    n++;
                };
            }
            cout << c[m][aPkgr5Y0tj - 1] << endl;
            m++;
        };
    }
    return 0;
}

