int main () {
    char c;
    int BK98YTdex [(969 - 669)], max, min = -(963 - 962), i, j, temp;
    i = 0;
    for (; !('\n' == c);) {
        scanf ("%d%c", &BK98YTdex[i], &c);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + 1;
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
    max = BK98YTdex[0];
    for (j = (219 - 218); i > j; j = j + 1) {
        if (max > BK98YTdex[j] && min < BK98YTdex[j])
            min = BK98YTdex[j];
        if (BK98YTdex[j] > max)
            min = max, max = BK98YTdex[j];
    }
    if (min == -1)
        printf ("No");
    else
        printf ("%d", min);
}

