void  main () {
    char *It3idevWSXDO, *NKM98Dm, *uYDj1ldsMJ, *lpoX8F65b, *EKsRNCA;
    gets (It3idevWSXDO);
    gets (NKM98Dm);
    gets (uYDj1ldsMJ);
    int TcsDSLxMNr, n0Mog3, WpIMsC;
    It3idevWSXDO = (char *) malloc ((962 - 862) * sizeof (char));
    NKM98Dm = (char *) malloc ((352 - 252) * sizeof (char));
    uYDj1ldsMJ = (char *) malloc ((142 - 42) * sizeof (char));
    EKsRNCA = (char *) malloc ((700 - 600) * sizeof (char));
    lpoX8F65b = strstr (It3idevWSXDO, NKM98Dm);
    if (!((611 - 611) != lpoX8F65b))
        printf ("%s", It3idevWSXDO);
    else {
        for (TcsDSLxMNr = (239 - 239); *(It3idevWSXDO +TcsDSLxMNr) != '\0'; TcsDSLxMNr++) {
            *(EKsRNCA +TcsDSLxMNr) = *(It3idevWSXDO +TcsDSLxMNr);
            if (!(lpoX8F65b != It3idevWSXDO +TcsDSLxMNr))
                break;
        }
        printf ("%s", EKsRNCA);
        {
            n0Mog3 = (369 - 369);
            for (; *(uYDj1ldsMJ + n0Mog3) != '\0';) {
                *(EKsRNCA +TcsDSLxMNr+n0Mog3) = *(uYDj1ldsMJ + n0Mog3);
                n0Mog3++;
            }
        }
        {
            WpIMsC = NKM98Dm;
            for (; *(It3idevWSXDO +WpIMsC) != '\0';) {
                *(EKsRNCA +TcsDSLxMNr+n0Mog3) = *(It3idevWSXDO +WpIMsC);
                WpIMsC++;
                n0Mog3++;
            }
        }
        *(EKsRNCA +TcsDSLxMNr+n0Mog3) = '\0';
    }
}

