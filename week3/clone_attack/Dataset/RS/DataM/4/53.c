int main () {
    int Hwrxnuh5f [100] [100];
    int sum;
    int i;
    int j;
    int row, col;
    scanf ("%d%d", &row, &col);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (row > i) {
            for (j = 0; col > j; j++) {
                scanf ("%d", &Hwrxnuh5f[i][j]);
            }
            i++;
        };
    }
    for (j = 0;;) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (col - 1 > j) {
            sum = j;
            {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (true) {
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
                    if (0 <= sum && row > j - sum) {
                        printf ("%d\n", Hwrxnuh5f[j - sum][sum]);
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        sum = sum - 1;
                    }
                    else {
                        break;
                    };
                };
            }
            j++;
        }
        else {
            break;
        };
    }
    for (i = 0;;) {
        if (row - 1 >= i) {
            sum = col - 1 + i;
            {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (true) {
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
                    if (sum >= 0 && col - 1 + i - sum < row) {
                        if (sum <= col - 1) {
                            printf ("%d\n", Hwrxnuh5f[col - 1 + i - sum][sum]);
                        }
                        sum--;
                    }
                    else {
                        break;
                    };
                };
            }
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
            i++;
        }
        else {
            break;
        };
    }
    return 0;
}

