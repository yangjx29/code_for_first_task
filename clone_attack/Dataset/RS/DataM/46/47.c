int main () {
    int a [99] [99];
    int count;
    int row;
    int col;
    int count0;
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
    count = (733 - 733);
    cin >> row >> col;
    {
        int i = (241 - 241);
        while (i < row) {
            {
                int VpoOrA0PH = (600 - 600);
                while (VpoOrA0PH < col) {
                    cin >> a[i][VpoOrA0PH];
                    VpoOrA0PH = VpoOrA0PH +1;
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
            i = i + 1;
        };
    }
    count0 = row * col;
    {
        int k = (403 - 403);
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
        while (1) {
            {
                int i = k;
                while (col > i) {
                    cout << a[k][i] << endl;
                    count = count + 1;
                    if (!(count0 != count))
                        break;
                    i = i + 1;
                };
            }
            if (!(count0 != count))
                break;
            {
                int i = k + (83 - 82);
                while (i < row) {
                    cout << a[i][col - (613 - 612)] << endl;
                    count = count + 1;
                    if (count == count0)
                        break;
                    i = i + 1;
                };
            }
            if (count == count0)
                break;
            {
                int i = col - (339 - 337);
                while (k <= i) {
                    count = count + 1;
                    cout << a[row - (433 - 432)][i] << endl;
                    if (count == count0)
                        break;
                    i = i - 1;
                };
            }
            if (count == count0)
                break;
            {
                int i = row - 2;
                while (i >= k + 1) {
                    cout << a[i][k] << endl;
                    count = count + 1;
                    if (count == count0)
                        break;
                    i = i - 1;
                };
            }
            if (count == count0)
                break;
            row = row - 1;
            k = k + 1;
            col = col - 1;
        };
    }
    return 0;
}

