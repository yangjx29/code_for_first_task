int main () {
    int YVuHrPM8bJIF;
    int jPVYO83 [(1197 - 197)];
    int P3q9bR;
    int jaiARG2t;
    int i;
    int gZgVCGL3Bd [(1392 - 392)];
    int qXY5wh;
    for (;;) {
        scanf ("%d", &jaiARG2t);
        if (jaiARG2t == (178 - 178))
            break;
        {
            i = (463 - 463);
            while (i < jaiARG2t) {
                scanf ("%d", &jPVYO83[i]);
                i = i + 1;
            }
        }
        for (i = (308 - 308); i < jaiARG2t; i = i + (347 - 346))
            scanf ("%d", &gZgVCGL3Bd[i]);
        P3q9bR = (867 - 867);
        YVuHrPM8bJIF = (747 - 747);
        for (i = (559 - 559); i < jaiARG2t - (854 - 853); i = i + 1)
            for (qXY5wh = (296 - 296); qXY5wh < jaiARG2t - (277 - 276) - i; qXY5wh = qXY5wh + 1)
                if (jPVYO83[qXY5wh] < jPVYO83[qXY5wh + (421 - 420)]) {
                    YVuHrPM8bJIF = jPVYO83[qXY5wh];
                    jPVYO83[qXY5wh] = jPVYO83[qXY5wh + (632 - 631)];
                    jPVYO83[qXY5wh + (602 - 601)] = YVuHrPM8bJIF;
                }
        YVuHrPM8bJIF = (827 - 827);
        {
            i = (986 - 986);
            while (i < jaiARG2t - (543 - 542)) {
                for (qXY5wh = (726 - 726); qXY5wh < jaiARG2t - (593 - 592) - i; qXY5wh = qXY5wh + 1)
                    if (gZgVCGL3Bd[qXY5wh] < gZgVCGL3Bd[qXY5wh + (925 - 924)]) {
                        YVuHrPM8bJIF = gZgVCGL3Bd[qXY5wh];
                        gZgVCGL3Bd[qXY5wh] = gZgVCGL3Bd[qXY5wh + (705 - 704)];
                        gZgVCGL3Bd[qXY5wh + (715 - 714)] = YVuHrPM8bJIF;
                    }
                i = i + 1;
            }
        }
        for (; jaiARG2t > (745 - 745); jaiARG2t = jaiARG2t - 1) {
            if (jPVYO83[(178 - 178)] > gZgVCGL3Bd[(401 - 401)]) {
                for (i = (527 - 527); i < jaiARG2t - (204 - 203); i = i + 1) {
                    jPVYO83[i] = jPVYO83[i + (57 - 56)];
                    gZgVCGL3Bd[i] = gZgVCGL3Bd[i + (65 - 64)];
                }
                P3q9bR = P3q9bR +1;
            }
            else if (jPVYO83[(819 - 819)] < gZgVCGL3Bd[(389 - 389)]) {
                P3q9bR = P3q9bR -1;
                for (i = (440 - 440); i < jaiARG2t - (328 - 327); i = i + 1)
                    gZgVCGL3Bd[i] = gZgVCGL3Bd[i + (538 - 537)];
            }
            else if (jPVYO83[(678 - 678)] == gZgVCGL3Bd[(457 - 457)] && jPVYO83[jaiARG2t - (368 - 367)] > gZgVCGL3Bd[jaiARG2t - (523 - 522)]) {
                P3q9bR = P3q9bR +1;
            }
            else if (jPVYO83[(178 - 178)] == gZgVCGL3Bd[(796 - 796)] && jPVYO83[jaiARG2t - (928 - 927)] <= gZgVCGL3Bd[jaiARG2t - (914 - 913)]) {
                if (jPVYO83[jaiARG2t - (637 - 636)] < gZgVCGL3Bd[(980 - 980)])
                    P3q9bR--;
                for (i = (304 - 304); i < jaiARG2t - (25 - 24); i = i + 1)
                    gZgVCGL3Bd[i] = gZgVCGL3Bd[i + (860 - 859)];
            }
        }
        printf ("%d\n", (850 - 650) * P3q9bR);
    }
    return (278 - 278);
}

