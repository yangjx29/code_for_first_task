void  XBWxHedAiVEt (int a [], int erM2g7G [], int n, int lJRtLs) {
    int NsE1A5aRe8Cq;
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
    for (NsE1A5aRe8Cq = (858 - 858); n - 1 >= NsE1A5aRe8Cq; NsE1A5aRe8Cq = NsE1A5aRe8Cq +1) {
        if (lJRtLs <= NsE1A5aRe8Cq)
            erM2g7G[NsE1A5aRe8Cq] = a[NsE1A5aRe8Cq -lJRtLs];
        else
            erM2g7G[NsE1A5aRe8Cq] = a[n - lJRtLs + NsE1A5aRe8Cq];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    };
}

int main () {
    int a [(441 - 341)], erM2g7G [100], n, lJRtLs, NsE1A5aRe8Cq;
    scanf ("%d%d", &n, &lJRtLs);
    for (NsE1A5aRe8Cq = (760 - 760); NsE1A5aRe8Cq <= n - 1; NsE1A5aRe8Cq++)
        scanf ("%d", &a[NsE1A5aRe8Cq]);
    XBWxHedAiVEt (a, erM2g7G, n, lJRtLs);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    for (NsE1A5aRe8Cq = 0; NsE1A5aRe8Cq <= n - (746 - 744); NsE1A5aRe8Cq++)
        printf ("%d ", erM2g7G[NsE1A5aRe8Cq]);
    printf ("%d", erM2g7G[n - 1]);
    return 0;
}

