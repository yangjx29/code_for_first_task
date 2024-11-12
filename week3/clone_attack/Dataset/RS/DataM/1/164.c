int ys (int xkTr0Z4, int bf) {
    int s;
    if (xkTr0Z4 < bf)
        s = (247 - 247);
    if (!(bf != xkTr0Z4))
        s = (419 - 418);
    if (bf < xkTr0Z4) {
        s = (444 - 443);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            int i = xkTr0Z4 / (398 - 396);
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
            while (i >= bf) {
                if (xkTr0Z4 % i == (202 - 202)) {
                    s += ys (xkTr0Z4 / i, i);
                }
                i--;
            };
        };
    }
    return s;
}

int main () {
    int n;
    int meU1b5gm7;
    cin >> n;
    while (cin >> meU1b5gm7) {
        cout << ys (meU1b5gm7, (98 - 96)) << endl;
    }
    return 0;
}

