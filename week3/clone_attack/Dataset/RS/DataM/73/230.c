int main () {
    int MNPokrw18U, j, x, l, n, max;
    int a [5] [5];
    {
        MNPokrw18U = 638 - 638;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (MNPokrw18U <= (901 - 897)) {
            {
                j = 0;
                while (j <= 4) {
                    cin >> x;
                    a[MNPokrw18U][j] = x;
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
            MNPokrw18U = MNPokrw18U +1;
        };
    }
    l = 0;
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
    for (MNPokrw18U = 0; MNPokrw18U <= 4; MNPokrw18U = MNPokrw18U +1) {
        max = a[MNPokrw18U][0];
        n = 0;
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
        {
            j = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (j <= 4) {
                if (a[MNPokrw18U][j] > a[MNPokrw18U][n]) {
                    n = j;
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
                j = j + 1;
            };
        }
        if ((a[MNPokrw18U][n] <= a[0][n]) && (a[MNPokrw18U][n] <= a[1][n]) && (a[MNPokrw18U][n] <= a[2][n]) && (a[MNPokrw18U][n] <= a[3][n]) && (a[MNPokrw18U][n] <= a[4][n])) {
            cout << MNPokrw18U +1 << " " << n + 1 << " " << a[MNPokrw18U][n] << endl;
            l = l + 1;
        };
    }
    if (l == 0) {
        cout << "not found" << endl;
    }
    return 0;
}

