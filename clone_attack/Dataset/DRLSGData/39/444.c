void  main () {
    struct   stud {
        char jL67zeSE [1000];
        int eYQX0M3fpyOq;
        int VnMQ5ifHa;
        char grheimv;
        char K6UFEMsub;
        int tRIeZCrHfLnG;
        int NKcW8qXhdlr;
    };
    struct   stud AyID957l6RLg [1000];
    int DurYZLDV84;
    int gqupmU3e172;
    int GX4n7RV9I3w;
    int KoIjnil;
    scanf ("%d", &gqupmU3e172);
    for (DurYZLDV84 = 0; DurYZLDV84 < gqupmU3e172; DurYZLDV84++) {
        scanf ("%s %d %d %c %c %d", &AyID957l6RLg[DurYZLDV84].jL67zeSE, &AyID957l6RLg[DurYZLDV84].eYQX0M3fpyOq, &AyID957l6RLg[DurYZLDV84].VnMQ5ifHa, &AyID957l6RLg[DurYZLDV84].grheimv, &AyID957l6RLg[DurYZLDV84].K6UFEMsub, &AyID957l6RLg[DurYZLDV84].tRIeZCrHfLnG);
    }
    for (DurYZLDV84 = 0; gqupmU3e172 > DurYZLDV84; DurYZLDV84++) {
        AyID957l6RLg[DurYZLDV84].NKcW8qXhdlr = 0;
        if (80 < AyID957l6RLg[DurYZLDV84].eYQX0M3fpyOq && 1 <= AyID957l6RLg[DurYZLDV84].tRIeZCrHfLnG)
            AyID957l6RLg[DurYZLDV84].NKcW8qXhdlr = 8000;
        if (85 < AyID957l6RLg[DurYZLDV84].eYQX0M3fpyOq && AyID957l6RLg[DurYZLDV84].VnMQ5ifHa > 80)
            AyID957l6RLg[DurYZLDV84].NKcW8qXhdlr = AyID957l6RLg[DurYZLDV84].NKcW8qXhdlr + 4000;
        if (AyID957l6RLg[DurYZLDV84].eYQX0M3fpyOq > 90)
            AyID957l6RLg[DurYZLDV84].NKcW8qXhdlr = AyID957l6RLg[DurYZLDV84].NKcW8qXhdlr + 2000;
        if (AyID957l6RLg[DurYZLDV84].eYQX0M3fpyOq > 85 && !('Y' != AyID957l6RLg[DurYZLDV84].K6UFEMsub))
            AyID957l6RLg[DurYZLDV84].NKcW8qXhdlr = AyID957l6RLg[DurYZLDV84].NKcW8qXhdlr + 1000;
        if (80 < AyID957l6RLg[DurYZLDV84].VnMQ5ifHa && !('Y' != AyID957l6RLg[DurYZLDV84].grheimv))
            AyID957l6RLg[DurYZLDV84].NKcW8qXhdlr = AyID957l6RLg[DurYZLDV84].NKcW8qXhdlr + 850;
    }
    GX4n7RV9I3w = 0;
    KoIjnil = 0;
    for (DurYZLDV84 = 0; gqupmU3e172 > DurYZLDV84; DurYZLDV84++)
        KoIjnil = KoIjnil +AyID957l6RLg[DurYZLDV84].NKcW8qXhdlr;
    for (DurYZLDV84 = 0; DurYZLDV84 <= gqupmU3e172 - 1;) {
        if (AyID957l6RLg[DurYZLDV84].NKcW8qXhdlr < AyID957l6RLg[GX4n7RV9I3w +1].NKcW8qXhdlr)
            DurYZLDV84 = DurYZLDV84 +1;
        else if (AyID957l6RLg[DurYZLDV84].NKcW8qXhdlr >= AyID957l6RLg[GX4n7RV9I3w +1].NKcW8qXhdlr)
            GX4n7RV9I3w++;
        if (GX4n7RV9I3w >= gqupmU3e172)
            break;
    }
    printf ("%s\n", AyID957l6RLg[DurYZLDV84].jL67zeSE);
    printf ("%d\n", AyID957l6RLg[DurYZLDV84].NKcW8qXhdlr);
    printf ("%d\n", KoIjnil);
}

