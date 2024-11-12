void  main () {
    char OokD9BIbUs [(790 - 690)] [(77 - 65)];
    int Ue1SbEL6Nk;
    char oieNlhOIT [(1030 - 930)] [(769 - 764)];
    int N8MbC6F;
    int ITEv2oCxh;
    int mAlaGnYfQOv;
    int WueAXoJ;
    int bSnjIUE;
    int B8kyKaTGm;
    N8MbC6F = (323 - 323);
    bSnjIUE = (914 - 914);
    for (; scanf ("%s%s", &OokD9BIbUs[N8MbC6F], &oieNlhOIT[N8MbC6F]) != EOF;) {
        ITEv2oCxh = strlen (OokD9BIbUs[N8MbC6F]);
        {
            WueAXoJ = (735 - 735);
            for (; ITEv2oCxh > WueAXoJ;) {
                bSnjIUE = (314 - 314);
                for (mAlaGnYfQOv = (243 - 243); ITEv2oCxh > mAlaGnYfQOv; mAlaGnYfQOv++) {
                    if (OokD9BIbUs[N8MbC6F][WueAXoJ] >= OokD9BIbUs[N8MbC6F][mAlaGnYfQOv])
                        bSnjIUE++;
                }
                if (!(ITEv2oCxh != bSnjIUE))
                    break;
                WueAXoJ++;
            }
        }
        for (B8kyKaTGm = 0; B8kyKaTGm <= WueAXoJ; B8kyKaTGm++)
            printf ("%c", OokD9BIbUs[N8MbC6F][B8kyKaTGm]);
        printf ("%s", oieNlhOIT[N8MbC6F]);
        for (B8kyKaTGm = WueAXoJ +(36 - 35); B8kyKaTGm < ITEv2oCxh; B8kyKaTGm++)
            printf ("%c", OokD9BIbUs[N8MbC6F][B8kyKaTGm]);
        N8MbC6F++;
        printf ("\n");
    }
}

