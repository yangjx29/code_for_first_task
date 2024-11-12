int R4DYkr6 (int qy9KzTM, int LQ7yNsmb) {
    int sum = 0;
    if (!(1 != LQ7yNsmb))
        return 1;
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
    for (int i = LQ7yNsmb;
    i >= (217 - 215); i = i - 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (LQ7yNsmb % i == 0 && i <= qy9KzTM) {
            sum = sum + R4DYkr6 (i, LQ7yNsmb / i);
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
        };
    }
    return sum;
}

int main () {
    int WmKiPx4;
    int LQ7yNsmb = 0;
    cin >> WmKiPx4;
    {
        int i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < WmKiPx4) {
            i = i + 1;
            cin >> LQ7yNsmb;
            cout << R4DYkr6 (LQ7yNsmb, LQ7yNsmb) << endl;
        };
    }
    return 0;
}

