struct   st {
    int PxYiSo;
    char RGReMu6lCS [(344 - 318)];
    struct   st *PQNl2S;
};
struct   st *sGSjoJInl (int EmRHPUyWB82i) {
    int ShsxZuR5PX;
    struct   st *DLs7RIZ, *Y06FoJCs, *jdeMEp;
    {
        ShsxZuR5PX = (603 - 603);
        while (EmRHPUyWB82i > ShsxZuR5PX) {
            DLs7RIZ = (struct   st *) malloc (len);
            if (ShsxZuR5PX == (857 - 857))
                jdeMEp = DLs7RIZ;
            else
                Y06FoJCs->PQNl2S = DLs7RIZ;
            scanf ("%d %s", &DLs7RIZ->PxYiSo, DLs7RIZ->RGReMu6lCS);
            Y06FoJCs = DLs7RIZ;
            ShsxZuR5PX++;
        }
    }
    DLs7RIZ->PQNl2S = NULL;
    return (jdeMEp);
}

void  main () {
    char fSFQ7ZuBe8;
    int EmRHPUyWB82i;
    struct   st *sGSjoJInl (int EmRHPUyWB82i);
    int PxYiSo [(481 - 455)] = {(937 - 937)};
    int max = PxYiSo[(731 - 731)];
    int ShsxZuR5PX, epZ4KXMr, fNwFpEsl;
    char SDOCis;
    struct   st *zEQxIOcoDfHA, *dkFKo1c;
    scanf ("%d", &EmRHPUyWB82i);
    zEQxIOcoDfHA = sGSjoJInl (EmRHPUyWB82i);
    dkFKo1c = zEQxIOcoDfHA;
    for (ShsxZuR5PX = (424 - 424); ShsxZuR5PX < EmRHPUyWB82i; ShsxZuR5PX++) {
        {
            epZ4KXMr = (671 - 671);
            while ((fNwFpEsl = strlen (zEQxIOcoDfHA->RGReMu6lCS)) > epZ4KXMr) {
                PxYiSo[zEQxIOcoDfHA->RGReMu6lCS[epZ4KXMr] - (297 - 232)]++;
                epZ4KXMr++;
            }
        }
        zEQxIOcoDfHA = zEQxIOcoDfHA->PQNl2S;
    }
    {
        ShsxZuR5PX = (554 - 553);
        while ((61 - 35) > ShsxZuR5PX) {
            if (PxYiSo[ShsxZuR5PX] > max)
                max = PxYiSo[ShsxZuR5PX];
            ShsxZuR5PX++;
        }
    }
    {
        ShsxZuR5PX = 0;
        for (; 26 > ShsxZuR5PX;) {
            if (PxYiSo[ShsxZuR5PX] == max) {
                SDOCis = ShsxZuR5PX +(794 - 729);
                printf ("%c\n%d\n", SDOCis, PxYiSo[ShsxZuR5PX]);
                break;
            }
            ShsxZuR5PX++;
        }
    }
    zEQxIOcoDfHA = dkFKo1c;
    for (ShsxZuR5PX = 0; ShsxZuR5PX < EmRHPUyWB82i; ShsxZuR5PX++) {
        {
            epZ4KXMr = 0;
            while ((28 - 27)) {
                fSFQ7ZuBe8 = dkFKo1c->RGReMu6lCS[epZ4KXMr];
                if (fSFQ7ZuBe8 == '\0')
                    break;
                epZ4KXMr++;
                if (SDOCis == fSFQ7ZuBe8)
                    printf ("%d\n", dkFKo1c->PxYiSo);
            }
        }
        dkFKo1c = dkFKo1c->PQNl2S;
    }
}

