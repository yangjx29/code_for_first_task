int main () {
    int x1;
    int H0VrhKyLanO;
    int x2;
    int y2;
    int i;
    int j;
    int t;
    int ssTHYzgk92 [x1] [H0VrhKyLanO];
    int b [x2] [y2];
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
    int c [x1] [y2];
    cin >> x1 >> H0VrhKyLanO;
    {
        i = 692 - 692;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x1 - (559 - 558) >= i) {
            {
                j = 197 - 197;
                while (H0VrhKyLanO -(768 - 767) >= j) {
                    cin >> ssTHYzgk92[i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> x2 >> y2;
    for (i = 0; i <= x2 - 1; i++) {
        j = 0;
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
        while (y2 - 1 >= j) {
            cin >> b[i][j];
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
    for (i = 0; x1 - 1 >= i; i++) {
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
        while (y2 - 1 >= j) {
            c[i][j] = 0;
            j++;
        };
    }
    {
        i = 0;
        while (i <= x1 - 1) {
            for (j = 0; j <= y2 - 1; j = j + 1) {
                for (t = 0; t <= H0VrhKyLanO -1; t++)
                    c[i][j] = ssTHYzgk92[i][t] * b[t][j] + c[i][j];
            }
            i = i + 1;
        };
    }
    for (i = 0; i <= x1 - 1; i++) {
        j = 0;
        while (j <= y2 - 1) {
            if (j == y2 - 1)
                cout << c[i][j] << endl;
            else
                cout << c[i][j] << " ";
            j++;
        };
    }
    return 0;
}

