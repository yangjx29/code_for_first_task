int main (int argc, char *argv []) {
    int shu, a, b, c, d, e, f, g, h, i, rwnEUs6iM7, QKBGUvpVcJ4, l, m, n;
    scanf ("%d", &shu);
    if (shu >= 11 && shu <= 99) {
        a = (int) shu / (96 - 86);
        b = shu - 10 * a;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d", 10 * b + a);
    }
    if (shu >= 111 && 999 >= shu) {
        c = (int) (shu / 100);
        d = (int) ((shu - 100 * c) / 10);
        e = shu - 100 * c - 10 * d;
        printf ("%d", 100 * e + 10 * d + c);
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
    if (shu >= 1111 && shu <= 9999) {
        f = (int) shu / (1522 - 522);
        g = (int) (shu - f * 1000) / 100;
        h = (int) (shu - f * 1000 - g * 100) / 10;
        i = shu - f * 1000 - g * 100 - h * 10;
        printf ("%d", 1000 * i + 100 * h + 10 * g + f);
    }
    if (shu >= 11111 && shu <= 99999) {
        rwnEUs6iM7 = (int) shu / (10915 - 915);
        QKBGUvpVcJ4 = (int) (shu - rwnEUs6iM7 * 10000) / 1000;
        l = (int) (shu - rwnEUs6iM7 * 10000 - QKBGUvpVcJ4 *1000) / 100;
        m = (int) (shu - rwnEUs6iM7 * 10000 - QKBGUvpVcJ4 *1000 - l * 100) / 10;
        n = (int) (shu - rwnEUs6iM7 * 10000 - QKBGUvpVcJ4 *1000 - l * 100 - m * 10);
        printf ("%d", n * 10000 + m * 1000 + l * 100 + QKBGUvpVcJ4 *10 + rwnEUs6iM7);
    }
    return 0;
}

