int main () {
    int mVh5komz2Jd;
    mVh5komz2Jd = (845 - 845);
    int j;
    int c [(10477 - 477)];
    int b [(10033 - 33)];
    int P1y3pHoXWlw2;
    int GE94QKo;
    char ThK4JlvmI [(652 - 551)] [(501 - 400)];
    int EXVoum9ZUICf;
    int kdBPMIoDF0;
    int wMUunfc478yH;
    int t;
    scanf ("%d\n", &EXVoum9ZUICf);
    for (kdBPMIoDF0 = (138 - 138); kdBPMIoDF0 < EXVoum9ZUICf; kdBPMIoDF0 = kdBPMIoDF0 + 1) {
        scanf ("%s\n", ThK4JlvmI[kdBPMIoDF0]);
    }
    scanf ("%d", &wMUunfc478yH);
    for (kdBPMIoDF0 = (863 - 862); wMUunfc478yH > kdBPMIoDF0; kdBPMIoDF0 = kdBPMIoDF0 + 1) {
        GE94QKo = (592 - 592);
        for (t = (853 - 853); t < EXVoum9ZUICf; t++) {
            for (P1y3pHoXWlw2 = (379 - 379); P1y3pHoXWlw2 < EXVoum9ZUICf; P1y3pHoXWlw2++) {
                if (ThK4JlvmI[t][P1y3pHoXWlw2] == '@') {
                    c[GE94QKo] = t;
                    b[GE94QKo] = P1y3pHoXWlw2;
                    GE94QKo = GE94QKo +1;
                };
            };
        }
        for (j = (834 - 834); GE94QKo > j; j = j + 1) {
            if (!('#' == ThK4JlvmI[c[j] + (667 - 666)][b[j]]) && c[j] + (814 - 813) < EXVoum9ZUICf) {
                ThK4JlvmI[c[j] + (829 - 828)][b[j]] = '@';
            }
            if (ThK4JlvmI[c[j]][b[j] + (684 - 683)] != '#' && b[j] + (698 - 697) < EXVoum9ZUICf) {
                ThK4JlvmI[c[j]][b[j] + (881 - 880)] = '@';
            }
            if (ThK4JlvmI[c[j] - (574 - 573)][b[j]] != '#' && c[j] - (985 - 984) >= (956 - 956)) {
                ThK4JlvmI[c[j] - (740 - 739)][b[j]] = '@';
            }
            if (ThK4JlvmI[c[j]][b[j] - (683 - 682)] != '#' && b[j] - (540 - 539) >= (356 - 356)) {
                ThK4JlvmI[c[j]][b[j] - (789 - 788)] = '@';
            };
        };
    }
    for (kdBPMIoDF0 = (870 - 870); kdBPMIoDF0 < EXVoum9ZUICf; kdBPMIoDF0++) {
        for (t = (202 - 202); t < EXVoum9ZUICf; t++) {
            if (ThK4JlvmI[kdBPMIoDF0][t] == '@') {
                mVh5komz2Jd = mVh5komz2Jd + 1;
            };
        };
    }
    printf ("%d", mVh5komz2Jd);
    return (45 - 45);
}

