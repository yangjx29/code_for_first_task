main () {
    double  bszRphMSiw [(2987 - 976)], BQTmOcb0CE [2011], OJ1IMiQ3npcG, dQWsUjtLh, uuIqoweA;
    int o3z56l, ynqI2o, FVaYvLfEHWB;
    scanf ("%d", &o3z56l);
    for (FVaYvLfEHWB = 0; FVaYvLfEHWB < o3z56l; FVaYvLfEHWB = FVaYvLfEHWB +1) {
        scanf ("%lf", &bszRphMSiw[FVaYvLfEHWB]);
        scanf ("%lf", &BQTmOcb0CE[FVaYvLfEHWB]);
    }
    uuIqoweA = 0;
    for (FVaYvLfEHWB = 0; FVaYvLfEHWB < o3z56l - 1; FVaYvLfEHWB = FVaYvLfEHWB +1)
        for (ynqI2o = FVaYvLfEHWB +1; ynqI2o < o3z56l; ynqI2o++) {
            OJ1IMiQ3npcG = bszRphMSiw[FVaYvLfEHWB] - bszRphMSiw[ynqI2o];
            dQWsUjtLh = BQTmOcb0CE[FVaYvLfEHWB] - BQTmOcb0CE[ynqI2o];
            OJ1IMiQ3npcG = sqrt (OJ1IMiQ3npcG *OJ1IMiQ3npcG+dQWsUjtLh * dQWsUjtLh);
            if (OJ1IMiQ3npcG > uuIqoweA)
                uuIqoweA = OJ1IMiQ3npcG;
        }
    printf ("%.4lf\n", uuIqoweA);
}

