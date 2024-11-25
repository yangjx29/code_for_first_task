int main () {
    int num;
    int kJkZ2K;
    int X17IORi;
    int r;
    cin >> num;
    {
        kJkZ2K = 3;
        while (kJkZ2K <= num / (128 - 126)) {
            {
                r = 2;
                while (r < kJkZ2K) {
                    if (!(kJkZ2K % r))
                        r = kJkZ2K;
                    r = r + 1;
                };
            }
            if (r == kJkZ2K) {
                X17IORi = num - kJkZ2K;
                {
                    r = 2;
                    while (r < X17IORi) {
                        if (!(X17IORi % r))
                            r = X17IORi;
                        r++;
                    };
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
            if (r == X17IORi)
                cout << kJkZ2K << ' ' << X17IORi << '\n';
            kJkZ2K += 2;
        };
    }
    return 0;
}

