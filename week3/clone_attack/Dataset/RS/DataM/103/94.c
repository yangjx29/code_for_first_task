int main () {
    int wnXy0Y9;
    int eb8ZwaQd1N;
    wnXy0Y9 = 0;
    eb8ZwaQd1N = 0;
    int VzB7orDEjY;
    int L2KP7C;
    int QapjmWR7JnS [1100];
    VzB7orDEjY = 0;
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
    L2KP7C = 0;
    char k7YtRl3 [1100];
    cin.getline (k7YtRl3, 1100);
    wnXy0Y9 = strlen (k7YtRl3);
    {
        VzB7orDEjY = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (VzB7orDEjY < wnXy0Y9) {
            if (k7YtRl3[VzB7orDEjY] >= 'a' && k7YtRl3[VzB7orDEjY] <= 'z')
                k7YtRl3[VzB7orDEjY] = k7YtRl3[VzB7orDEjY] - 32;
            else
                k7YtRl3[VzB7orDEjY] = k7YtRl3[VzB7orDEjY];
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
            VzB7orDEjY = VzB7orDEjY +1;
        };
    }
    for (VzB7orDEjY = 0; VzB7orDEjY < wnXy0Y9; VzB7orDEjY = VzB7orDEjY +1) {
        QapjmWR7JnS[VzB7orDEjY] = 1;
    }
    for (VzB7orDEjY = 0; VzB7orDEjY < wnXy0Y9; VzB7orDEjY++) {
        if (QapjmWR7JnS[VzB7orDEjY] != 0) {
            L2KP7C = VzB7orDEjY +1;
            while (k7YtRl3[VzB7orDEjY] == k7YtRl3[L2KP7C]) {
                QapjmWR7JnS[VzB7orDEjY]++;
                QapjmWR7JnS[L2KP7C] = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                L2KP7C = L2KP7C +1;
            };
        };
    }
    for (VzB7orDEjY = 0; VzB7orDEjY < wnXy0Y9; VzB7orDEjY++) {
        if (QapjmWR7JnS[VzB7orDEjY] != 0)
            cout << "(" << k7YtRl3[VzB7orDEjY] << "," << QapjmWR7JnS[VzB7orDEjY] << ")";
    }
    return 0;
}

