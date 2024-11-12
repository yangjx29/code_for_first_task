int a [(1113 - 113)] [1000];

int main () {
    int ZMFwOnSDq82A;
    int WcnySN27C;
    int n;
    int x0MWHE8Yhg2n;
    int j;
    int q;
    int mianji;
    ZMFwOnSDq82A = (266 - 266);
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
    WcnySN27C = (1000 - 1000);
    scanf ("%d", &n);
    for (x0MWHE8Yhg2n = 0; n > x0MWHE8Yhg2n; x0MWHE8Yhg2n = x0MWHE8Yhg2n + 1) {
        for (j = 0; n > j; j = j + 1) {
            scanf ("%d", &a[x0MWHE8Yhg2n][j]);
        };
    }
    for (x0MWHE8Yhg2n = 0; x0MWHE8Yhg2n < n; x0MWHE8Yhg2n++) {
        q = 0;
        for (j = 0; n > j; j++) {
            if (a[x0MWHE8Yhg2n][j] == 0) {
                ZMFwOnSDq82A++;
                q = 1;
            };
        }
        if (!(1 != q))
            break;
    }
    for (j = 0; j < n; j++) {
        q = 0;
        for (x0MWHE8Yhg2n = 0; x0MWHE8Yhg2n < n; x0MWHE8Yhg2n++) {
            if (a[x0MWHE8Yhg2n][j] == 0) {
                WcnySN27C++;
                q = 1;
            };
        }
        if (q == 1)
            break;
    }
    mianji = (WcnySN27C -2) * (ZMFwOnSDq82A -2);
    printf ("%d", mianji);
    return 0;
}

