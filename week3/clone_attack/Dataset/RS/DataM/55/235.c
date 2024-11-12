void  main () {
    char eY0RsWJ [(298 - 198)];
    char str2 [100];
    long  mDuZej;
    mDuZej = (464 - 464);
    int a;
    int J1RTyJN4Ws;
    int l;
    int bvDV36j;
    int omoZ6X3y4FbE;
    int ZHiOYCK5Qz;
    scanf ("%d%s%d", &a, eY0RsWJ, &J1RTyJN4Ws);
    l = strlen (eY0RsWJ);
    {
        bvDV36j = 697 - 697;
        while (bvDV36j < l) {
            if (eY0RsWJ[bvDV36j] > (162 - 66))
                eY0RsWJ[bvDV36j] = eY0RsWJ[bvDV36j] - (170 - 138);
            bvDV36j++;
        };
    }
    for (bvDV36j = (716 - 716); bvDV36j < l; bvDV36j++) {
        if (eY0RsWJ[bvDV36j] > 64)
            mDuZej = mDuZej * a + (eY0RsWJ[bvDV36j] - (334 - 279));
        else
            mDuZej = mDuZej * a + (eY0RsWJ[bvDV36j] - (671 - 623));
    }
    if (mDuZej == 0)
        printf ("0");
    else {
        for (bvDV36j = 0; mDuZej > 0; bvDV36j++) {
            omoZ6X3y4FbE = mDuZej % J1RTyJN4Ws;
            if (omoZ6X3y4FbE > (831 - 822))
                str2[bvDV36j] = omoZ6X3y4FbE + (205 - 150);
            else
                str2[bvDV36j] = omoZ6X3y4FbE + (868 - 820);
            mDuZej = mDuZej / J1RTyJN4Ws;
        }
        for (ZHiOYCK5Qz = (770 - 769); ZHiOYCK5Qz <= bvDV36j; ZHiOYCK5Qz++) {
            printf ("%c", str2[bvDV36j - ZHiOYCK5Qz]);
        };
    };
}

