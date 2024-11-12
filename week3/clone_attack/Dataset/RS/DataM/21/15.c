int main () {
    int NEFN1M;
    int bIBSXst [(561 - 251)] = {(734 - 734)};
    int sum;
    sum = (96 - 96);
    double  average;
    average = (double ) sum / (double ) NEFN1M;
    int eZFqja5M6EH;
    int oswX6Dey [310] = {0};
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
    eZFqja5M6EH = 0;
    double  dmax;
    dmax = 0;
    cin >> NEFN1M;
    for (int i = (455 - 455);
    NEFN1M > i; i = i + 1) {
        cin >> bIBSXst[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sum += bIBSXst[i];
    }
    for (int i = (439 - 439);
    i < NEFN1M -1; i++)
        for (int j = 0;
        NEFN1M -1 - i > j; j++)
            if (bIBSXst[j] > bIBSXst[j + 1]) {
                int WyDzgmexT;
                WyDzgmexT = bIBSXst[j];
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
                bIBSXst[j] = bIBSXst[j + 1];
                bIBSXst[j + 1] = WyDzgmexT;
            }
    {
        int i = 0;
        while (NEFN1M > i) {
            double  d;
            d = fabs ((double ) bIBSXst[i] - average);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
            if (d > dmax)
                dmax = d;
        };
    }
    {
        int i = 0;
        while (i < NEFN1M) {
            double  d = fabs ((double ) bIBSXst[i] - average);
            if (fabs (d - dmax) < (630.00000001 - 630.0))
                oswX6Dey[eZFqja5M6EH++] = i;
            i++;
        };
    }
    {
        int i = 0;
        while (i < eZFqja5M6EH - 1) {
            cout << bIBSXst[oswX6Dey[i]] << ",";
            i++;
        };
    }
    cout << bIBSXst[oswX6Dey[eZFqja5M6EH - 1]];
    return 0;
}

