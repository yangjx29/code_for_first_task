int main () {
    int i, j, k;
    int la, c, d, sum;
    char a [500];
    cin.getline (a, 500);
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
    la = strlen (a);
    for (i = 2; la >= i; i = i + 2) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; la - i >= j; j = j + 1) {
            sum = 0;
            d = j;
            c = i + j - 1;
            do {
                if (a[d] != a[c]) {
                    sum = sum + 1;
                }
                c = c - 1;
                d = d + 1;
            }
            while (c > d);
            if (sum == 0) {
                {
                    k = j;
                    while (k <= i + j - 1) {
                        cout << a[k];
                        k = k + 1;
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                cout << endl;
            };
        };
    }
    return 0;
}

