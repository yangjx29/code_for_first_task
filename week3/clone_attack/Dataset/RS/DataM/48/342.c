int bac0 [(451 - 441)] [(95 - 85)];
int MXrvZJOK [(714 - 704)] [10];
int UEHqZg7, n;

void  kOQPzeXaNU () {
    {
        int i = (925 - 924);
        while (10 > i) {
            {
                int j = (382 - 381);
                while (10 > j) {
                    bac0[i][j] = 0;
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
            i++;
        };
    }
    bac0[5][5] = UEHqZg7;
    return;
}

void  zygvYJtKC () {
    {
        int i = 1;
        while (10 > i) {
            {
                int j = 1;
                while (10 > j) {
                    MXrvZJOK[i][j] = 0;
                    j++;
                };
            }
            i++;
        };
    }
    return;
}

void  born (int dmilIQ8J6, int b) {
    MXrvZJOK[dmilIQ8J6][b] += (bac0[dmilIQ8J6][b] * 2);
    if (dmilIQ8J6 - 1 >= 1) {
        MXrvZJOK[dmilIQ8J6 - 1][b] = MXrvZJOK[dmilIQ8J6 - 1][b] + bac0[dmilIQ8J6][b];
        if (1 <= b - 1)
            MXrvZJOK[dmilIQ8J6 - 1][b - 1] = MXrvZJOK[dmilIQ8J6 - 1][b - 1] + bac0[dmilIQ8J6][b];
        if (9 >= b + 1)
            MXrvZJOK[dmilIQ8J6 - 1][b + 1] = MXrvZJOK[dmilIQ8J6 - 1][b + 1] + bac0[dmilIQ8J6][b];
    }
    if (9 >= dmilIQ8J6 + 1) {
        MXrvZJOK[dmilIQ8J6 + 1][b] = MXrvZJOK[dmilIQ8J6 + 1][b] + bac0[dmilIQ8J6][b];
        if (b - 1 >= 1)
            MXrvZJOK[dmilIQ8J6 + 1][b - 1] = MXrvZJOK[dmilIQ8J6 + 1][b - 1] + bac0[dmilIQ8J6][b];
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
        if (9 >= b + 1)
            MXrvZJOK[dmilIQ8J6 + 1][b + 1] = MXrvZJOK[dmilIQ8J6 + 1][b + 1] + bac0[dmilIQ8J6][b];
    }
    if (b - 1 >= 1)
        MXrvZJOK[dmilIQ8J6][b - 1] += bac0[dmilIQ8J6][b];
    if (9 >= b + 1)
        MXrvZJOK[dmilIQ8J6][b + 1] = MXrvZJOK[dmilIQ8J6][b + 1] + bac0[dmilIQ8J6][b];
    return;
}

void  update () {
    for (int i = 1;
    i <= 9; i = i + 1) {
        int j = 1;
        while (j <= 9) {
            bac0[i][j] = MXrvZJOK[i][j];
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
    }
    return;
}

void  BXYAeI () {
    zygvYJtKC ();
    {
        int i = 1;
        while (i < 10) {
            {
                int j = 1;
                while (j < 10) {
                    if (bac0[i][j] != 0) {
                        born (i, j);
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
            i++;
        };
    }
    update ();
    return;
}

void  y5u3edEON () {
    {
        int i = 1;
        while (i <= 9) {
            cout << bac0[i][1];
            {
                int j = 2;
                while (j <= 9) {
                    cout << " " << bac0[i][j];
                    j++;
                };
            }
            i++;
            cout << endl;
        };
    }
    return;
}

int main () {
    cin >> UEHqZg7 >> n;
    kOQPzeXaNU ();
    for (int i = 0;
    i < n; i++) {
        BXYAeI ();
    }
    y5u3edEON ();
    return 0;
}

