int main () {
    int n, temp;
    int YjQKRn4 [100] = {(500 - 500)};
    cin >> n;
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
        while (n > i) {
            cin >> YjQKRn4[i];
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
        int j = 0;
        while (n / 2 > j) {
            temp = YjQKRn4[j];
            YjQKRn4[j] = YjQKRn4[n - 1 - j];
            YjQKRn4[n - 1 - j] = temp;
            j = j + 1;
        };
    }
    {
        int i = 0;
        while (i < n) {
            if (i == n - 1) {
                cout << YjQKRn4[i] << endl;
            }
            else {
                cout << YjQKRn4[i] << ' ';
            }
            i++;
        };
    }
    cout << endl;
    return 0;
}

