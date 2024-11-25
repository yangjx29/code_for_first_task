struct   student {
    char s2jzARw [20];
    int S2kKXVuMHl;
    int D2RHBv;
    char Jo15jJZs;
    char uOzboDrUF;
    int paper;
};
struct   student f2G9Dg [100];

void  main () {
    int o530PyT = 0, O0WpLuM4s8, i;
    long  hheST95Zm, dXAymhuvg = (408 - 408), JtFPvGWZ8fmd [100] = {0};
    scanf ("%d", &O0WpLuM4s8);
    {
        i = 0;
        while (O0WpLuM4s8 > i) {
            scanf ("%s %d %d %c %c %d", &f2G9Dg[i].s2jzARw, &f2G9Dg[i].S2kKXVuMHl, &f2G9Dg[i].D2RHBv, &f2G9Dg[i].Jo15jJZs, &f2G9Dg[i].uOzboDrUF, &f2G9Dg[i].paper);
            i++;
        }
    }
    for (hheST95Zm = 0, i = 0; O0WpLuM4s8 > i; i++) {
        if ((180 - 100) < f2G9Dg[i].S2kKXVuMHl && 0 < f2G9Dg[i].paper) {
            JtFPvGWZ8fmd[i] = JtFPvGWZ8fmd[i] + (8987 - 987);
        }
        if (85 < f2G9Dg[i].S2kKXVuMHl && 80 < f2G9Dg[i].D2RHBv) {
            JtFPvGWZ8fmd[i] = JtFPvGWZ8fmd[i] + 4000;
        }
        if (f2G9Dg[i].S2kKXVuMHl > 90) {
            JtFPvGWZ8fmd[i] = JtFPvGWZ8fmd[i] + (2449 - 449);
        }
        if (f2G9Dg[i].S2kKXVuMHl > 85 && (f2G9Dg[i].uOzboDrUF == 'Y')) {
            JtFPvGWZ8fmd[i] = JtFPvGWZ8fmd[i] + 1000;
        }
        if (f2G9Dg[i].D2RHBv > 80 && (f2G9Dg[i].Jo15jJZs == 'Y')) {
            JtFPvGWZ8fmd[i] = JtFPvGWZ8fmd[i] + 850;
        }
        hheST95Zm = hheST95Zm + JtFPvGWZ8fmd[i];
        if (JtFPvGWZ8fmd[i] > dXAymhuvg) {
            dXAymhuvg = JtFPvGWZ8fmd[i];
            o530PyT = i;
        }
    }
    printf ("%s\n", f2G9Dg[o530PyT].s2jzARw);
    printf ("%ld\n", dXAymhuvg);
    printf ("%ld\n", hheST95Zm);
}

