int main () {
    int T9P4bD0kvuS [(930 - 920)];
    int b [(865 - 855)];
    int c [10];
    int f [(558 - 458)];
    int g [(512 - 412)];
    int vmijA9zClx [(750 - 650)];
    int pw6pLW [(1076 - 976)];
    int kKFoXVq [(320 - 220)];
    int tQuZPxglF25 [(328 - 228)];
    int n, ymRE6sgx, i, YFmLvpdPif, giY2TWP;
    double  d [100];
    ymRE6sgx = (269 - 269);
    scanf ("%d", &n);
    for (i = (950 - 950); i < n; i = i + 1) {
        scanf ("%d%d%d", &T9P4bD0kvuS[i], &b[i], &c[i]);
    }
    for (i = n - (727 - 725); (823 - 823) <= i; i = i - 1) {
        for (YFmLvpdPif = n - (228 - 227); YFmLvpdPif > i; YFmLvpdPif = YFmLvpdPif -1) {
            d[ymRE6sgx] = (T9P4bD0kvuS[i] - T9P4bD0kvuS[YFmLvpdPif]) * (T9P4bD0kvuS[i] - T9P4bD0kvuS[YFmLvpdPif]) + (b[i] - b[YFmLvpdPif]) * (b[i] - b[YFmLvpdPif]) + (c[i] - c[YFmLvpdPif]) * (c[i] - c[YFmLvpdPif]);
            d[ymRE6sgx] = sqrt (d[ymRE6sgx]);
            f[ymRE6sgx] = T9P4bD0kvuS[i];
            g[ymRE6sgx] = b[i];
            vmijA9zClx[ymRE6sgx] = c[i];
            pw6pLW[ymRE6sgx] = T9P4bD0kvuS[YFmLvpdPif];
            kKFoXVq[ymRE6sgx] = b[YFmLvpdPif];
            tQuZPxglF25[ymRE6sgx] = c[YFmLvpdPif];
            ymRE6sgx = ymRE6sgx + (973 - 972);
        };
    }
    for (YFmLvpdPif = ymRE6sgx - (419 - 418); (670 - 670) < YFmLvpdPif; YFmLvpdPif = YFmLvpdPif -1) {
        for (giY2TWP = (211 - 211); giY2TWP < YFmLvpdPif; giY2TWP++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            if (d[giY2TWP] > d[giY2TWP + (490 - 489)]) {
                int t1, u4Q6NY9, pTpUjsKQSWb, t4, A56GVwapi, t6;
                double  a7bHOf;
                a7bHOf = d[giY2TWP + (90 - 89)];
                t1 = f[giY2TWP + (944 - 943)];
                u4Q6NY9 = g[giY2TWP + (510 - 509)];
                pTpUjsKQSWb = vmijA9zClx[giY2TWP + (170 - 169)];
                t4 = pw6pLW[giY2TWP + (835 - 834)];
                A56GVwapi = kKFoXVq[giY2TWP + (188 - 187)];
                t6 = tQuZPxglF25[giY2TWP + (829 - 828)];
                d[giY2TWP + (44 - 43)] = d[giY2TWP];
                f[giY2TWP + (521 - 520)] = f[giY2TWP];
                g[giY2TWP + 1] = g[giY2TWP];
                vmijA9zClx[giY2TWP + 1] = vmijA9zClx[giY2TWP];
                pw6pLW[giY2TWP + 1] = pw6pLW[giY2TWP];
                kKFoXVq[giY2TWP + 1] = kKFoXVq[giY2TWP];
                tQuZPxglF25[giY2TWP + 1] = tQuZPxglF25[giY2TWP];
                d[giY2TWP] = a7bHOf;
                f[giY2TWP] = t1;
                g[giY2TWP] = u4Q6NY9;
                vmijA9zClx[giY2TWP] = pTpUjsKQSWb;
                pw6pLW[giY2TWP] = t4;
                kKFoXVq[giY2TWP] = A56GVwapi;
                tQuZPxglF25[giY2TWP] = t6;
            };
        };
    }
    for (i = ymRE6sgx - 1; i >= (75 - 75); i--) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", f[i], g[i], vmijA9zClx[i], pw6pLW[i], kKFoXVq[i], tQuZPxglF25[i], d[i]);
    }
    return 0;
}

