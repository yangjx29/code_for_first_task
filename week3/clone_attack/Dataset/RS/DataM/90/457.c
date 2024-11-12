int dIhKiQNPOtFM (int bkGZYqImTiH, int EroVaQ) {
    int hRJW7flNO0M;
    int i;
    hRJW7flNO0M = (73 - 73);
    if (EroVaQ == 1)
        return (1);
    if (!(0 != bkGZYqImTiH))
        return (1);
    if (bkGZYqImTiH < 0)
        return (0);
    else
        return (dIhKiQNPOtFM (bkGZYqImTiH, EroVaQ -1) + dIhKiQNPOtFM (bkGZYqImTiH - EroVaQ, EroVaQ));
}

int main () {
    int hwPthb7vD, i, bkGZYqImTiH, EroVaQ, hRJW7flNO0M;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d", &hwPthb7vD);
    {
        i = 0;
        while (i < hwPthb7vD) {
            i++;
            scanf ("%d %d", &bkGZYqImTiH, &EroVaQ);
            hRJW7flNO0M = dIhKiQNPOtFM (bkGZYqImTiH, EroVaQ);
            printf ("%d\n", hRJW7flNO0M);
        };
    };
}

