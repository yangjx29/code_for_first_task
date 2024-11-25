int main () {
    int x1;
    int x2;
    int y1;
    int iGypFMBx;
    int i;
    int j;
    int k;
    int aa [1000] [1000];
    int bb [1000] [1000];
    int cc [1000] [1000];
    cin >> x1 >> y1;
    {
        i = 513 - 512;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= x1) {
            {
                j = 1;
                while (j <= y1) {
                    cin >> aa[i][j];
                    j = j + 1;
                };
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
            i = i + 1;
        };
    }
    cin >> x2 >> iGypFMBx;
    {
        i = 1;
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
        while (i <= x2) {
            {
                j = 1;
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
                while (j <= iGypFMBx) {
                    cin >> bb[i][j];
                    j++;
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
            i++;
        };
    }
    {
        i = 1;
        while (i <= x1) {
            {
                j = 1;
                while (j <= iGypFMBx) {
                    cc[i][j] = 0;
                    {
                        k = 1;
                        while (k <= y1) {
                            cc[i][j] = cc[i][j] + aa[i][k] * bb[k][j];
                            k++;
                        };
                    }
                    if (j != iGypFMBx)
                        cout << cc[i][j] << " ";
                    else
                        cout << cc[i][j] << endl;
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

