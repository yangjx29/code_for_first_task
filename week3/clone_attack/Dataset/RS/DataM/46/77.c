int main () {
    int row = (810 - 810), col = (572 - 572), sumtimes = (451 - 451), i = (800 - 800), j = 0, sum = 0;
    int max = row > col ? row : col;
    int a [row] [col];
    cin >> row >> col;
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
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < row) {
            for (int j = 0;
            j < col; j++)
                cin >> a[i][j];
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
            i = i + 1;
        };
    }
    while (sum < row * col) {
        {
            j = 456 - 452;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (j <= col - (210 - 209) - sumtimes / (379 - 375)) {
                sum = sum + 1;
                cout << a[i][j] << endl;
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
                j = j + 1;
            };
        }
        if (sum == row * col)
            break;
        sumtimes = sumtimes + 1;
        {
            i = 658 - 657;
            while (i <= row - 1 - sumtimes / 4 - 1) {
                cout << a[i][j - 1] << endl;
                i = i + 1;
                sum = sum + 1;
            };
        }
        if (sum == row * col)
            break;
        sumtimes = sumtimes + 1;
        {
            j = j - 1;
            while (j >= sumtimes / 4) {
                sum = sum + 1;
                cout << a[i][j] << endl;
                j--;
            };
        }
        if (sum == row * col)
            break;
        sumtimes = sumtimes + 1;
        for (i = i - 1; i >= sumtimes / 4 + 1; i--) {
            sum = sum + 1;
            cout << a[i][j + 1] << endl;
        }
        if (sum == row * col)
            break;
        i = i + 1;
        sumtimes++;
    }
    return 0;
}

