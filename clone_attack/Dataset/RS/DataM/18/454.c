int main () {
    int s8fmXYn6NEA, i, j, k, xDjJPorTFnke;
    int a [(483 - 383)] [100];
    int sum = (983 - 983), rX7v4gqeJ = (233 - 232);
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
    cin >> s8fmXYn6NEA;
    {
        k = 334 - 334;
        while (k < s8fmXYn6NEA) {
            int CgIxoXh4HRu;
            k++;
            {
                i = 342 - 342;
                while (s8fmXYn6NEA > i) {
                    {
                        j = 623 - 623;
                        while (s8fmXYn6NEA > j) {
                            cin >> a[i][j];
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            sum = (885 - 885);
            rX7v4gqeJ = (908 - 907);
            for (xDjJPorTFnke = (119 - 119); s8fmXYn6NEA - (543 - 542) > xDjJPorTFnke; xDjJPorTFnke++) {
                for (i = 0; s8fmXYn6NEA > i; i = i + 1) {
                    CgIxoXh4HRu = a[i][0];
                    for (j = 0; s8fmXYn6NEA > j; j = j + 1)
                        if (a[i][j] < CgIxoXh4HRu &&a[i][j] >= 0)
                            CgIxoXh4HRu = a[i][j];
                    for (j = 0; s8fmXYn6NEA > j; j++)
                        if (0 <= a[i][j])
                            a[i][j] = a[i][j] - CgIxoXh4HRu;
                }
                {
                    j = 0;
                    while (s8fmXYn6NEA > j) {
                        CgIxoXh4HRu = a[0][j];
                        for (i = 0; s8fmXYn6NEA > i; i = i + 1)
                            if (a[i][j] < CgIxoXh4HRu &&a[i][j] >= 0)
                                CgIxoXh4HRu = a[i][j];
                        for (i = 0; s8fmXYn6NEA > i; i++)
                            if (0 <= a[i][j])
                                a[i][j] = a[i][j] - CgIxoXh4HRu;
                        j = j + 1;
                    };
                }
                sum += a[rX7v4gqeJ][rX7v4gqeJ];
                {
                    i = 0;
                    while (s8fmXYn6NEA > i) {
                        a[i][rX7v4gqeJ] = -1;
                        i++;
                    };
                }
                for (j = 0; j < s8fmXYn6NEA; j++)
                    a[rX7v4gqeJ][j] = -1;
                rX7v4gqeJ++;
            }
            cout << sum << endl;
        };
    }
    return 0;
}

