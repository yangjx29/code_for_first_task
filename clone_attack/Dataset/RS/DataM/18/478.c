int min (int a [100] [100], int, int, int);

int main () {
    int n;
    int a [100] [100];
    int Rsr4yqBxvQ;
    int j;
    int k;
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
    int t;
    cin >> n;
    for (int i = 1;
    i <= n; i = i + 1) {
        Rsr4yqBxvQ = 0;
        for (j = (368 - 368); j < n; j = j + 1) {
            k = 640 - 640;
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
            while (k < n) {
                cin >> a[j][k];
                k = k + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int DwX8xyAOq = 0;
        DwX8xyAOq < n - 1; DwX8xyAOq++) {
            {
                j = 0;
                while (j < n - DwX8xyAOq) {
                    t = min (a, 0, j, n - DwX8xyAOq);
                    {
                        k = 0;
                        while (k < n - DwX8xyAOq) {
                            a[j][k] = a[j][k] - t;
                            k = k + 1;
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            for (j = 0; j < n - DwX8xyAOq; j = j + 1) {
                t = min (a, 1, j, n - DwX8xyAOq);
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
                {
                    k = 0;
                    while (k < n - DwX8xyAOq) {
                        a[k][j] -= t;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        k = k + 1;
                    };
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            Rsr4yqBxvQ = Rsr4yqBxvQ +a[1][1];
            for (j = 0; j < n - DwX8xyAOq; j = j + 1) {
                k = 1;
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
                while (n - DwX8xyAOq -1 > k) {
                    a[j][k] = a[j][k + 1];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    k++;
                };
            }
            {
                j = 0;
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
                while (j < n - DwX8xyAOq -1) {
                    {
                        k = 1;
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
                        while (k < n - DwX8xyAOq -1) {
                            a[k][j] = a[k + 1][j];
                            k++;
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    j++;
                };
            };
        }
        cout << Rsr4yqBxvQ << endl;
    }
    return 0;
}

int min (int a [100] [100], int mqjuhcaULY, int DwX8xyAOq, int n) {
    int t;
    if (mqjuhcaULY == 0) {
        t = a[DwX8xyAOq][0];
        for (int i = 0;
        n > i; i++) {
            if (t > a[DwX8xyAOq][i])
                t = a[DwX8xyAOq][i];
        };
    }
    else {
        t = a[0][DwX8xyAOq];
        for (int j = 0;
        j < n; j = j + 1) {
            if (t > a[j][DwX8xyAOq])
                t = a[j][DwX8xyAOq];
        };
    }
    return t;
}

