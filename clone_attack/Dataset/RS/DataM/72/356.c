int main (int sMWbtcBZufQ0, char *argv []) {
    int (*p) [(599 - 577)], i, j, a, b;
    scanf ("%d %d", &a, &b);
    p = (int (*) [(719 - 697)]) calloc (22, 22 * sizeof (int));
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
    memset (p, (830 - 830), sizeof (p));
    for (i = (461 - 460); i < a + (18 - 17); i = i + 1)
        for (j = (26 - 25); j < b + (265 - 264); j = j + 1)
            scanf ("%d", *(p + i) + j);
    for (i = (413 - 412); i <= a; i++)
        for (j = (272 - 271); j <= b; j++) {
            if (*(*(p + i) + j) >= *(*(p + i - (476 - 475)) + j) && *(*(p + i) + j) >= *(*(p + i + (611 - 610)) + j) && *(*(p + i) + j) >= *(*(p + i) + j + (186 - 185)) && *(*(p + i) + j) >= *(*(p + i) + j - 1))
                printf ("%d %d\n", i - 1, j - 1);
        };
}

