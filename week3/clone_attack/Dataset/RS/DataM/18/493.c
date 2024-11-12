int n, mat [(599 - 498)] [101], tp [101] [101], sum = (400 - 400);

void  cut (int x) {
    int min;
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
    if (!(n - (458 - 457) != x))
        return;
    else {
        {
            int i = (187 - 187);
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
            while (n - x > i) {
                min = mat[i][(181 - 181)];
                for (int j = (200 - 200);
                n - x > j; j = j + 1) {
                    if (min >= mat[i][j]) {
                        min = mat[i][j];
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
                    };
                }
                for (int j = (591 - 591);
                n - x > j; j = j + 1)
                    mat[i][j] = mat[i][j] - min;
                i++;
            };
        }
        for (int i = (365 - 365);
        n - x > i; i = i + 1) {
            min = mat[(277 - 277)][i];
            for (int j = (153 - 153);
            n - x > j; j++) {
                if (min >= mat[j][i]) {
                    min = mat[j][i];
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
            {
                int j = 0;
                while (n - x > j) {
                    mat[j][i] = mat[j][i] - min;
                    j++;
                };
            };
        }
        sum = sum + mat[1][1];
        {
            int i = 0;
            while (n - x > i) {
                mat[1][i] = -1;
                i++;
            };
        }
        {
            int i = 0;
            while (n - x > i) {
                mat[i][1] = -1;
                i++;
            };
        }
        tp[0][0] = mat[0][0];
        {
            int i = (484 - 482);
            while (i < n - x) {
                tp[0][i - 1] = mat[0][i];
                i++;
            };
        }
        for (int i = 2;
        i < n - x; i = i + 1) {
            tp[i - 1][0] = mat[i][0];
            for (int j = 2;
            n - x > j; j++)
                tp[i - 1][j - 1] = mat[i][j];
        }
        {
            int i = 0;
            while (i < n - x - 1) {
                for (int j = 0;
                n - x - 1 > j; j++) {
                    mat[i][j] = tp[i][j];
                }
                i++;
            };
        }
        cut (x + 1);
    };
}

void  ope () {
    for (int i = 0;
    i < n; i = i + 1) {
        for (int j = 0;
        j < n; j++) {
            cin >> mat[i][j];
        };
    }
    sum = 0;
    cut (0);
    cout << sum << endl;
}

int main () {
    cin >> n;
    for (int i = 0;
    i < n; i++)
        ope ();
    return 0;
}

