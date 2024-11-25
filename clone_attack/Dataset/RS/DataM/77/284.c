void  lashou (char [], int, int);

int main () {
    char nn [101];
    int OICVy4t7HxBM, sum;
    cin.getline (nn, 101);
    {
        OICVy4t7HxBM = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == nn[OICVy4t7HxBM])) {
            if (!(nn[0] != nn[OICVy4t7HxBM]))
                continue;
            else {
                sum = nn[0] + nn[OICVy4t7HxBM];
            }
            OICVy4t7HxBM++;
        };
    }
    OICVy4t7HxBM--;
    lashou (nn, OICVy4t7HxBM, sum);
    return 0;
}

void  lashou (char shou [], int y5v7dCy, int sum) {
    int OICVy4t7HxBM, HxbMXsqTI, mvm1OsqEDt, r3BdZv;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        OICVy4t7HxBM = 0;
        while (OICVy4t7HxBM <= y5v7dCy) {
            {
                HxbMXsqTI = OICVy4t7HxBM;
                while (y5v7dCy >= HxbMXsqTI) {
                    if ((shou[OICVy4t7HxBM] + shou[HxbMXsqTI]) == sum) {
                        r3BdZv = 0;
                        {
                            mvm1OsqEDt = OICVy4t7HxBM +1;
                            while (mvm1OsqEDt <= HxbMXsqTI -1) {
                                if (shou[mvm1OsqEDt] != 0)
                                    r3BdZv = 1;
                                mvm1OsqEDt++;
                            };
                        }
                        if (r3BdZv == 0) {
                            cout << OICVy4t7HxBM << " " << HxbMXsqTI << endl;
                            shou[OICVy4t7HxBM] = shou[HxbMXsqTI] = 0;
                            lashou (shou, y5v7dCy, sum);
                            break;
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    HxbMXsqTI++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            OICVy4t7HxBM++;
        };
    };
}

