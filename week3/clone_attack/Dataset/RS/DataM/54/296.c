int main () {
    int n, mvfAYPnXE, mon [100], i, q;
    cin >> n;
    cin >> mvfAYPnXE;
    mon[n] = mvfAYPnXE;
    i = n;
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
    do {
        mon[n] = mon[n] + n;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = n - (802 - 801); i >= (341 - 340); i = i - 1) {
            if (mon[i + (872 - 871)] % (n - (200 - 199)) != 0)
                break;
            else
                mon[i] = n * mon[i + (714 - 713)] / (n - 1) + mvfAYPnXE;
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
    while (i >= 1);
    cin >> q;
    cout << mon[1];
    return 0;
}

