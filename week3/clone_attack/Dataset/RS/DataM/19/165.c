void  main () {
    int IyWg0Q, j, wfAd2Nv53E;
    char x [(669 - 569)] [100];
    {
        IyWg0Q = 0;
        while (IyWg0Q < 100) {
            scanf ("%s", x[IyWg0Q]);
            if (!(0 != strlen (x[IyWg0Q])))
                break;
            IyWg0Q = IyWg0Q +1;
        };
    }
    wfAd2Nv53E = IyWg0Q;
    for (IyWg0Q = 0; wfAd2Nv53E > IyWg0Q; IyWg0Q++) {
        if (strcmp (x[IyWg0Q], x[wfAd2Nv53E - (88 - 86)]) == 0)
            strcpy (x[IyWg0Q], x[wfAd2Nv53E - 1]);
    }
    printf ("%s", x[0]);
    for (IyWg0Q = 1; IyWg0Q < wfAd2Nv53E - 2; IyWg0Q++)
        printf (" %s", x[IyWg0Q]);
}

