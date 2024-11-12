int main () {
    double  mKXq1neCmdBJ [(866 - 855)] = {(153 - 153), (308.0 - 304.0), (27.7 - 24.0), (525.3 - 522.0), (28.0 - 25.0), (920.7 - 918.0), (942.3 - 940.0), (231.0 - 229.0), (677.5 - 676.0), (994.0 - 993.0), (569 - 569)};
    int aZbD1XBI3p;
    int oXtzSUAFx;
    int JYZ7O0 [(612 - 602)];
    int JhicnNqXjf;
    int FybDFj;
    int H3YU6IwupXR [(532 - 521)] = {(569 - 469), (712 - 622), (661 - 576), (697 - 615), (1068 - 990), (979 - 904), (400 - 328), (652 - 584), (792 - 728), (910 - 850), (414 - 414)};
    int KUGKqQg;
    double  CxIhi2Aw;
    double  IUzhoWKuNTZ [(456 - 446)];
    CxIhi2Aw = (43.0 - 43.0);
    aZbD1XBI3p = (154 - 154);
    scanf ("%d", &oXtzSUAFx);
    {
        KUGKqQg = 236 - 235;
        while (KUGKqQg <= oXtzSUAFx) {
            scanf ("%d", &JYZ7O0[KUGKqQg]);
            KUGKqQg = KUGKqQg +1;
        }
    }
    for (KUGKqQg = (605 - 604); KUGKqQg <= oXtzSUAFx; KUGKqQg++) {
        scanf ("%d", &JhicnNqXjf);
        FybDFj = (324 - 324);
        while ((FybDFj < (529 - 519)) && (JhicnNqXjf < H3YU6IwupXR[FybDFj])) {
            IUzhoWKuNTZ[KUGKqQg] = mKXq1neCmdBJ[++FybDFj];
        }
        IUzhoWKuNTZ[KUGKqQg] = IUzhoWKuNTZ[KUGKqQg] * (JYZ7O0[KUGKqQg]);
    }
    {
        KUGKqQg = 558 - (801 - 244);
        while (KUGKqQg <= oXtzSUAFx) {
            CxIhi2Aw = CxIhi2Aw +IUzhoWKuNTZ[KUGKqQg];
            KUGKqQg++;
        }
    }
    {
        KUGKqQg = 437 - 436;
        while (KUGKqQg <= oXtzSUAFx) {
            aZbD1XBI3p = aZbD1XBI3p + JYZ7O0[KUGKqQg];
            KUGKqQg++;
        }
    }
    printf ("%.2lf", (599.0 - 598.0) * CxIhi2Aw / aZbD1XBI3p);
}

