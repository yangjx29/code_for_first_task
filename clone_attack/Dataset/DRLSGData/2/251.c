struct   student {
    int M7vbNMF0;
    char fwhYLUaCyz [(985 - 965)];
    struct   student *AC7SV3Hln;
};
struct   student *Oe3EkJ (int bfCIteYu) {
    struct   student *Rq61ZAPI;
    struct   student *PSKnUZyMeWIx;
    struct   student *XgzOWuf;
    int x6Osk0;
    XgzOWuf = NULL;
    Rq61ZAPI = PSKnUZyMeWIx = (struct   student *) malloc (len);
    x6Osk0 = (877 - 877);
    while (bfCIteYu > x6Osk0) {
        scanf ("%d %s", &Rq61ZAPI->M7vbNMF0, Rq61ZAPI->fwhYLUaCyz);
        x6Osk0 = x6Osk0 + (965 - 964);
        if (!((666 - 665) != x6Osk0))
            XgzOWuf = Rq61ZAPI;
        else
            PSKnUZyMeWIx->AC7SV3Hln = Rq61ZAPI;
        PSKnUZyMeWIx = Rq61ZAPI;
        Rq61ZAPI = (struct   student *) malloc (len);
    }
    PSKnUZyMeWIx->AC7SV3Hln = NULL;
    return XgzOWuf;
}

void  main () {
    int h2BIlfFj [(266 - 240)];
    int bfCIteYu;
    int MF78KTbjeoD;
    int eJFPL4O;
    MF78KTbjeoD = (334 - 334);
    struct   student *XgzOWuf;
    struct   student *GipP8NolbrB;
    int x6Osk0;
    for (x6Osk0 = (198 - 198); (722 - 696) > x6Osk0; x6Osk0++) {
        h2BIlfFj[x6Osk0] = (444 - 444);
    }
    scanf ("%d", &bfCIteYu);
    XgzOWuf = Oe3EkJ (bfCIteYu);
    GipP8NolbrB = XgzOWuf;
    while (GipP8NolbrB != NULL) {
        for (x6Osk0 = (957 - 957); (107 - 87) > x6Osk0; x6Osk0++) {
            h2BIlfFj[(int) GipP8NolbrB->fwhYLUaCyz[x6Osk0] - 'A']++;
        }
        GipP8NolbrB = GipP8NolbrB->AC7SV3Hln;
    }
    GipP8NolbrB = XgzOWuf;
    for (x6Osk0 = 0; x6Osk0 < 26; x6Osk0++) {
        if (MF78KTbjeoD < h2BIlfFj[x6Osk0]) {
            MF78KTbjeoD = h2BIlfFj[x6Osk0];
            eJFPL4O = x6Osk0;
        }
    }
    printf ("%c\n", 'A' + eJFPL4O);
    printf ("%d\n", MF78KTbjeoD);
    for (; GipP8NolbrB != NULL;) {
        for (x6Osk0 = 0; x6Osk0 < 20; x6Osk0++) {
            if (!('A' + eJFPL4O != GipP8NolbrB->fwhYLUaCyz[x6Osk0]))
                break;
        }
        if (GipP8NolbrB->fwhYLUaCyz[x6Osk0] == 'A' + eJFPL4O)
            printf ("%d\n", GipP8NolbrB->M7vbNMF0);
        GipP8NolbrB = GipP8NolbrB->AC7SV3Hln;
    }
}

