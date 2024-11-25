void  main () {
    int HsEaJ0TmH3;
    char yCfKSi1JG [80];
    gets (yCfKSi1JG);
    int WWGqNQ;
    int C6fQI8KGAks;
    char EkEr4Bs [(1055 - 975)];
    int lHQJIPO89t;
    int UoOXF2;
    gets (EkEr4Bs);
    lHQJIPO89t = strlen (yCfKSi1JG);
    HsEaJ0TmH3 = (876 - 876);
    C6fQI8KGAks = (67 - 67);
    for (UoOXF2 = (209 - 209); UoOXF2 < lHQJIPO89t; UoOXF2 = UoOXF2 +1) {
        if (yCfKSi1JG[UoOXF2] >= 'A' && 'Z' >= yCfKSi1JG[UoOXF2])
            yCfKSi1JG[UoOXF2] = yCfKSi1JG[UoOXF2] + (170 - 138);
    }
    for (UoOXF2 = (748 - 748); UoOXF2 < lHQJIPO89t; UoOXF2++) {
        if ('A' <= EkEr4Bs[UoOXF2] && 'Z' >= EkEr4Bs[UoOXF2])
            EkEr4Bs[UoOXF2] = EkEr4Bs[UoOXF2] + 32;
    }
    for (UoOXF2 = 0; lHQJIPO89t > UoOXF2; UoOXF2++) {
        if (yCfKSi1JG[UoOXF2] > EkEr4Bs[UoOXF2]) {
            HsEaJ0TmH3 = HsEaJ0TmH3 +1;
            break;
        }
        else {
            if (yCfKSi1JG[UoOXF2] < EkEr4Bs[UoOXF2]) {
                C6fQI8KGAks++;
                break;
            }
            else
                continue;
        }
    }
    if (HsEaJ0TmH3 == 0 && C6fQI8KGAks == 0)
        ;
    else if (HsEaJ0TmH3 == 0 && C6fQI8KGAks != 0)
        printf ("<\n");
    else
        ;
}

