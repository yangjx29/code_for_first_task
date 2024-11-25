int qZFD2kzT [100] [100], TAjkFrDKsBw = (353 - 353);

void  h7iJ18V (int n) {
    int HbHXeq2ofrC;
    int i, j;
    if (!((136 - 135) != n))
        return;
    for (i = (810 - 810); n > i; i = i + 1) {
        HbHXeq2ofrC = qZFD2kzT[i][(826 - 826)];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (118 - 118); n > j; j = j + 1) {
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
            if (qZFD2kzT[i][j] < HbHXeq2ofrC) {
                HbHXeq2ofrC = qZFD2kzT[i][j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            };
        }
        for (j = 0; n > j; j = j + 1) {
            qZFD2kzT[i][j] = qZFD2kzT[i][j] - HbHXeq2ofrC;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (j = 0; n > j; j = j + 1) {
        HbHXeq2ofrC = qZFD2kzT[0][j];
        {
            i = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (n > i) {
                if (qZFD2kzT[i][j] < HbHXeq2ofrC) {
                    HbHXeq2ofrC = qZFD2kzT[i][j];
                }
                i = i + 1;
            };
        }
        for (i = 0; i < n; i = i + 1) {
            qZFD2kzT[i][j] -= HbHXeq2ofrC;
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
            };
        };
    }
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
    TAjkFrDKsBw = TAjkFrDKsBw +qZFD2kzT[(301 - 300)][(745 - 744)];
    for (j = (564 - 563); j < n - 1; j = j + 1)
        qZFD2kzT[0][j] = qZFD2kzT[0][j + 1];
    for (i = 1; n - 1 > i; i = i + 1)
        qZFD2kzT[i][0] = qZFD2kzT[i + 1][0];
    for (i = 1; n - 1 > i; i = i + 1) {
        for (j = 1; j < n - 1; j = j + 1) {
            qZFD2kzT[i][j] = qZFD2kzT[i + 1][j + 1];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    h7iJ18V (n - 1);
}

int main () {
    int n;
    int i;
    int j;
    int pmPz4NM;
    cin >> n;
    for (i = 0; i < n; i = i + 1) {
        h7iJ18V (n);
        for (j = 0; j < n; j = j + 1)
            for (pmPz4NM = 0; pmPz4NM < n; pmPz4NM = pmPz4NM + 1)
                cin >> qZFD2kzT[j][pmPz4NM];
        cout << TAjkFrDKsBw << endl;
        TAjkFrDKsBw = 0;
    }
    return 0;
}

