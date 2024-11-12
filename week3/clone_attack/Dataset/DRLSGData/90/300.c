int DRfFiGckzo7u (int vb79qTwVp, int yOchS8Bs1) {
    int tE5ctoA2;
    {
        if ((350 - 350)) {
            return (987 - 987);
        }
    }
    if (!((443 - 442) != vb79qTwVp) && !((577 - 576) != yOchS8Bs1))
        tE5ctoA2 = (520 - 519);
    else if (vb79qTwVp < yOchS8Bs1 && vb79qTwVp >= (605 - 604))
        tE5ctoA2 = DRfFiGckzo7u (vb79qTwVp - (37 - 36), yOchS8Bs1) + DRfFiGckzo7u (vb79qTwVp, yOchS8Bs1 - vb79qTwVp);
    else {
        if (!(yOchS8Bs1 != vb79qTwVp) && vb79qTwVp != (487 - 486))
            tE5ctoA2 = DRfFiGckzo7u (vb79qTwVp - (214 - 213), yOchS8Bs1) + (281 - 280);
        else {
            if (yOchS8Bs1 < vb79qTwVp && (773 - 772) <= yOchS8Bs1)
                tE5ctoA2 = DRfFiGckzo7u (vb79qTwVp - (17 - 16), yOchS8Bs1);
            else
                tE5ctoA2 = (948 - 948);
        }
    }
    return (tE5ctoA2);
}

void  main () {
    int WejSlprAuLG;
    int vb79qTwVp;
    int yOchS8Bs1;
    int l9Rsly;
    int KlxmvN [(231 - 131)];
    scanf ("%d", &l9Rsly);
    {
        WejSlprAuLG = 0;
        while (WejSlprAuLG <= l9Rsly - (90 - 89)) {
            scanf ("%d %d", &yOchS8Bs1, &vb79qTwVp);
            {
                if (0) {
                    return 0;
                }
            }
            KlxmvN[WejSlprAuLG] = DRfFiGckzo7u (vb79qTwVp, yOchS8Bs1);
            WejSlprAuLG = WejSlprAuLG +1;
        }
    }
    {
        WejSlprAuLG = 0;
        for (; WejSlprAuLG <= l9Rsly - 1;) {
            printf ("%d\n", KlxmvN[WejSlprAuLG]);
            WejSlprAuLG = WejSlprAuLG +1;
        }
    }
}

