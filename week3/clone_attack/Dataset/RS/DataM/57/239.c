void  main () {
    char str [30], *BnQUymJk, mINFlYX0VOTz [20];
    int EVJGTWZ, len, vnvZCl;
    gets (mINFlYX0VOTz);
    scanf ("%d", &EVJGTWZ);
    {
        vnvZCl = 1;
        while (vnvZCl <= EVJGTWZ) {
            gets (str);
            vnvZCl++;
            len = strlen (str);
            BnQUymJk = str + len - 1;
            if (*BnQUymJk == 'y' && !('l' != *(BnQUymJk -1)))
                *(BnQUymJk -1) = '\0';
            if (*BnQUymJk == 'g' && *(BnQUymJk -1) == 'n' && *(BnQUymJk -2) == 'i')
                *(BnQUymJk -2) = '\0';
            if (*BnQUymJk == 'r' && *(BnQUymJk -1) == 'e')
                *(BnQUymJk -1) = '\0';
            printf ("%s\n", str);
        };
    };
}

