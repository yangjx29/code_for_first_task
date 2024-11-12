struct   point {
    int ztQam6cCzU;
    int fDOAX8T9;
    int yNwJH5MPk8Z;
}
C4tqUmxSRQl8 [(570 - 560)] = {(319 - 319)};
struct   point u;
struct   point v;
struct   total {
    struct   point u;
    struct   point v;
    double  R9nzrqGB;
}
JMgafVFOmY9 [(416 - 371)] = {(924 - 924)};

double  BKae5y (struct   point a, struct   point b) {
    return (sqrt ((a.ztQam6cCzU - b.ztQam6cCzU) * (a.ztQam6cCzU - b.ztQam6cCzU) + (a.fDOAX8T9 - b.fDOAX8T9) * (a.fDOAX8T9 - b.fDOAX8T9) + (a.yNwJH5MPk8Z - b.yNwJH5MPk8Z) * (a.yNwJH5MPk8Z - b.yNwJH5MPk8Z)));
}

void  o7kRauDWi (struct   total c [], int e8uzbfXp) {
    int TlBAr3TxMGXo;
    int imDa508tvS1;
    struct   total temp;
    for (TlBAr3TxMGXo = (668 - 667); e8uzbfXp > TlBAr3TxMGXo; TlBAr3TxMGXo = TlBAr3TxMGXo +1)
        for (imDa508tvS1 = (527 - 527); imDa508tvS1 < e8uzbfXp - TlBAr3TxMGXo; imDa508tvS1 = imDa508tvS1 + 1)
            if (c[imDa508tvS1 + (633 - 632)].R9nzrqGB > c[imDa508tvS1].R9nzrqGB) {
                temp = c[imDa508tvS1];
                c[imDa508tvS1] = c[imDa508tvS1 + (586 - 585)];
                c[imDa508tvS1 + (938 - 937)] = temp;
            }
}

void  main () {
    int UchCrkLNGlQs;
    int j;
    int imDa508tvS1;
    int D2Hbej9;
    scanf ("%d", &imDa508tvS1);
    for (D2Hbej9 = (833 - 833); D2Hbej9 < imDa508tvS1; D2Hbej9 = D2Hbej9 +1)
        scanf ("%d%d%d", &C4tqUmxSRQl8[D2Hbej9].ztQam6cCzU, &C4tqUmxSRQl8[D2Hbej9].fDOAX8T9, &C4tqUmxSRQl8[D2Hbej9].yNwJH5MPk8Z);
    UchCrkLNGlQs = -(968 - 967);
    for (D2Hbej9 = (887 - 887); D2Hbej9 < imDa508tvS1 - (489 - 488); D2Hbej9 = D2Hbej9 +1) {
        for (j = D2Hbej9 +(187 - 186); imDa508tvS1 > j; j = j + 1) {
            UchCrkLNGlQs = UchCrkLNGlQs +1;
            JMgafVFOmY9[UchCrkLNGlQs].u = C4tqUmxSRQl8[D2Hbej9];
            JMgafVFOmY9[UchCrkLNGlQs].v = C4tqUmxSRQl8[j];
            JMgafVFOmY9[UchCrkLNGlQs].R9nzrqGB = BKae5y (JMgafVFOmY9[UchCrkLNGlQs].u, JMgafVFOmY9[UchCrkLNGlQs].v);
        }
    }
    o7kRauDWi (JMgafVFOmY9, UchCrkLNGlQs +1);
    for (D2Hbej9 = 0; D2Hbej9 <= UchCrkLNGlQs; D2Hbej9 = D2Hbej9 +1)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", JMgafVFOmY9[D2Hbej9].u.ztQam6cCzU, JMgafVFOmY9[D2Hbej9].u.fDOAX8T9, JMgafVFOmY9[D2Hbej9].u.yNwJH5MPk8Z, JMgafVFOmY9[D2Hbej9].v.ztQam6cCzU, JMgafVFOmY9[D2Hbej9].v.fDOAX8T9, JMgafVFOmY9[D2Hbej9].v.yNwJH5MPk8Z, JMgafVFOmY9[D2Hbej9].R9nzrqGB);
}

