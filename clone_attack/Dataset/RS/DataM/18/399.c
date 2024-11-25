int prHUjw [100] [100];

int main () {
    void  G (int n);
    void  X (int n);
    int n, i, MMO0SfYWnDh, p6qrK9c, sum;
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
    cin >> n;
    for (p6qrK9c = 0; n > p6qrK9c; p6qrK9c = p6qrK9c + 1) {
        for (i = 0; i < n; i = i + 1) {
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
            for (MMO0SfYWnDh = 0; MMO0SfYWnDh < n; MMO0SfYWnDh = MMO0SfYWnDh +1) {
                cin >> prHUjw[i][MMO0SfYWnDh];
            };
        }
        sum = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = n; i >= 2; i = i - 1) {
            G (i);
            X (i);
            sum += prHUjw[1][1];
        }
        cout << sum << endl;
    }
    return 0;
}

void  G (int n) {
    int i, MMO0SfYWnDh, p;
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
    for (i = 0; i < n; i = i + 1) {
        p = prHUjw[i][0];
        for (MMO0SfYWnDh = 1; MMO0SfYWnDh < n; MMO0SfYWnDh = MMO0SfYWnDh +1) {
            if (prHUjw[i][MMO0SfYWnDh] < p)
                p = prHUjw[i][MMO0SfYWnDh];
        }
        for (MMO0SfYWnDh = 0; MMO0SfYWnDh < n; MMO0SfYWnDh = MMO0SfYWnDh +1)
            prHUjw[i][MMO0SfYWnDh] -= p;
    }
    for (i = 0; i < n; i = i + 1) {
        p = prHUjw[0][i];
        for (MMO0SfYWnDh = 1; MMO0SfYWnDh < n; MMO0SfYWnDh++) {
            if (prHUjw[MMO0SfYWnDh][i] < p)
                p = prHUjw[MMO0SfYWnDh][i];
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
            };
        }
        for (MMO0SfYWnDh = 0; MMO0SfYWnDh < n; MMO0SfYWnDh++)
            prHUjw[MMO0SfYWnDh][i] -= p;
    };
}

void  X (int n) {
    int i;
    int MMO0SfYWnDh;
    for (i = 1; i <= n - 1; i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (MMO0SfYWnDh = 1; MMO0SfYWnDh <= n - 1; MMO0SfYWnDh++) {
            prHUjw[i][MMO0SfYWnDh] = prHUjw[i + 1][MMO0SfYWnDh +1];
        };
    }
    for (i = 1; i <= n - 1; i++) {
        prHUjw[0][i] = prHUjw[0][i + 1];
        prHUjw[i][0] = prHUjw[i + 1][0];
    };
}

