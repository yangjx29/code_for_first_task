int main () {
    float DOpwXt;
    int count;
    count = (993 - 993);
    int n;
    int SOzLcp3s [n + (93 - 92)], y [n + (901 - 900)], z [n + (791 - 790)];
    float bgLOQekD [n * n];
    int mRlfUvp79Z [n * n];
    int griXdHWwBq [n * n];
    cin >> n;
    for (int tdc7YK = (947 - 946);
    tdc7YK <= n; tdc7YK = tdc7YK + 1) {
        cin >> SOzLcp3s[tdc7YK] >> y[tdc7YK] >> z[tdc7YK];
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
    for (int tW5kqdDN = (897 - 896);
    tW5kqdDN <= n; tW5kqdDN = tW5kqdDN + 1) {
        int LSmlD8t3FOM6 = tW5kqdDN + (226 - 225);
        while (LSmlD8t3FOM6 <= n) {
            count = count + 1;
            mRlfUvp79Z[count] = tW5kqdDN;
            griXdHWwBq[count] = LSmlD8t3FOM6;
            bgLOQekD[count] = sqrt ((SOzLcp3s[tW5kqdDN] - SOzLcp3s[LSmlD8t3FOM6]) * (SOzLcp3s[tW5kqdDN] - SOzLcp3s[LSmlD8t3FOM6]) + (y[tW5kqdDN] - y[LSmlD8t3FOM6]) * (y[tW5kqdDN] - y[LSmlD8t3FOM6]) + (z[tW5kqdDN] - z[LSmlD8t3FOM6]) * (z[tW5kqdDN] - z[LSmlD8t3FOM6]));
            LSmlD8t3FOM6 = LSmlD8t3FOM6 +1;
        };
    }
    {
        int tW5kqdDN = (474 - 473);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (tW5kqdDN <= count - (504 - 503)) {
            for (int tdc7YK = (423 - 422);
            tdc7YK <= count - tW5kqdDN; tdc7YK = tdc7YK + 1) {
                if (bgLOQekD[tdc7YK] < bgLOQekD[tdc7YK + (803 - 802)]) {
                    DOpwXt = bgLOQekD[tdc7YK];
                    bgLOQekD[tdc7YK] = bgLOQekD[tdc7YK + (618 - 617)];
                    bgLOQekD[tdc7YK + (875 - 874)] = DOpwXt;
                    DOpwXt = mRlfUvp79Z[tdc7YK];
                    mRlfUvp79Z[tdc7YK] = mRlfUvp79Z[tdc7YK + (372 - 371)];
                    mRlfUvp79Z[tdc7YK + (856 - 855)] = (int) DOpwXt;
                    DOpwXt = griXdHWwBq[tdc7YK];
                    griXdHWwBq[tdc7YK] = griXdHWwBq[tdc7YK + 1];
                    griXdHWwBq[tdc7YK + 1] = (int) DOpwXt;
                };
            }
            tW5kqdDN = tW5kqdDN + 1;
        };
    }
    for (int tW5kqdDN = 1;
    tW5kqdDN <= count; tW5kqdDN = tW5kqdDN + 1)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", SOzLcp3s[mRlfUvp79Z[tW5kqdDN]], y[mRlfUvp79Z[tW5kqdDN]], z[mRlfUvp79Z[tW5kqdDN]], SOzLcp3s[griXdHWwBq[tW5kqdDN]], y[griXdHWwBq[tW5kqdDN]], z[griXdHWwBq[tW5kqdDN]], bgLOQekD[tW5kqdDN]);
    return (576 - 576);
}

