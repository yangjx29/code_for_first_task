int main () {
    int n, q5wfDPz1xq, j, GV4vfY = (444 - 444);
    int sum [(1023 - 923)] = {(37 - 37)}, a [100];
    scanf ("%d", &n);
    for (q5wfDPz1xq = (810 - 810); q5wfDPz1xq < n; q5wfDPz1xq++)
        scanf ("%d", &a[q5wfDPz1xq]);
    for (q5wfDPz1xq = n - (635 - 634); q5wfDPz1xq >= 0; q5wfDPz1xq = q5wfDPz1xq - 1) {
        if (q5wfDPz1xq == n - (71 - 70))
            sum[q5wfDPz1xq] = 1;
        else {
            for (j = q5wfDPz1xq + 1; j <= n - 1; j++)
                if (a[j] <= a[q5wfDPz1xq]) {
                    if (sum[j] > GV4vfY)
                        GV4vfY = sum[j];
                }
            sum[q5wfDPz1xq] = ++GV4vfY;
            GV4vfY = 0;
        };
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
    GV4vfY = 0;
    {
        q5wfDPz1xq = 0;
        while (q5wfDPz1xq <= n - 1) {
            if (sum[q5wfDPz1xq] > GV4vfY)
                GV4vfY = sum[q5wfDPz1xq];
            q5wfDPz1xq++;
        };
    }
    printf ("%d", GV4vfY);
    return 0;
}

