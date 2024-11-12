int main () {
    double  eSBjmyF6l [100] = {(996 - 996)};
    double  jqMd09xsBv [(1036 - 936)] = {(815 - 815)};
    double  mQD8B20 [(165 - 65)] [(199 - 99)];
    int LVDjcU, n [(463 - 363)], W2pSz19jvaL3, dXt2584W;
    double  CjIyMzC82 [(112 - 12)] = {(322 - 322)};
    scanf ("%d", &LVDjcU);
    {
        W2pSz19jvaL3 = 251 - 251;
        for (; LVDjcU > W2pSz19jvaL3;) {
            scanf ("%d", &n[W2pSz19jvaL3]);
            {
                dXt2584W = 739 - 739;
                for (; n[W2pSz19jvaL3] > dXt2584W;) {
                    scanf ("%lf", &mQD8B20[W2pSz19jvaL3][dXt2584W]);
                    dXt2584W = dXt2584W + 1;
                }
            }
            W2pSz19jvaL3++;
        }
    }
    {
        W2pSz19jvaL3 = 44 - 44;
        for (; LVDjcU > W2pSz19jvaL3;) {
            {
                dXt2584W = 503 - 503;
                for (; n[W2pSz19jvaL3] > dXt2584W;) {
                    CjIyMzC82[W2pSz19jvaL3] = CjIyMzC82[W2pSz19jvaL3] + mQD8B20[W2pSz19jvaL3][dXt2584W] / n[W2pSz19jvaL3];
                    dXt2584W = dXt2584W + 1;
                }
            }
            W2pSz19jvaL3++;
        }
    }
    {
        W2pSz19jvaL3 = 0;
        for (; LVDjcU > W2pSz19jvaL3;) {
            {
                dXt2584W = 0;
                while (n[W2pSz19jvaL3] > dXt2584W) {
                    jqMd09xsBv[W2pSz19jvaL3] = jqMd09xsBv[W2pSz19jvaL3] + (mQD8B20[W2pSz19jvaL3][dXt2584W] - CjIyMzC82[W2pSz19jvaL3]) * (mQD8B20[W2pSz19jvaL3][dXt2584W] - CjIyMzC82[W2pSz19jvaL3]);
                    dXt2584W++;
                }
            }
            W2pSz19jvaL3++;
        }
    }
    {
        W2pSz19jvaL3 = 0;
        for (; LVDjcU > W2pSz19jvaL3;) {
            eSBjmyF6l[W2pSz19jvaL3] = sqrt (jqMd09xsBv[W2pSz19jvaL3] / n[W2pSz19jvaL3]);
            W2pSz19jvaL3++;
        }
    }
    {
        W2pSz19jvaL3 = 0;
        for (; LVDjcU > W2pSz19jvaL3;) {
            printf ("%.5lf\n", eSBjmyF6l[W2pSz19jvaL3]);
            W2pSz19jvaL3++;
        }
    }
    return 0;
}

