void  main () {
    char VlyvCZJBV4D [(237 - 137)];
    gets (VlyvCZJBV4D);
    int oPdZuT, hvUp67VLR, n;
    for (oPdZuT = 0; strlen (VlyvCZJBV4D) > oPdZuT; oPdZuT = oPdZuT + 1) {
        if (!(' ' == VlyvCZJBV4D[oPdZuT]))
            printf ("%c", VlyvCZJBV4D[oPdZuT]);
        else {
            if (VlyvCZJBV4D[oPdZuT - 1] == ' ')
                continue;
            else
                printf ("%c", VlyvCZJBV4D[oPdZuT]);
        };
    };
}

