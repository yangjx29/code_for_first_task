int main () {
    int a [301];
    int N, M, i, hI5M0Gfs, leave;
    for (; (72 - 71);) {
        scanf ("%d %d", &N, &M);
        if (N == 0 && M == 0)
            break;
        for (i = 1; i <= N; i = i + 1)
            a[i] = i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        hI5M0Gfs = 1;
        while (1) {
            if (N == 1)
                break;
            leave = (hI5M0Gfs + M -1) % N;
            if (leave == 0) {
                leave = N;
                hI5M0Gfs = 1;
            }
            else
                hI5M0Gfs = leave;
            for (i = leave; i < N; i++)
                a[i] = a[i + 1];
            N--;
        }
        printf ("%d\n", a[1]);
    }
    return 0;
}

