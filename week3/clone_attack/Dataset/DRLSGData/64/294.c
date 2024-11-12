struct   Line {
    int JElJeZAnu;
    int n2;
    double  lPEhn5DZz;
};
int main () {
    int YXsFiA, i, gpAa9YjdRne, k, p, mCU6VOH, t, q8w3EMWJXmfi [10] [3];
    double  h0emxiO8ly1K;
    double  num [10] [3];
    struct   Line srLRwbh [55];
    double  distance (double  RmMlreigu [3], double  h4v5x6JopS [3]);
    k = 0;
    scanf ("%d", &YXsFiA);
    {
        i = 0;
        for (; YXsFiA > i;) {
            scanf ("%lf%lf%lf", &num[i][0], &num[i][1], &num[i][2]);
            i = i + 1;
        }
    }
    {
        i = 0;
        for (; i < YXsFiA -1;) {
            {
                gpAa9YjdRne = i + 1;
                for (; gpAa9YjdRne < YXsFiA;) {
                    srLRwbh[k].lPEhn5DZz = distance (num[i], num[gpAa9YjdRne]);
                    srLRwbh[k].JElJeZAnu = i;
                    srLRwbh[k].n2 = gpAa9YjdRne;
                    k = k + 1;
                    gpAa9YjdRne = gpAa9YjdRne + 1;
                }
            }
            i = i + 1;
        }
    }
    for (i = 0; YXsFiA > i; i = i + 1) {
        q8w3EMWJXmfi[i][0] = (int) num[i][0];
        q8w3EMWJXmfi[i][1] = (int) num[i][1];
        q8w3EMWJXmfi[i][2] = (int) num[i][2];
    }
    {
        mCU6VOH = 1;
        for (; k > mCU6VOH;) {
            {
                p = 0;
                for (; p < k - mCU6VOH;) {
                    if (srLRwbh[p].lPEhn5DZz < srLRwbh[p + 1].lPEhn5DZz) {
                        t = srLRwbh[p].JElJeZAnu;
                        srLRwbh[p].JElJeZAnu = srLRwbh[p + 1].JElJeZAnu;
                        srLRwbh[p + 1].JElJeZAnu = t;
                        t = srLRwbh[p].n2;
                        srLRwbh[p].n2 = srLRwbh[p + 1].n2;
                        srLRwbh[p + 1].n2 = t;
                        h0emxiO8ly1K = srLRwbh[p].lPEhn5DZz;
                        srLRwbh[p].lPEhn5DZz = srLRwbh[p + 1].lPEhn5DZz;
                        srLRwbh[p + 1].lPEhn5DZz = h0emxiO8ly1K;
                    }
                    p = p + 1;
                }
            }
            mCU6VOH = mCU6VOH + 1;
        }
    }
    {
        i = 0;
        for (; i < k;) {
            p = srLRwbh[i].JElJeZAnu;
            mCU6VOH = srLRwbh[i].n2;
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", q8w3EMWJXmfi[p][0], q8w3EMWJXmfi[p][1], q8w3EMWJXmfi[p][2], q8w3EMWJXmfi[mCU6VOH][0], q8w3EMWJXmfi[mCU6VOH][1], q8w3EMWJXmfi[mCU6VOH][2], srLRwbh[i].lPEhn5DZz);
            i = i + 1;
        }
    }
    return 0;
}

double  distance (double  RmMlreigu [3], double  h4v5x6JopS [3]) {
    double  z7CfMN92m;
    z7CfMN92m = sqrt ((RmMlreigu[0] - h4v5x6JopS[0]) * (RmMlreigu[0] - h4v5x6JopS[0]) + (RmMlreigu[1] - h4v5x6JopS[1]) * (RmMlreigu[1] - h4v5x6JopS[1]) + (RmMlreigu[2] - h4v5x6JopS[2]) * (RmMlreigu[2] - h4v5x6JopS[2]));
    return z7CfMN92m;
}

