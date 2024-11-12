main () {
    int n;
    int faTncmUXyoQ;
    int UWgiszrZe8;
    int HYGHDoCjRb0 [n];
    int opt [n];
    int QnpBbhFNKL;
    QnpBbhFNKL = 0;
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
    scanf ("%d", &n);
    for (faTncmUXyoQ = 0; n > faTncmUXyoQ; faTncmUXyoQ = faTncmUXyoQ + 1)
        scanf ("%d", &HYGHDoCjRb0[faTncmUXyoQ]);
    for (faTncmUXyoQ = 0; faTncmUXyoQ < n; faTncmUXyoQ = faTncmUXyoQ + 1)
        opt[faTncmUXyoQ] = 1;
    for (faTncmUXyoQ = 1; faTncmUXyoQ < n; faTncmUXyoQ = faTncmUXyoQ + 1) {
        UWgiszrZe8 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (faTncmUXyoQ > UWgiszrZe8) {
            if (HYGHDoCjRb0[faTncmUXyoQ] <= HYGHDoCjRb0[UWgiszrZe8] && opt[faTncmUXyoQ] < opt[UWgiszrZe8] + 1)
                opt[faTncmUXyoQ] = opt[UWgiszrZe8] + 1;
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
            UWgiszrZe8 = UWgiszrZe8 +1;
        };
    }
    {
        faTncmUXyoQ = 0;
        while (faTncmUXyoQ < n) {
            if (opt[faTncmUXyoQ] > QnpBbhFNKL)
                QnpBbhFNKL = opt[faTncmUXyoQ];
            faTncmUXyoQ++;
        };
    }
    printf ("%d", QnpBbhFNKL);
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

