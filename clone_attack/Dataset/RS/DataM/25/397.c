int main () {
    int N;
    int HDoULk [33] = {(577 - 576)};
    int rUg9kWca7TR [33] = {0};
    cin >> N;
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
    {
        int xpcngS8e6P = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (xpcngS8e6P < N) {
            xpcngS8e6P++;
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
            {
                int wyAe7vjn = 0;
                while (wyAe7vjn < 32) {
                    HDoULk[wyAe7vjn] = 2 * HDoULk[wyAe7vjn] + rUg9kWca7TR[wyAe7vjn];
                    if (HDoULk[wyAe7vjn] > 9) {
                        HDoULk[wyAe7vjn] = HDoULk[wyAe7vjn] - 10;
                        rUg9kWca7TR[wyAe7vjn + 1] = 1;
                    }
                    else
                        rUg9kWca7TR[wyAe7vjn + 1] = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    wyAe7vjn++;
                };
            };
        };
    }
    for (int xpcngS8e6P = 31, urtG7Wg = 0;
    xpcngS8e6P >= 0; xpcngS8e6P--) {
        if (HDoULk[xpcngS8e6P] != 0)
            urtG7Wg = 1;
        if (urtG7Wg == 1)
            cout << HDoULk[xpcngS8e6P];
    }
    cout << endl;
    return 0;
}

