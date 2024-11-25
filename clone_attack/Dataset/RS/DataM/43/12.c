int main () {
    int n;
    int r1IDctQJy5A;
    int b;
    int i;
    int k;
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
    cin >> n;
    {
        r1IDctQJy5A = 156 - 154;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (r1IDctQJy5A <= (n / 2)) {
            int eDeI3oKzL;
            eDeI3oKzL = 0;
            b = n - r1IDctQJy5A;
            for (i = 2; i <= sqrt (r1IDctQJy5A); i = i + 1) {
                if (r1IDctQJy5A % i == 0)
                    eDeI3oKzL = 1;
            }
            for (k = 2; k <= sqrt (b); k++) {
                if (b % k == 0)
                    eDeI3oKzL = 1;
            }
            if (eDeI3oKzL == 0)
                cout << r1IDctQJy5A << " " << b << endl;
            r1IDctQJy5A = r1IDctQJy5A + 1;
        };
    }
    return 0;
}

