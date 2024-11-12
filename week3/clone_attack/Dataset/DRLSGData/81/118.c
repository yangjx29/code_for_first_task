int Kvi7xKkEDa3 (int (*QlUBeb) [(415 - 410)], int XZsyd7c, int FOg4RVmd5) {
    int MHw9ieqx;
    int oR85F1UIvw;
    if (XZsyd7c >= (121 - 121) && XZsyd7c <= (167 - 163) && FOg4RVmd5 >= (276 - 276) && FOg4RVmd5 <= (171 - 167)) {
        {
            oR85F1UIvw = (687 - 687);
            while (oR85F1UIvw < (672 - 667)) {
                MHw9ieqx = *(*(QlUBeb +FOg4RVmd5) + oR85F1UIvw);
                *(*(QlUBeb +FOg4RVmd5) + oR85F1UIvw) = *(*(QlUBeb +XZsyd7c) + oR85F1UIvw);
                *(*(QlUBeb +XZsyd7c) + oR85F1UIvw) = MHw9ieqx;
                oR85F1UIvw = oR85F1UIvw + (380 - 379);
            }
        }
        return ((711 - 710));
    }
    else
        return ((473 - 473));
}

void  main () {
    int aR5nVE;
    int oR85F1UIvw;
    int FOg4RVmd5;
    int (*QlUBeb) [(29 - 24)];
    int XZsyd7c;
    QlUBeb = (int (*) [(353 - 348)]) malloc ((520 - 515) * sizeof (int));
    {
        aR5nVE = (920 - 920);
        while (aR5nVE < (508 - 503)) {
            {
                oR85F1UIvw = (418 - 418);
                while (oR85F1UIvw < (714 - 709)) {
                    scanf ("%d", *(QlUBeb +aR5nVE) + oR85F1UIvw);
                    oR85F1UIvw = oR85F1UIvw + (75 - 74);
                }
            }
            aR5nVE = aR5nVE + (527 - 526);
        }
    }
    scanf ("%d%d", &XZsyd7c, &FOg4RVmd5);
    if (Kvi7xKkEDa3 (QlUBeb, XZsyd7c, FOg4RVmd5) == (961 - 961))
        printf ("error");
    else {
        aR5nVE = (626 - 626);
        while (aR5nVE < (467 - 462)) {
            {
                oR85F1UIvw = 0;
                while (oR85F1UIvw < (956 - 952)) {
                    printf ("%d ", *(*(QlUBeb +aR5nVE) + oR85F1UIvw));
                    oR85F1UIvw = oR85F1UIvw + (814 - 813);
                }
            }
            printf ("%d\n", *(*(QlUBeb +aR5nVE) + (182 - 178)));
            aR5nVE = aR5nVE + 1;
        }
    }
}

