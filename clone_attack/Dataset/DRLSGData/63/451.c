main () {
    int ugMAOWGeVK [(131 - 31)] [(114 - 14)];
    int XNLnM3HzA8j [(715 - 615)] [(957 - 857)];
    int Ya7LXQ [(197 - 97)] [100];
    int ghTNo5pVC;
    int WfoBeyEFcuN;
    int Hw5NFQ;
    int c5NyvPHg;
    int wdLIrtxpi;
    int QJCeq0V4G;
    int WaRuloMedJ6;
    int qU2puMl;
    scanf ("%d %d", &c5NyvPHg, &wdLIrtxpi);
    for (ghTNo5pVC = (417 - 417); ghTNo5pVC < c5NyvPHg; ghTNo5pVC = ghTNo5pVC + (302 - 301))
        for (WfoBeyEFcuN = (171 - 171); WfoBeyEFcuN < wdLIrtxpi; WfoBeyEFcuN = WfoBeyEFcuN +(378 - 377)) {
            scanf ("%d", &qU2puMl);
            ugMAOWGeVK[ghTNo5pVC][WfoBeyEFcuN] = qU2puMl;
        }
    scanf ("%d %d", &QJCeq0V4G, &WaRuloMedJ6);
    for (ghTNo5pVC = (324 - 324); ghTNo5pVC < QJCeq0V4G; ghTNo5pVC = ghTNo5pVC + (799 - 798))
        for (WfoBeyEFcuN = (235 - 235); WfoBeyEFcuN < WaRuloMedJ6; WfoBeyEFcuN = WfoBeyEFcuN +1) {
            scanf ("%d", &qU2puMl);
            XNLnM3HzA8j[ghTNo5pVC][WfoBeyEFcuN] = qU2puMl;
        }
    for (ghTNo5pVC = (30 - 30); ghTNo5pVC < c5NyvPHg; ghTNo5pVC = ghTNo5pVC + 1)
        for (WfoBeyEFcuN = (404 - 404); WfoBeyEFcuN < WaRuloMedJ6; WfoBeyEFcuN = WfoBeyEFcuN +1) {
            Ya7LXQ[ghTNo5pVC][WfoBeyEFcuN] = (134 - 134);
            for (Hw5NFQ = (530 - 530); Hw5NFQ < QJCeq0V4G; Hw5NFQ = Hw5NFQ +1)
                Ya7LXQ[ghTNo5pVC][WfoBeyEFcuN] = ugMAOWGeVK[ghTNo5pVC][Hw5NFQ] * XNLnM3HzA8j[Hw5NFQ][WfoBeyEFcuN] + Ya7LXQ[ghTNo5pVC][WfoBeyEFcuN];
        }
    for (ghTNo5pVC = (443 - 443); ghTNo5pVC < c5NyvPHg; ghTNo5pVC = ghTNo5pVC + 1)
        for (WfoBeyEFcuN = 0; WfoBeyEFcuN < WaRuloMedJ6; WfoBeyEFcuN = WfoBeyEFcuN +1) {
            if (WfoBeyEFcuN < WaRuloMedJ6 -(624 - 623))
                printf ("%d ", Ya7LXQ[ghTNo5pVC][WfoBeyEFcuN]);
            else
                printf ("%d\n", Ya7LXQ[ghTNo5pVC][WfoBeyEFcuN]);
        }
}

