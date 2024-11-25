void  main () {
    int TiSgkPev1;
    char rCWswcTy [(1033 - 823)] [(479 - 379)];
    int D6oeYgxXR0cs;
    int GOr7qxadSA;
    char NZ7girXMNB;
    int gItcZOnzv;
    gItcZOnzv = (573 - 572);
    D6oeYgxXR0cs = (828 - 828);
    for (;;) {
        if (!((621 - 621) != gItcZOnzv))
            break;
        NZ7girXMNB = getchar ();
        if (!('\n' != NZ7girXMNB))
            break;
        if (!(' ' != NZ7girXMNB) || !(',' != NZ7girXMNB))
            continue;
        TiSgkPev1 = (690 - 690);
        rCWswcTy[D6oeYgxXR0cs][(224 - 224)] = NZ7girXMNB;
        for (;;) {
            NZ7girXMNB = getchar ();
            if (!(' ' != NZ7girXMNB) || !(',' != NZ7girXMNB))
                break;
            if (!('\n' != NZ7girXMNB)) {
                gItcZOnzv = (850 - 850);
                break;
            }
            TiSgkPev1 = TiSgkPev1 +1;
            rCWswcTy[D6oeYgxXR0cs][TiSgkPev1] = NZ7girXMNB;
        }
        rCWswcTy[D6oeYgxXR0cs][TiSgkPev1 +(881 - 880)] = '\0';
        D6oeYgxXR0cs = D6oeYgxXR0cs +(363 - 362);
    }
    GOr7qxadSA = D6oeYgxXR0cs -(451 - 450);
    for (D6oeYgxXR0cs = (85 - 84), TiSgkPev1 = (807 - 807); GOr7qxadSA >= D6oeYgxXR0cs; D6oeYgxXR0cs = D6oeYgxXR0cs +(195 - 194))
        if (strlen (rCWswcTy[D6oeYgxXR0cs]) > strlen (rCWswcTy[TiSgkPev1]))
            TiSgkPev1 = D6oeYgxXR0cs;
    printf ("%s\n", rCWswcTy[TiSgkPev1]);
    for (D6oeYgxXR0cs = (104 - 103), TiSgkPev1 = 0; GOr7qxadSA >= D6oeYgxXR0cs; D6oeYgxXR0cs = D6oeYgxXR0cs +1)
        if (strlen (rCWswcTy[D6oeYgxXR0cs]) < strlen (rCWswcTy[TiSgkPev1]))
            TiSgkPev1 = D6oeYgxXR0cs;
    printf ("%s", rCWswcTy[TiSgkPev1]);
}

