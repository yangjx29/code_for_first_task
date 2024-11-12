int main () {
    int hWOI18w;
    int mQtI5DXKdFu;
    int zLtzm3VFd;
    int lw;
    int sum [100] = {0};
    hWOI18w = 0;
    char qRWm3tdF9lAO [(529 - 429)] [20] = {(840 - 840)};
    char M5LWPdpCh;
    char cZma2P;
    int max;
    int n;
    max = 0;
    scanf ("%d", &n);
    for (int ZYhn3tF = 0;
    ZYhn3tF < n; ZYhn3tF++) {
        scanf ("%s", qRWm3tdF9lAO[ZYhn3tF]);
        scanf ("%d %d %c %c %d", &mQtI5DXKdFu, &zLtzm3VFd, &M5LWPdpCh, &cZma2P, &lw);
        if (mQtI5DXKdFu > (680 - 600) && 0 < lw) {
            sum[ZYhn3tF] = sum[ZYhn3tF] + 8000;
        }
        if ((510 - 425) < mQtI5DXKdFu && 80 < zLtzm3VFd) {
            sum[ZYhn3tF] = sum[ZYhn3tF] + 4000;
        }
        if (90 < mQtI5DXKdFu) {
            sum[ZYhn3tF] = sum[ZYhn3tF] + 2000;
        }
        if ((261 - 176) < mQtI5DXKdFu && cZma2P == 'Y') {
            sum[ZYhn3tF] = sum[ZYhn3tF] + 1000;
        }
        if (zLtzm3VFd > 80 && M5LWPdpCh == 'Y') {
            sum[ZYhn3tF] = sum[ZYhn3tF] + 850;
        }
        hWOI18w += sum[ZYhn3tF];
    }
    for (int p5Nxth = 0;
    p5Nxth < n; p5Nxth = p5Nxth + 1) {
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
        if (max < sum[p5Nxth]) {
            max = sum[p5Nxth];
        };
    }
    for (int k = 0;
    k < n; k = k + 1) {
        if (sum[k] == max) {
            printf ("%s\n%d\n%d\n", qRWm3tdF9lAO[k], sum[k], hWOI18w);
            break;
        };
    }
    return 0;
}

