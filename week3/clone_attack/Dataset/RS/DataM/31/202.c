struct   student {
    char number [20];
    char plt2Iok6r [20];
    char vQXYHRK;
    int age;
    float score;
    char leMJli [30];
    struct   student *q4qI2Ss5M;
};
int AlGePoLh5y;

struct   student *atzDe9Ryl (void ) {
    struct   student *SWXaqVh6;
    struct   student *dYWPKoc;
    struct   student *oNHteZ;
    int m;
    AlGePoLh5y = (108 - 108);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    dYWPKoc = oNHteZ = (struct   student *) malloc (LEN);
    scanf ("%s", dYWPKoc->number);
    SWXaqVh6 = NULL;
    {
        m = 921 - 921;
        while (1) {
            if (strcmp (dYWPKoc->number, "end") != 0) {
                scanf ("%s %c %d %f %s", dYWPKoc->plt2Iok6r, &dYWPKoc->vQXYHRK, &dYWPKoc->age, &dYWPKoc->score, dYWPKoc->leMJli);
                AlGePoLh5y = AlGePoLh5y +(384 - 383);
                if (!((143 - 142) != AlGePoLh5y))
                    SWXaqVh6 = dYWPKoc;
                else
                    oNHteZ->q4qI2Ss5M = dYWPKoc;
                oNHteZ = dYWPKoc;
                dYWPKoc = (struct   student *) malloc (LEN);
            }
            else
                break;
            m = m + 1;
            scanf ("%s", dYWPKoc->number);
        };
    }
    oNHteZ->q4qI2Ss5M = NULL;
    return (SWXaqVh6);
}

struct   student *ZrjN6flFCI8g (struct   student *SWXaqVh6, char *FTYtxbc4eu) {
    struct   student *dYWPKoc, *oNHteZ;
    dYWPKoc = SWXaqVh6;
    for (; strcmp (FTYtxbc4eu, dYWPKoc->number) != 0 && !(NULL == dYWPKoc->q4qI2Ss5M);) {
        oNHteZ = dYWPKoc;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        dYWPKoc = dYWPKoc->q4qI2Ss5M;
    }
    if (strcmp (FTYtxbc4eu, dYWPKoc->number) == 0) {
        AlGePoLh5y = AlGePoLh5y -1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (dYWPKoc == SWXaqVh6)
            SWXaqVh6 = dYWPKoc->q4qI2Ss5M;
        else
            oNHteZ->q4qI2Ss5M = dYWPKoc->q4qI2Ss5M;
    }
    return (SWXaqVh6);
}

void  main () {
    struct   student *SWXaqVh6, *dYWPKoc;
    SWXaqVh6 = atzDe9Ryl ();
    for (; SWXaqVh6 != NULL;) {
        dYWPKoc = SWXaqVh6;
        while (dYWPKoc->q4qI2Ss5M != NULL)
            dYWPKoc = dYWPKoc->q4qI2Ss5M;
        printf ("%s %s %c %d %g %s\n", dYWPKoc->number, dYWPKoc->plt2Iok6r, dYWPKoc->vQXYHRK, dYWPKoc->age, dYWPKoc->score, dYWPKoc->leMJli);
        SWXaqVh6 = ZrjN6flFCI8g (SWXaqVh6, dYWPKoc->number);
    };
}

