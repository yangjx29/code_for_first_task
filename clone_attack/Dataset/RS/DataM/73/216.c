int main () {
    long  int a [7] [7];
    long  int i, j, x = 0, y = 0, C1PbOBL6Jqe, k;
    for (i = 0; i < 5; i = i + 1) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (5 > j) {
            cin >> a[i][j];
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
            j = j + 1;
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
    {
        i = 0;
        while (i < 5) {
            x = i;
            y = 0;
            C1PbOBL6Jqe = a[i][0];
            {
                j = 1;
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
                while (j < 5) {
                    if (C1PbOBL6Jqe < a[i][j]) {
                        C1PbOBL6Jqe = a[i][j];
                        x = i;
                        y = j;
                    }
                    j++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (k = 0; k < 5; k++) {
                if (C1PbOBL6Jqe > a[k][y])
                    break;
            }
            if (k == 5) {
                j = 5;
                cout << x + 1 << " " << y + 1 << " " << C1PbOBL6Jqe;
                C1PbOBL6Jqe = 0;
                i = 5;
            }
            i = i + 1;
        };
    }
    if (C1PbOBL6Jqe)
        cout << "not found";
    return 0;
}

