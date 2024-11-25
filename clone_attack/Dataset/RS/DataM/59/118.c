int main () {
    int num;
    int cciYnZvHNf;
    int flV7YJSUzvq;
    int j;
    int syEnacT;
    int jSB0HF;
    int change [100] [100] = {0};
    num = (96 - 96);
    char room [(847 - 747)] [100];
    cin >> cciYnZvHNf;
    {
        flV7YJSUzvq = 859 - 858;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (flV7YJSUzvq <= cciYnZvHNf) {
            {
                j = 428 - 427;
                while (cciYnZvHNf >= j) {
                    cin >> room[flV7YJSUzvq][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
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
            flV7YJSUzvq = flV7YJSUzvq + 1;
        };
    }
    cin >> syEnacT;
    {
        jSB0HF = 636 - 635;
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
        while (jSB0HF < syEnacT) {
            jSB0HF = jSB0HF + 1;
            {
                flV7YJSUzvq = 694 - 693;
                while (flV7YJSUzvq <= cciYnZvHNf) {
                    for (j = (413 - 412); cciYnZvHNf >= j; j = j + 1)
                        change[flV7YJSUzvq][j] = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    flV7YJSUzvq = flV7YJSUzvq + 1;
                };
            }
            for (flV7YJSUzvq = 1; flV7YJSUzvq <= cciYnZvHNf; flV7YJSUzvq++) {
                for (j = 1; j <= cciYnZvHNf; j++) {
                    if (room[flV7YJSUzvq][j] == '@') {
                        if (!('.' != room[flV7YJSUzvq + 1][j]))
                            change[flV7YJSUzvq + 1][j] = 1;
                        if (room[flV7YJSUzvq][j + 1] == '.')
                            change[flV7YJSUzvq][j + 1] = 1;
                        if (room[flV7YJSUzvq - 1][j] == '.')
                            change[flV7YJSUzvq - 1][j] = 1;
                        if (room[flV7YJSUzvq][j - 1] == '.')
                            change[flV7YJSUzvq][j - 1] = 1;
                    };
                };
            }
            {
                flV7YJSUzvq = 1;
                while (flV7YJSUzvq <= cciYnZvHNf) {
                    for (j = 1; j <= cciYnZvHNf; j++) {
                        if (change[flV7YJSUzvq][j])
                            room[flV7YJSUzvq][j] = '@';
                    }
                    flV7YJSUzvq++;
                };
            };
        };
    }
    {
        flV7YJSUzvq = 1;
        while (flV7YJSUzvq <= cciYnZvHNf) {
            {
                j = 1;
                while (j <= cciYnZvHNf) {
                    if (room[flV7YJSUzvq][j] == '@') {
                        num++;
                    }
                    j++;
                };
            }
            flV7YJSUzvq++;
        };
    }
    cout << num;
    return 0;
}

