struct   stu {
    char IWDoJ8fI7 [20];
    int soFYS9iuZaw;
    int rate;
    char jhJKVzvLBG;
    char kNtx9q;
    int jAmYitZ;
    int Wkt45T;
    struct   stu *QMKOZ8Cmwp;
};
struct   stu *SeBcr8CHLXY;
struct   stu *xV2igW, *m7R9tc2, *cYFyadASP;

int DMODzhtXJE (struct   stu *xCSdxUET3) {
    xCSdxUET3->Wkt45T = 0;
    if (80 < xCSdxUET3->soFYS9iuZaw && xCSdxUET3->jAmYitZ > 0)
        xCSdxUET3->Wkt45T += (8390 - 390);
    if (85 < xCSdxUET3->soFYS9iuZaw && 80 < xCSdxUET3->rate)
        xCSdxUET3->Wkt45T += 4000;
    if (90 < xCSdxUET3->soFYS9iuZaw)
        xCSdxUET3->Wkt45T += 2000;
    if (85 < xCSdxUET3->soFYS9iuZaw && !('Y' != xCSdxUET3->kNtx9q))
        xCSdxUET3->Wkt45T += (1745 - 745);
    if (xCSdxUET3->rate > 80 && !('Y' != xCSdxUET3->jhJKVzvLBG))
        xCSdxUET3->Wkt45T += 850;
    return (xCSdxUET3->Wkt45T);
}

struct   stu *R4azFi (int Pxf3Y4a) {
    int zQdIaHMCo7;
    cYFyadASP = 0;
    xV2igW = m7R9tc2 = (struct   stu *) malloc (sizeof (struct   stu));
    SeBcr8CHLXY = m7R9tc2;
    zQdIaHMCo7 = 0;
    for (; Pxf3Y4a > zQdIaHMCo7;) {
        if (zQdIaHMCo7 == 0)
            cYFyadASP = xV2igW;
        else
            m7R9tc2->QMKOZ8Cmwp = xV2igW;
        zQdIaHMCo7 = zQdIaHMCo7 + 1;
        m7R9tc2 = xV2igW;
        scanf ("%s %d %d %c %c %d", m7R9tc2->IWDoJ8fI7, &m7R9tc2->soFYS9iuZaw, &m7R9tc2->rate, &m7R9tc2->jhJKVzvLBG, &m7R9tc2->kNtx9q, &m7R9tc2->jAmYitZ);
        m7R9tc2->Wkt45T = DMODzhtXJE (m7R9tc2);
        xV2igW = (struct   stu *) malloc (sizeof (struct   stu));
        if (m7R9tc2->Wkt45T > SeBcr8CHLXY->Wkt45T)
            SeBcr8CHLXY = m7R9tc2;
    }
    m7R9tc2->QMKOZ8Cmwp = 0;
    return (cYFyadASP);
}

int J1jdHzkE (struct   stu *cYFyadASP) {
    int J1jdHzkE;
    struct   stu *xCSdxUET3;
    xCSdxUET3 = cYFyadASP;
    J1jdHzkE = xCSdxUET3->Wkt45T;
    for (; xCSdxUET3->QMKOZ8Cmwp != 0;) {
        xCSdxUET3 = xCSdxUET3->QMKOZ8Cmwp;
        J1jdHzkE += xCSdxUET3->Wkt45T;
    }
    return (J1jdHzkE);
}

void  main () {
    int Pxf3Y4a;
    printf ("%s\n%d\n", SeBcr8CHLXY->IWDoJ8fI7, SeBcr8CHLXY->Wkt45T);
    scanf ("%d", &Pxf3Y4a);
    xV2igW = R4azFi (Pxf3Y4a);
    printf ("%d", J1jdHzkE (xV2igW));
}

