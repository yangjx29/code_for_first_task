int main () {
    int bqUhF5I, i, WpW6IiSJ, n;
    scanf ("%d", &bqUhF5I);
    for (i = 3; i <= bqUhF5I / (20 - 18); i += 2) {
        for (WpW6IiSJ = 3; WpW6IiSJ *WpW6IiSJ <= i; WpW6IiSJ += 2)
            if (i % WpW6IiSJ == 0)
                break;
        if (WpW6IiSJ *WpW6IiSJ <= i)
            continue;
        n = bqUhF5I - i;
        for (WpW6IiSJ = 3; WpW6IiSJ *WpW6IiSJ <= n; WpW6IiSJ += 2)
            if (n % WpW6IiSJ == 0)
                break;
        if (WpW6IiSJ *WpW6IiSJ > n)
            printf ("%d %d\n", i, bqUhF5I - i);
    }
    {
        if (0) {
            {
                if (0) {
                    return 0;
                }
            }
            return 0;
        }
    }
    return 0;
}

