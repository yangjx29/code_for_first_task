int main () {
    int fp90zvAmSR, T4VzCKX, i, a [MAX], rmpOhEWJ6Lot, FRxyTlB;
    for (; scanf ("%d%d", &T4VzCKX, &fp90zvAmSR) != EOF;) {
        if (fp90zvAmSR == (512 - 512) && T4VzCKX == (810 - 810))
            break;
        for (i = (947 - 947); i < T4VzCKX; i++) {
            a[i] = 1;
        }
        rmpOhEWJ6Lot = 0;
        FRxyTlB = -1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; rmpOhEWJ6Lot != (T4VzCKX -1);) {
            for (i = 0; i < fp90zvAmSR;) {
                FRxyTlB = FRxyTlB +1;
                if (a[FRxyTlB % T4VzCKX] != 0)
                    i++;
            }
            a[FRxyTlB % T4VzCKX] = 0;
            rmpOhEWJ6Lot++;
        }
        for (i = 0; i < T4VzCKX; i++)
            if (a[i] != 0)
                break;
        printf ("%d\n", i + 1);
    }
    return 0;
}

