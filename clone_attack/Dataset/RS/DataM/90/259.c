int SKAd9e3ugZHB (int m, int vJdqhYtQUiX);

int main () {
    int num, i, p, q;
    scanf ("%d", &num);
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
    for (i = 1; num >= i; i++) {
        scanf ("%d%d", &p, &q);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", SKAd9e3ugZHB (p, q));
    }
    return (901 - 901);
}

int SKAd9e3ugZHB (int m, int vJdqhYtQUiX) {
    int sum = 0, j;
    if (!(0 != m))
        return 1;
    if (vJdqhYtQUiX > m)
        return SKAd9e3ugZHB (m, m);
    if (m >= vJdqhYtQUiX) {
        for (j = vJdqhYtQUiX; j > 0; j = j - 1)
            sum += SKAd9e3ugZHB (m - j, j);
        return sum;
    };
}

