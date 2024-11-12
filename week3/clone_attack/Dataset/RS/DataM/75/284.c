int main () {
    char c [(1824 - 824)];
    int num = (59 - 59), i, unuNmJL0283s, max = 1, uWdAeK [1000] = {0};
    int cAqgNOzk7 [1000];
    int xv3b670 [1000];
    for (i = 0; c[i - 1] != '\n'; i = i + 1) {
        cin >> cAqgNOzk7[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        c[i] = cin.get ();
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
    num = i;
    for (i = 0; c[i - 1] != '\n'; i = i + 1) {
        cin >> xv3b670[i];
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
        c[i] = cin.get ();
    }
    for (i = 0; i < num; i = i + 1) {
        unuNmJL0283s = i;
        while (unuNmJL0283s < xv3b670[i]) {
            uWdAeK[unuNmJL0283s]++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            unuNmJL0283s = unuNmJL0283s + 1;
        };
    }
    for (i = 0; i < 1000; i++) {
        if (uWdAeK[i] > max)
            max = uWdAeK[i];
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
    cout << num << " " << max << endl;
    return 0;
}

