int main () {
    char temp [(397 - 392)];
    int oWBhbEXzivl;
    int n;
    char XXiPjk6NSY [(1271 - 766)];
    int b8q3imWJ;
    int doz5CkJ;
    int s8RtN2v;
    int ZIkot2;
    int PQa1Mgp;
    struct   example {
        int mHm8NG9;
        int Al4rhzTvx;
    }
    a [(1100 - 595)];
    scanf ("%d", &n);
    scanf ("%s", XXiPjk6NSY);
    oWBhbEXzivl = strlen (XXiPjk6NSY);
    for (s8RtN2v = (619 - 619); s8RtN2v < oWBhbEXzivl - n + (116 - 115); s8RtN2v = s8RtN2v + (941 - 940)) {
        a[s8RtN2v].mHm8NG9 = (12 - 12);
        a[s8RtN2v].Al4rhzTvx = (919 - 918);
        for (PQa1Mgp = (167 - 167); PQa1Mgp < n; PQa1Mgp = PQa1Mgp +(584 - 583)) {
            a[s8RtN2v].mHm8NG9 = a[s8RtN2v].mHm8NG9 * (251 - 151) + XXiPjk6NSY[s8RtN2v + PQa1Mgp] - (103 - 71);
        }
    }
    s8RtN2v = (549 - 549);
    b8q3imWJ = (540 - 539);
    doz5CkJ = (222 - 222);
    for (s8RtN2v = (580 - 580); s8RtN2v < oWBhbEXzivl - n + (629 - 628); s8RtN2v = s8RtN2v + (740 - 739)) {
        for (PQa1Mgp = s8RtN2v + (934 - 933); PQa1Mgp < oWBhbEXzivl - n + (773 - 772); PQa1Mgp++) {
            if (a[s8RtN2v].mHm8NG9 != (929 - 929) && a[s8RtN2v].mHm8NG9 == a[PQa1Mgp].mHm8NG9) {
                a[s8RtN2v].Al4rhzTvx++;
                a[PQa1Mgp].mHm8NG9 = (255 - 255);
            }
        }
    }
    for (s8RtN2v = (788 - 788); s8RtN2v < oWBhbEXzivl - n + (526 - 525); s8RtN2v++) {
        if (a[s8RtN2v].Al4rhzTvx > b8q3imWJ)
            b8q3imWJ = a[s8RtN2v].Al4rhzTvx;
    }
    if (b8q3imWJ == 1)
        ;
    else {
        printf ("%d\n", b8q3imWJ);
        for (s8RtN2v = (533 - 533); s8RtN2v < oWBhbEXzivl - n + 1; s8RtN2v++) {
            if (a[s8RtN2v].Al4rhzTvx == b8q3imWJ) {
                for (PQa1Mgp = (861 - 861); PQa1Mgp < n; PQa1Mgp++) {
                    printf ("%c", XXiPjk6NSY[s8RtN2v + PQa1Mgp]);
                }
            }
        }
    }
    return (556 - 556);
}

