int QCs89fOX (int lRZjF7ku, int n) {
    if (lRZjF7ku == (368 - 367) || n == (342 - 341) || lRZjF7ku == (343 - 343))
        return (452 - 451);
    if (lRZjF7ku < n)
        return QCs89fOX (lRZjF7ku, lRZjF7ku);
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
    return QCs89fOX (lRZjF7ku - n, n) + QCs89fOX (lRZjF7ku, n - 1);
}

int main (void ) {
    int n;
    int lRZjF7ku;
    int z;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d", &z);
    for (; z-- > (991 - 991);) {
        scanf ("%d%d", &lRZjF7ku, &n);
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
        printf ("%d\n", QCs89fOX (lRZjF7ku, n));
    }
    return 0;
}

