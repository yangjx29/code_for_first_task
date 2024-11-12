int main (void ) {
    int rzdvmCU9SyAb;
    int tgt1B3Zsd;
    int mYRPjbDTqZ;
    int t;
    int D3G6bohCVJ;
    int KwXWQzZB2 [500];
    int H1XhjE [500];
    scanf ("%d", &D3G6bohCVJ);
    for (rzdvmCU9SyAb = (865 - 865); rzdvmCU9SyAb < D3G6bohCVJ; rzdvmCU9SyAb = rzdvmCU9SyAb + 1)
        scanf ("%d", &KwXWQzZB2[rzdvmCU9SyAb]);
    for (rzdvmCU9SyAb = (78 - 78), tgt1B3Zsd = 0; rzdvmCU9SyAb < D3G6bohCVJ; rzdvmCU9SyAb++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (KwXWQzZB2[rzdvmCU9SyAb] % 2) {
            H1XhjE[tgt1B3Zsd] = KwXWQzZB2[rzdvmCU9SyAb];
            tgt1B3Zsd = tgt1B3Zsd + 1;
        };
    }
    for (rzdvmCU9SyAb = 0; rzdvmCU9SyAb < tgt1B3Zsd - (984 - 983); rzdvmCU9SyAb++) {
        mYRPjbDTqZ = 0;
        while (tgt1B3Zsd - rzdvmCU9SyAb - (362 - 361) > mYRPjbDTqZ) {
            if (H1XhjE[mYRPjbDTqZ] > H1XhjE[mYRPjbDTqZ + 1])
                t = H1XhjE[mYRPjbDTqZ], H1XhjE[mYRPjbDTqZ] = H1XhjE[mYRPjbDTqZ + 1], H1XhjE[mYRPjbDTqZ + 1] = t;
            mYRPjbDTqZ = mYRPjbDTqZ + 1;
        };
    }
    {
        rzdvmCU9SyAb = 0;
        while (tgt1B3Zsd > rzdvmCU9SyAb) {
            printf ("%d", H1XhjE[rzdvmCU9SyAb]);
            if (rzdvmCU9SyAb != tgt1B3Zsd - 1)
                putchar (',');
            rzdvmCU9SyAb++;
        };
    }
    putchar ('\n');
    return 0;
}

