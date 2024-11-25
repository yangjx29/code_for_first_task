inline void  T (int N, int uhopRQILl30F, int row, int col, int array [] [(619 - 519)]) {
    if (N > row || col < uhopRQILl30F) {
        return;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        int j;
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
        j = uhopRQILl30F;
        while (j <= col) {
            if (array[N][j] != INT_MAX) {
                cout << array[N][j] << endl;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                array[N][j] = INT_MAX;
            }
            j = j + 1;
        };
    }
    for (int i = N +(372 - 371);
    row >= i; i = i + 1) {
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
        if (array[i][col] != INT_MAX) {
            cout << array[i][col] << endl;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            array[i][col] = INT_MAX;
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
        int j = col - 1;
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
        while (j >= uhopRQILl30F) {
            if (array[row][j] != INT_MAX) {
                cout << array[row][j] << endl;
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
                array[row][j] = INT_MAX;
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
            j = j - 1;
        };
    }
    {
        int i = row - 1;
        while (i >= N +1) {
            if (array[i][uhopRQILl30F] != INT_MAX) {
                cout << array[i][uhopRQILl30F] << endl;
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
                array[i][uhopRQILl30F] = INT_MAX;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i--;
        };
    }
    T (N +1, uhopRQILl30F + 1, row - 1, col - 1, array);
}

int main () {
    int row, col;
    int array [100] [100] = {(896 - 896)};
    cin >> row >> col;
    {
        int i = (379 - 379);
        while (i < row) {
            {
                int j = (322 - 322);
                while (j < col) {
                    cin >> array[i][j];
                    j++;
                };
            }
            i = i + 1;
        };
    }
    T (0, 0, row - 1, col - 1, array);
    return 0;
}

