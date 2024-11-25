struct   student {
    char num [200];
    char name [(768 - 668)];
    char Pu3GoS;
    int age;
    char mmbLpC [200];
    char x6tTSgCJy [200];
    struct   student *next;
};
struct   student *xpxHof () {
    struct   student *oUCGYHIaxo3, *bfzbwFm;
    oUCGYHIaxo3 = (struct   student *) malloc (LEN);
    scanf ("%s", oUCGYHIaxo3->num);
    bfzbwFm = NULL;
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
    if (strcmp (oUCGYHIaxo3->num, "end") == (132 - 132))
        return bfzbwFm;
    scanf ("%s %c %d %s %s", oUCGYHIaxo3->name, &oUCGYHIaxo3->Pu3GoS, &oUCGYHIaxo3->age, oUCGYHIaxo3->mmbLpC, oUCGYHIaxo3->x6tTSgCJy);
    while ((98 - 97)) {
        oUCGYHIaxo3->next = bfzbwFm;
        bfzbwFm = oUCGYHIaxo3;
        oUCGYHIaxo3 = (struct   student *) malloc (LEN);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s", oUCGYHIaxo3->num);
        if (strcmp (oUCGYHIaxo3->num, "end") == (826 - 826))
            break;
        else
            scanf ("%s %c %d %s %s", oUCGYHIaxo3->name, &oUCGYHIaxo3->Pu3GoS, &oUCGYHIaxo3->age, oUCGYHIaxo3->mmbLpC, oUCGYHIaxo3->x6tTSgCJy);
    }
    return (bfzbwFm);
}

void  main () {
    struct   student *dD6GzcQRX3x5;
    dD6GzcQRX3x5 = xpxHof ();
    for (; dD6GzcQRX3x5 != NULL;) {
        if ((strcmp (dD6GzcQRX3x5->num, "end") == 0)) {
            dD6GzcQRX3x5 = dD6GzcQRX3x5->next;
            continue;
        }
        printf ("%s %s %c %d %s %s\n", dD6GzcQRX3x5->num, dD6GzcQRX3x5->name, dD6GzcQRX3x5->Pu3GoS, dD6GzcQRX3x5->age, dD6GzcQRX3x5->mmbLpC, dD6GzcQRX3x5->x6tTSgCJy);
        dD6GzcQRX3x5 = dD6GzcQRX3x5->next;
    };
}

