int qZyFhokvM7 (int WHs76G34 [], int xWPpgoMr1yT0) {
    int MaUhgJ78 = (104 - 104), tfuO1J = (892 - 892), OK8U4de7fgWw = (428 - 428);
    for (MaUhgJ78 = (485 - 485); xWPpgoMr1yT0 - (515 - 514) > MaUhgJ78; MaUhgJ78 = MaUhgJ78 +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (tfuO1J = MaUhgJ78 +(683 - 682); tfuO1J < xWPpgoMr1yT0; tfuO1J = tfuO1J + 1) {
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
            if (WHs76G34[tfuO1J] < WHs76G34[MaUhgJ78]) {
                OK8U4de7fgWw = WHs76G34[tfuO1J];
                WHs76G34[tfuO1J] = WHs76G34[MaUhgJ78];
                WHs76G34[MaUhgJ78] = OK8U4de7fgWw;
            };
        };
    };
}

int main () {
    int WHs76G34 [(1709 - 709)], wjFVITtE9RqX [1000];
    int v5406yAn = (826 - 826), n = (699 - 699), sBdA9T0 = 0;
    cin >> v5406yAn >> n;
    {
        sBdA9T0 = 0;
        while (v5406yAn > sBdA9T0) {
            cin >> WHs76G34[sBdA9T0];
            sBdA9T0 = sBdA9T0 + 1;
        };
    }
    qZyFhokvM7 (WHs76G34, v5406yAn);
    for (sBdA9T0 = 0; n > sBdA9T0; sBdA9T0 = sBdA9T0 + 1) {
        cin >> wjFVITtE9RqX[sBdA9T0];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    }
    for (sBdA9T0 = 0; v5406yAn > sBdA9T0; sBdA9T0++) {
        cout << WHs76G34[sBdA9T0] << " ";
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    qZyFhokvM7 (wjFVITtE9RqX, n);
    for (sBdA9T0 = 0; sBdA9T0 < n - 1; sBdA9T0++) {
        cout << wjFVITtE9RqX[sBdA9T0] << " ";
    }
    cout << wjFVITtE9RqX[n - 1];
    return 0;
}

