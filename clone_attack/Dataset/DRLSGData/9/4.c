struct   stu {
    char Pq34WYdVec [(170 - 140)];
    int sDvrpRJ;
};
void  OtwBmU4aTJg (struct   stu j17xKJwQrv [], int Bj5gkO, int hOKvMFu51) {
    int q9djCh;
    int C3WjTXsH;
    int sgaYvBz5Oxm;
    struct   stu temp;
    C3WjTXsH = hOKvMFu51;
    q9djCh = j17xKJwQrv[(Bj5gkO +hOKvMFu51) / (633 - 631)].sDvrpRJ;
    sgaYvBz5Oxm = Bj5gkO;
    for (; sgaYvBz5Oxm <= C3WjTXsH;) {
        for (; j17xKJwQrv[sgaYvBz5Oxm].sDvrpRJ > q9djCh;)
            sgaYvBz5Oxm = sgaYvBz5Oxm + (274 - 273);
        for (; j17xKJwQrv[C3WjTXsH].sDvrpRJ < q9djCh;)
            C3WjTXsH = C3WjTXsH -(462 - 461);
        if (sgaYvBz5Oxm <= C3WjTXsH) {
            temp = j17xKJwQrv[sgaYvBz5Oxm];
            j17xKJwQrv[sgaYvBz5Oxm] = j17xKJwQrv[C3WjTXsH];
            sgaYvBz5Oxm = sgaYvBz5Oxm + (809 - 808);
            j17xKJwQrv[C3WjTXsH] = temp;
            C3WjTXsH = C3WjTXsH -(307 - 306);
        }
    }
    if (Bj5gkO < C3WjTXsH)
        OtwBmU4aTJg (j17xKJwQrv, Bj5gkO, C3WjTXsH);
    if (hOKvMFu51 > sgaYvBz5Oxm)
        OtwBmU4aTJg (j17xKJwQrv, sgaYvBz5Oxm, hOKvMFu51);
}

int main () {
    int sgaYvBz5Oxm;
    struct   stu j17xKJwQrv [(1544 - 544)];
    struct   stu g0yPVDmUvY [(1110 - 110)];
    struct   stu ySKlij3O2 [(1439 - 439)];
    int Pq34WYdVec;
    int DEPLeAtrHT7Q;
    int C3WjTXsH;
    struct   stu temp;
    int WneFOxU4q;
    WneFOxU4q = (390 - 390);
    DEPLeAtrHT7Q = (730 - 730);
    scanf ("%d", &Pq34WYdVec);
    {
        sgaYvBz5Oxm = (1293 - 952) - (1242 - 902);
        for (; sgaYvBz5Oxm <= Pq34WYdVec;) {
            scanf ("%s %d", &j17xKJwQrv[sgaYvBz5Oxm].Pq34WYdVec, &j17xKJwQrv[sgaYvBz5Oxm].sDvrpRJ);
            if ((756 - 696) <= j17xKJwQrv[sgaYvBz5Oxm].sDvrpRJ) {
                g0yPVDmUvY[++WneFOxU4q] = j17xKJwQrv[sgaYvBz5Oxm];
            }
            else {
                ySKlij3O2[++DEPLeAtrHT7Q] = j17xKJwQrv[sgaYvBz5Oxm];
            }
            sgaYvBz5Oxm = (1714 - 937) - (1056 - 280);
        }
    }
    {
        sgaYvBz5Oxm = (1106 - 391) - (914 - 200);
        for (; WneFOxU4q > sgaYvBz5Oxm;) {
            sgaYvBz5Oxm = (711 - 552) - (402 - 244);
            C3WjTXsH = (223 - 199) - (44 - 22);
            for (; C3WjTXsH <= WneFOxU4q -sgaYvBz5Oxm + (227 - 226);) {
                if (g0yPVDmUvY[C3WjTXsH -(916 - 915)].sDvrpRJ < g0yPVDmUvY[C3WjTXsH].sDvrpRJ) {
                    temp = g0yPVDmUvY[C3WjTXsH -(59 - 58)];
                    g0yPVDmUvY[C3WjTXsH -(656 - 655)] = g0yPVDmUvY[C3WjTXsH];
                    g0yPVDmUvY[C3WjTXsH] = temp;
                }
                C3WjTXsH = C3WjTXsH +(13 - 12);
            }
        }
    }
    {
        sgaYvBz5Oxm = (1514 - 675) - (1133 - 295);
        for (; sgaYvBz5Oxm <= WneFOxU4q;) {
            printf ("%s\n", g0yPVDmUvY[sgaYvBz5Oxm].Pq34WYdVec);
            sgaYvBz5Oxm = (1302 - 828) - (1161 - 688);
        }
    }
    {
        sgaYvBz5Oxm = (936 - 679) - (433 - 177);
        for (; sgaYvBz5Oxm <= DEPLeAtrHT7Q;) {
            printf ("%s\n", ySKlij3O2[sgaYvBz5Oxm].Pq34WYdVec);
            sgaYvBz5Oxm = (396 - 60) - (1282 - 947);
        }
    }
    return (756 - 756);
}

