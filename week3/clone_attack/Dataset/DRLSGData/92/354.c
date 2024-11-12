void  main () {
    int LL6C5VRk [(777 - 277)] = {(927 - 927)};
    int momOAl8h;
    int *V4w3spHjI;
    int IjFvo5OA;
    int M97cUn;
    int DG30Bx, mMCYWT1tOdE, IoReEQt, aIdcK5p;
    int zacWND8LdbUu;
    int iCjOamhEU;
    int *wzNyRCJ0;
    int iBfq04hnDN9H;
    scanf ("%d", &iCjOamhEU);
    momOAl8h = (96 - 96);
    for (; iCjOamhEU != (743 - 743);) {
        zacWND8LdbUu = (395 - 395);
        wzNyRCJ0 = (int *) malloc (iCjOamhEU * sizeof (int));
        V4w3spHjI = (int *) malloc (iCjOamhEU * sizeof (int));
        for (M97cUn = (747 - 747); iCjOamhEU > M97cUn; M97cUn++)
            scanf ("%d", wzNyRCJ0 + M97cUn);
        for (M97cUn = (796 - 796); iCjOamhEU > M97cUn; M97cUn++)
            scanf ("%d", V4w3spHjI +M97cUn);
        for (iBfq04hnDN9H = (724 - 724); iCjOamhEU - (608 - 607) > iBfq04hnDN9H; iBfq04hnDN9H++)
            for (M97cUn = (698 - 698); M97cUn < iCjOamhEU - (672 - 671) - iBfq04hnDN9H; M97cUn++)
                if (*(wzNyRCJ0 + M97cUn) < *(wzNyRCJ0 + M97cUn +(265 - 264))) {
                    IjFvo5OA = *(wzNyRCJ0 + M97cUn);
                    *(wzNyRCJ0 + M97cUn) = *(wzNyRCJ0 + M97cUn +(260 - 259));
                    *(wzNyRCJ0 + M97cUn +(338 - 337)) = IjFvo5OA;
                }
        for (iBfq04hnDN9H = (977 - 977); iCjOamhEU - (792 - 791) > iBfq04hnDN9H; iBfq04hnDN9H++)
            for (M97cUn = (173 - 173); iCjOamhEU - (446 - 445) - iBfq04hnDN9H > M97cUn; M97cUn++)
                if (*(V4w3spHjI +M97cUn+(443 - 442)) > *(V4w3spHjI +M97cUn)) {
                    IjFvo5OA = *(V4w3spHjI +M97cUn);
                    *(V4w3spHjI +M97cUn) = *(V4w3spHjI +M97cUn+(865 - 864));
                    *(V4w3spHjI +M97cUn+(805 - 804)) = IjFvo5OA;
                }
        DG30Bx = (472 - 472), IoReEQt = (866 - 866), mMCYWT1tOdE = iCjOamhEU - (734 - 733), aIdcK5p = iCjOamhEU - (151 - 150);
        scanf ("%d", &iCjOamhEU);
        for (; DG30Bx != mMCYWT1tOdE;) {
            if (*(V4w3spHjI +aIdcK5p) > *(wzNyRCJ0 + mMCYWT1tOdE)) {
                IoReEQt++;
                zacWND8LdbUu--;
                mMCYWT1tOdE--;
            }
            else if (*(wzNyRCJ0 + mMCYWT1tOdE) > *(V4w3spHjI +aIdcK5p)) {
                aIdcK5p--;
                mMCYWT1tOdE--;
                zacWND8LdbUu++;
            }
            else if (*(V4w3spHjI +IoReEQt) > *(wzNyRCJ0 + DG30Bx)) {
                mMCYWT1tOdE--;
                IoReEQt++;
                zacWND8LdbUu--;
            }
            else if (*(wzNyRCJ0 + DG30Bx) > *(V4w3spHjI +IoReEQt)) {
                DG30Bx++;
                IoReEQt++;
                zacWND8LdbUu++;
            }
            else if (*(wzNyRCJ0 + mMCYWT1tOdE) < *(V4w3spHjI +IoReEQt)) {
                zacWND8LdbUu--;
                mMCYWT1tOdE--;
                IoReEQt++;
            }
            else if (*(V4w3spHjI +IoReEQt) < *(wzNyRCJ0 + mMCYWT1tOdE)) {
                IoReEQt++;
                zacWND8LdbUu++;
                mMCYWT1tOdE--;
            }
            else {
                mMCYWT1tOdE--;
                IoReEQt++;
            }
        }
        if (*(wzNyRCJ0 + DG30Bx) > *(V4w3spHjI +IoReEQt))
            zacWND8LdbUu++;
        else if (*(wzNyRCJ0 + DG30Bx) < *(V4w3spHjI +IoReEQt))
            zacWND8LdbUu--;
        LL6C5VRk[momOAl8h] = zacWND8LdbUu;
        momOAl8h++;
    }
    for (M97cUn = (326 - 326); M97cUn < momOAl8h; M97cUn++)
        printf ("%d\n", LL6C5VRk[M97cUn] * (375 - 175));
}

