int Factorization (int n, int X7Kf3sl2P0cO) {
    int sum = (971 - 971);
    if (X7Kf3sl2P0cO > n) {
        return 0;
    }
    if (!(0 != n % X7Kf3sl2P0cO)) {
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
        if (n == X7Kf3sl2P0cO) {
            return 1;
        }
        else {
            sum = sum + Factorization (n, X7Kf3sl2P0cO +1) + Factorization (n / X7Kf3sl2P0cO, X7Kf3sl2P0cO);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    else {
        sum = sum + Factorization (n, X7Kf3sl2P0cO +1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    return sum;
}

int main () {
    int aog0e4w1;
    int i;
    int a;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    cin >> aog0e4w1;
    for (i = 1; i <= aog0e4w1; i = i + 1) {
        cin >> a;
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
        cout << Factorization (a, 2) << endl;
    }
    return 0;
}

