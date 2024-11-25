int main (int DA6EVu0, char *TiwGbSH4B []) {
    int y6vf7ObnQXx, XrC5Bfx, i, x8sJKLpXgaY, t, Vph6DbZo8F, WXuAcnzLGZy, b2s0XjyHvV = 0;
    int mhTQHbB [8] [8], ApDrW1eak;
    scanf ("%d,%d", &y6vf7ObnQXx, &XrC5Bfx);
    for (i = 0; y6vf7ObnQXx > i; i = i + 1) {
        for (x8sJKLpXgaY = 0; x8sJKLpXgaY < XrC5Bfx; x8sJKLpXgaY = x8sJKLpXgaY + 1) {
            scanf ("%d", &mhTQHbB[i][x8sJKLpXgaY]);
        };
    }
    for (i = 0; i < y6vf7ObnQXx; i++) {
        t = 0;
        ApDrW1eak = 0;
        for (x8sJKLpXgaY = 0; x8sJKLpXgaY < XrC5Bfx; x8sJKLpXgaY++) {
            if (mhTQHbB[i][x8sJKLpXgaY] > ApDrW1eak) {
                ApDrW1eak = mhTQHbB[i][x8sJKLpXgaY];
                WXuAcnzLGZy = x8sJKLpXgaY;
            };
        }
        for (Vph6DbZo8F = 0; y6vf7ObnQXx > Vph6DbZo8F; Vph6DbZo8F++) {
            if (Vph6DbZo8F != i && mhTQHbB[Vph6DbZo8F][WXuAcnzLGZy] > ApDrW1eak)
                t += 1;
        }
        if (t == y6vf7ObnQXx - 1) {
            printf ("%d+%d", i, WXuAcnzLGZy);
            b2s0XjyHvV = 1;
        };
    }
    if (b2s0XjyHvV == 0)
        printf ("No");
    return 0;
}

