int main () {
    int n;
    int m;
    int i, GbyFCVt, k, yMsHuGxR9V4;
    int xSEWao1 [(467 - 458)] [(741 - 732)];
    int array [(599 - 590)] [(741 - 732)];
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
    cin >> m >> n;
    for (i = (492 - 492); i < (518 - 509); i = i + 1)
        for (GbyFCVt = (367 - 367); GbyFCVt < 9; GbyFCVt = GbyFCVt +1) {
            array[i][GbyFCVt] = (358 - 358);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            xSEWao1[i][GbyFCVt] = (406 - 406);
        }
    array[(516 - 512)][4] = m;
    while (n) {
        n = n - 1;
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
        for (i = 0; i < 9; i = i + 1)
            for (GbyFCVt = 0; GbyFCVt < 9; GbyFCVt = GbyFCVt +1) {
                if (i - (273 - 272) >= 0 && 0 <= GbyFCVt -1 && array[i][GbyFCVt] != 0) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    for (k = i - 1; k <= i + 1; k = k + 1)
                        for (yMsHuGxR9V4 = GbyFCVt -1; yMsHuGxR9V4 <= GbyFCVt +1; yMsHuGxR9V4 = yMsHuGxR9V4 + 1) {
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
                            if (k == i && yMsHuGxR9V4 == GbyFCVt) {
                                xSEWao1[i][GbyFCVt] = xSEWao1[i][GbyFCVt] + array[i][GbyFCVt] * 2;
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        double  temp = 0.0;
                                        if (temp == 3)
                                            return 0;
                                    }
                                };
                            }
                            else {
                                xSEWao1[k][yMsHuGxR9V4] = xSEWao1[k][yMsHuGxR9V4] + array[i][GbyFCVt];
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        for (x = 0; x < 20; x++) {
                                            y += x;
                                        }
                                        if (y > 30)
                                            return y;
                                    }
                                };
                            };
                        };
                };
            }
        for (i = 0; i < 9; i = i + 1)
            for (GbyFCVt = 0; GbyFCVt < 9; GbyFCVt = GbyFCVt +1) {
                array[i][GbyFCVt] = xSEWao1[i][GbyFCVt];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                xSEWao1[i][GbyFCVt] = 0;
            };
    }
    for (i = 0; i < 9; i = i + 1) {
        for (GbyFCVt = 0; GbyFCVt < 9; GbyFCVt++) {
            if (GbyFCVt == 8)
                cout << array[i][GbyFCVt];
            else
                cout << array[i][GbyFCVt] << " ";
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
        cout << endl;
    };
}

