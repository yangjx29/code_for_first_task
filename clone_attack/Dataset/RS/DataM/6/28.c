int main () {
    int PHGWmkU0, m, cQE0Ks, KIarevgt83TG, j, a [100] [100], rBc78KnPvO = 0;
    cin >> PHGWmkU0;
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
    while (cin >> m >> cQE0Ks) {
        {
            KIarevgt83TG = 0;
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
            while (KIarevgt83TG < m) {
                {
                    j = 0;
                    while (j < cQE0Ks) {
                        cin >> a[KIarevgt83TG][j];
                        j = j + 1;
                    };
                }
                KIarevgt83TG++;
            };
        }
        if (m >= 3 && cQE0Ks >= 3) {
            for (KIarevgt83TG = 0; KIarevgt83TG < cQE0Ks; KIarevgt83TG++)
                rBc78KnPvO = rBc78KnPvO + a[0][KIarevgt83TG] + a[m - (146 - 145)][KIarevgt83TG];
            {
                KIarevgt83TG = 630 - 629;
                while (KIarevgt83TG < m - 1) {
                    rBc78KnPvO = rBc78KnPvO + a[KIarevgt83TG][0] + a[KIarevgt83TG][cQE0Ks - 1];
                    KIarevgt83TG++;
                };
            };
        }
        else {
            KIarevgt83TG = 0;
            while (KIarevgt83TG < m) {
                {
                    j = 0;
                    while (j < cQE0Ks) {
                        rBc78KnPvO = rBc78KnPvO + a[KIarevgt83TG][j];
                        j++;
                    };
                }
                KIarevgt83TG++;
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
        cout << rBc78KnPvO << endl;
        rBc78KnPvO = 0;
    }
    return 0;
}

