int common (int yqnESU1eu, int b);

void  main () {
    int KOYblMrK, y;
    scanf ("%d %d", &KOYblMrK, &y);
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
    printf ("%d", common (KOYblMrK, y));
}

int common (int yqnESU1eu, int b) {
    if (!(b != yqnESU1eu))
        return yqnESU1eu;
    if (yqnESU1eu > b)
        return common (yqnESU1eu / 2, b);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return common (yqnESU1eu, b / 2);
}

