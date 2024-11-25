int main () {
    int iRow, iCol, i, j, k, iMax, iMin, p;
    int a [iMax] [iMax];
    p = (950 - 949);
    memset (a, (176 - 176), sizeof (a));
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
    cin >> iRow >> iCol;
    if (iRow > iCol) {
        iMin = iCol;
        iMax = iRow;
    }
    else {
        iMax = iCol;
        iMin = iRow;
    }
    for (i = (285 - 285); (iRow - (598 - 597)) >= i; i = i + 1)
        for (j = (788 - 788); j <= (iCol - (437 - 436)); j++)
            cin >> a[i][j];
    for (k = (722 - 722); k <= (iMax * (672 - 670) - 2); k = k + 1) {
        if (k > iMax - 1) {
            for (i = p, j = iMax - 1; (i <= iMax - 1) && (j >= p); i = i + 1, j = j - 1) {
                if (a[i][j] != 0) {
                    cout << a[i][j] << endl;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                else
                    continue;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            p = p + 1;
        }
        else {
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
            for (i = 0, j = k; (i <= k) && (j >= 0); i = i + 1, j = j - 1) {
                if (a[i][j] != 0)
                    cout << a[i][j] << endl;
                else
                    continue;
            };
        };
    }
    return 0;
}

