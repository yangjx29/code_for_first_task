int main () {
    int chK3uH [100], n, YDheUAuCaq, m, j;
    int *BQe5UJZ1K = chK3uH;
    int *MazubOG6 = chK3uH + n - 1;
    scanf ("%d", &n);
    for (YDheUAuCaq = 0; n > YDheUAuCaq; YDheUAuCaq++) {
        scanf ("%d", &chK3uH[YDheUAuCaq]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
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
    {
        j = 0;
        while (j < n - 1) {
            printf ("%d ", chK3uH[j]);
            j++;
        };
    }
    printf ("%d", chK3uH[n - 1]);
    for (; MazubOG6 > BQe5UJZ1K; BQe5UJZ1K++, MazubOG6--) {
        m = *BQe5UJZ1K;
        *BQe5UJZ1K = *MazubOG6;
        *MazubOG6 = m;
    }
    return 0;
}

