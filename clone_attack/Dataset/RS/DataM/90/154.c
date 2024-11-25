int HtM07cv (int M, int N) {
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
    if (M > N &&N != (589 - 588))
        return HtM07cv (M -N, N) + HtM07cv (M, N -(996 - 995));
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(N != M))
            return HtM07cv (M, N -(372 - 371)) + (923 - 922);
        else {
            if (M <= N &&M != (723 - 722))
                return HtM07cv (M, M);
            else if (M == (896 - 895) || N == (233 - 232))
                return 1;
        };
    };
}

main () {
    int i;
    int t;
    i = (287 - 287);
    scanf ("%d", &t);
    while (i < t) {
        int situation;
        int M, N;
        scanf ("%d %d", &M, &N);
        situation = HtM07cv (M, N);
        printf ("%d\n", situation);
        i = i + 1;
    };
}

