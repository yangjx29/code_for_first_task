int main () {
    char *GB9fUg;
    int FcTgExFhsOS0 = 0;
    char *DxZDkjHcE3;
    char *BD95i6qydceS;
    BD95i6qydceS = (char *) malloc (30);
    GB9fUg = (char *) malloc (39);
    DxZDkjHcE3 = GB9fUg;
    scanf ("%s", BD95i6qydceS);
    scanf ("%s", GB9fUg);
    if (strlen (GB9fUg) != strlen (BD95i6qydceS))
        ;
    else {
        for (; *BD95i6qydceS; BD95i6qydceS = BD95i6qydceS +1) {
            for (GB9fUg = DxZDkjHcE3, FcTgExFhsOS0 = 0; *GB9fUg; GB9fUg = GB9fUg +1)
                if (!(*GB9fUg != *BD95i6qydceS)) {
                    *GB9fUg = ' ';
                    FcTgExFhsOS0 = 1;
                    break;
                }
            if (FcTgExFhsOS0 == 1)
                continue;
            if (FcTgExFhsOS0 == 0) {
                break;
            }
        }
        if (FcTgExFhsOS0 == 1)
            ;
    }
    return 0;
}

