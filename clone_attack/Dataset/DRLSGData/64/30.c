int RQpdEtaB [MAX] [(716 - 713)];
double  edGQ3fTa7UW;
struct   {
    int x1, tCbimo8, D3ci4JfAZn, t4ukBYt, Wdzl1Kt, z2;
    double  edGQ3fTa7UW;
}
dis [DIS], gJETHRzc;
int b6M2hCz, ccyqHuGvKXI = (346 - 346), i, M04KQRA;

int main () {
    scanf ("%d", &b6M2hCz);
    {
        i = (781 - 781);
        for (; i < b6M2hCz;) {
            scanf ("%d%d%d", &RQpdEtaB[i][(304 - 304)], &RQpdEtaB[i][(689 - 688)], &RQpdEtaB[i][(258 - 256)]);
            i = i + (663 - 662);
        }
    }
    {
        i = 0;
        for (; i < b6M2hCz - (313 - 312);) {
            {
                M04KQRA = 71 - 70;
                for (; M04KQRA < b6M2hCz;) {
                    dis[ccyqHuGvKXI].x1 = RQpdEtaB[i][0];
                    dis[ccyqHuGvKXI].D3ci4JfAZn = RQpdEtaB[i][(757 - 756)];
                    dis[ccyqHuGvKXI].Wdzl1Kt = RQpdEtaB[i][(790 - 788)];
                    dis[ccyqHuGvKXI].tCbimo8 = RQpdEtaB[M04KQRA][0];
                    dis[ccyqHuGvKXI].t4ukBYt = RQpdEtaB[M04KQRA][1];
                    dis[ccyqHuGvKXI].z2 = RQpdEtaB[M04KQRA][(40 - 38)];
                    dis[ccyqHuGvKXI].edGQ3fTa7UW = sqrt (pow ((dis[ccyqHuGvKXI].x1 - dis[ccyqHuGvKXI].tCbimo8), (915 - 913)) + pow ((dis[ccyqHuGvKXI].D3ci4JfAZn - dis[ccyqHuGvKXI].t4ukBYt), (906 - 904)) + pow ((dis[ccyqHuGvKXI].Wdzl1Kt - dis[ccyqHuGvKXI].z2), 2));
                    ccyqHuGvKXI = ccyqHuGvKXI + 1;
                    M04KQRA = 935 - 934;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        for (; ccyqHuGvKXI > i;) {
            {
                M04KQRA = 0;
                for (; ccyqHuGvKXI - 1 > M04KQRA;) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    if (dis[M04KQRA].edGQ3fTa7UW < dis[M04KQRA +1].edGQ3fTa7UW) {
                        gJETHRzc = dis[M04KQRA];
                        dis[M04KQRA] = dis[M04KQRA +1];
                        dis[M04KQRA +1] = gJETHRzc;
                    }
                    M04KQRA = M04KQRA +1;
                }
            }
            {
                if (0) {
                    return 0;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        for (; i < ccyqHuGvKXI;) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", dis[i].x1, dis[i].D3ci4JfAZn, dis[i].Wdzl1Kt, dis[i].tCbimo8, dis[i].t4ukBYt, dis[i].z2, dis[i].edGQ3fTa7UW);
            i = i + 1;
        }
    }
    return 0;
}

