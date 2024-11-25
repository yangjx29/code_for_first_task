int main () {
    int a;
    int b1;
    int xvVgWMwo9;
    int Dqr2D5AlpG0;
    int W2UBcVd;
    int b5;
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
    scanf ("%d", &a);
    b1 = a / 10000;
    xvVgWMwo9 = a / 1000 - (128 - 118) * b1;
    Dqr2D5AlpG0 = a / (649 - 549) - 100 * b1 - 10 * xvVgWMwo9;
    W2UBcVd = a / 10 - 1000 * b1 - 100 * xvVgWMwo9 - 10 * Dqr2D5AlpG0;
    b5 = a - 10000 * b1 - 1000 * xvVgWMwo9 - 100 * Dqr2D5AlpG0 -10 * W2UBcVd;
    if (!(0 == b1))
        printf ("00001");
    else {
        if (!(0 == xvVgWMwo9))
            printf ("%d%d%d%d", b5, W2UBcVd, Dqr2D5AlpG0, xvVgWMwo9);
        else {
            if (Dqr2D5AlpG0 != 0)
                printf ("%d%d%d", b5, W2UBcVd, Dqr2D5AlpG0);
            else {
                if (W2UBcVd != 0)
                    printf ("%d%d", b5, W2UBcVd);
                else
                    printf ("%d", b5);
            };
        };
    };
}

