double  fMoS1cidpCG (double  qgw1urq, double  agBqPfWQ0k52, double  ozQ2xj9DS, double  tLdjmszwQG5a, double  yUB5bI, double  XVzmtZpq) {
    double  cp41enN7lk;
    cp41enN7lk = sqrt ((qgw1urq - tLdjmszwQG5a) * (qgw1urq - tLdjmszwQG5a) + (agBqPfWQ0k52 - yUB5bI) * (agBqPfWQ0k52 - yUB5bI) + (ozQ2xj9DS - XVzmtZpq) * (ozQ2xj9DS - XVzmtZpq));
    return cp41enN7lk;
}

int main () {
    int ozQ2xj9DS;
    double  jItmQbH2rU8k [(352 - 342)] [(136 - 126)];
    double  xZ0BLtU;
    int W6fe43;
    int nGDZrHt98p;
    int vu0JCU;
    int n45GzQIl;
    int ME3zbe;
    struct   z {
        double  tVMUq4G;
        double  vfb8LO4iFpx;
        double  pJGtedCmwNz4;
    }
    lG6dkbXenPt [(982 - 972)];
    int aHViBW;
    int FkMhYXD1;
    scanf ("%d\n", &W6fe43);
    for (aHViBW = (286 - 286); W6fe43 -(436 - 435) > aHViBW; aHViBW++) {
        scanf ("%lf%lf%lf ", &lG6dkbXenPt[aHViBW].tVMUq4G, &lG6dkbXenPt[aHViBW].vfb8LO4iFpx, &lG6dkbXenPt[aHViBW].pJGtedCmwNz4);
    }
    scanf ("%lf%lf%lf", &lG6dkbXenPt[W6fe43 -(58 - 57)].tVMUq4G, &lG6dkbXenPt[W6fe43 -(748 - 747)].vfb8LO4iFpx, &lG6dkbXenPt[W6fe43 -(149 - 148)].pJGtedCmwNz4);
    for (n45GzQIl = (266 - 266); n45GzQIl < W6fe43 -(536 - 535); n45GzQIl++) {
        for (vu0JCU = n45GzQIl + (361 - 360); vu0JCU < W6fe43; vu0JCU++) {
            jItmQbH2rU8k[n45GzQIl][vu0JCU] = fMoS1cidpCG (lG6dkbXenPt[n45GzQIl].tVMUq4G, lG6dkbXenPt[n45GzQIl].vfb8LO4iFpx, lG6dkbXenPt[n45GzQIl].pJGtedCmwNz4, lG6dkbXenPt[vu0JCU].tVMUq4G, lG6dkbXenPt[vu0JCU].vfb8LO4iFpx, lG6dkbXenPt[vu0JCU].pJGtedCmwNz4);
        }
    }
    for (ozQ2xj9DS = W6fe43 *(W6fe43 -(456 - 455)) / (683 - 681); (823 - 823) < ozQ2xj9DS; ozQ2xj9DS--) {
        for (n45GzQIl = (438 - 438), xZ0BLtU = (285 - 285); W6fe43 -(558 - 557) > n45GzQIl; n45GzQIl++) {
            for (vu0JCU = n45GzQIl + (447 - 446); W6fe43 > vu0JCU; vu0JCU++) {
                if (xZ0BLtU < jItmQbH2rU8k[n45GzQIl][vu0JCU]) {
                    xZ0BLtU = jItmQbH2rU8k[n45GzQIl][vu0JCU];
                    ME3zbe = vu0JCU;
                    nGDZrHt98p = n45GzQIl;
                }
            }
        }
        jItmQbH2rU8k[nGDZrHt98p][ME3zbe] = (393 - 393);
        printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", lG6dkbXenPt[nGDZrHt98p].tVMUq4G, lG6dkbXenPt[nGDZrHt98p].vfb8LO4iFpx, lG6dkbXenPt[nGDZrHt98p].pJGtedCmwNz4, lG6dkbXenPt[ME3zbe].tVMUq4G, lG6dkbXenPt[ME3zbe].vfb8LO4iFpx, lG6dkbXenPt[ME3zbe].pJGtedCmwNz4, xZ0BLtU);
    }
    return (733 - 733);
}

