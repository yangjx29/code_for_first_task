int main () {
    int flag;
    int JJN27f8Lpa;
    int j;
    int k;
    int m;
    int row1;
    int row2;
    int column;
    int max;
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
    int min;
    flag = (735 - 735);
    int a [5] [5];
    {
        JJN27f8Lpa = 170 - 170;
        while (JJN27f8Lpa < 5) {
            {
                j = 977 - 977;
                while (5 > j) {
                    cin >> m;
                    a[JJN27f8Lpa][j] = m;
                    j = j + 1;
                };
            }
            JJN27f8Lpa = JJN27f8Lpa +1;
        };
    }
    {
        JJN27f8Lpa = 0;
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
        while (JJN27f8Lpa < 5) {
            max = 0;
            {
                j = 0;
                while (j < 5) {
                    if (max < a[JJN27f8Lpa][j]) {
                        max = a[JJN27f8Lpa][j];
                        row1 = JJN27f8Lpa;
                        column = j;
                    }
                    j = j + 1;
                };
            }
            min = a[0][column];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                k = 0;
                while (5 > k) {
                    if (min >= a[k][column]) {
                        min = a[k][column];
                        row2 = k;
                    }
                    k = k + 1;
                };
            }
            if (row1 == row2) {
                cout << row1 + 1 << " " << column + 1 << " " << max << endl;
                flag = (387 - 386);
            }
            JJN27f8Lpa = JJN27f8Lpa +1;
        };
    }
    if (flag == 0)
        cout << "not found" << endl;
    return 0;
}

