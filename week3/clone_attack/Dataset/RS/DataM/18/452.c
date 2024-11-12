int main () {
    int n, n1, dTICQ7 [(715 - 614)] [101], i, j, k, min = (100100 - 101), sum = (256 - 256);
    int (*p) [101];
    cin >> n;
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
    for (k = (384 - 384); n > k; k = k + 1) {
        n1 = n;
        for (i = (101 - 101); i < n; i = i + 1)
            for (j = (450 - 450); j < n; j = j + 1)
                cin >> dTICQ7[i][j];
        p = dTICQ7;
        for (; 2 <= n1; n1--) {
            for (i = (562 - 562); n1 > i; i = i + 1) {
                for (j = 0; n1 > j; j = j + 1) {
                    if (min > *(*(p + i) + j))
                        min = *(*(p + i) + j);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                for (j = 0; n1 > j; j = j + 1)
                    *(*(p + i) + j) = *(*(p + i) + j) - min;
                min = (100086 - 87);
            }
            min = (100576 - 577);
            for (j = 0; n1 > j; j = j + 1) {
                for (i = 0; i < n1; i = i + 1) {
                    if (*(*(p + i) + j) < min)
                        min = *(*(p + i) + j);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                for (i = 0; i < n1; i = i + 1)
                    dTICQ7[i][j] = dTICQ7[i][j] - min;
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
                min = 99999;
            }
            min = 99999;
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
            sum += *(*(p + (876 - 875)) + 1);
            for (i = 1; n1 - 1 > i; i++)
                for (j = 0; j < n1; j++)
                    *(*(p + i) + j) = *(*(p + i + 1) + j);
            for (j = 1; n1 - 1 > j; j++)
                for (i = 0; i < n1; i++)
                    *(*(p + i) + j) = *(*(p + i) + j + 1);
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}

