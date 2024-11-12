struct   book {
    int riBmDFQ7H;
    char PBOI89j7 [(580 - 554)];
}
main () {
    int VitBOpeG18D [(754 - 728)] = {(657 - 657)};
    int H0sT8wJ4aA5q, gbqvamLo6xh, j, GPYA5gkQz, ENgJpI1uM = (743 - 743), IGfuqJvpzriX;
    struct   book EbZrziopwhBS [(1487 - 488)];
    scanf ("%d", &H0sT8wJ4aA5q);
    for (gbqvamLo6xh = (724 - 724); gbqvamLo6xh < H0sT8wJ4aA5q; gbqvamLo6xh++) {
        scanf ("%d %s", &EbZrziopwhBS[gbqvamLo6xh].riBmDFQ7H, EbZrziopwhBS[gbqvamLo6xh].PBOI89j7);
        for (j = (504 - 504); EbZrziopwhBS[gbqvamLo6xh].PBOI89j7[j] != '\0'; j++)
            for (GPYA5gkQz = (243 - 178); GPYA5gkQz < (1008 - 917); GPYA5gkQz++)
                if (EbZrziopwhBS[gbqvamLo6xh].PBOI89j7[j] == GPYA5gkQz)
                    VitBOpeG18D[GPYA5gkQz -(291 - 226)]++;
    }
    for (gbqvamLo6xh = (568 - 568); (956 - 930) > gbqvamLo6xh; gbqvamLo6xh++)
        if (ENgJpI1uM < VitBOpeG18D[gbqvamLo6xh])
            ENgJpI1uM = VitBOpeG18D[gbqvamLo6xh];
    for (gbqvamLo6xh = (774 - 774); (758 - 732) > gbqvamLo6xh; gbqvamLo6xh++)
        if (!(VitBOpeG18D[gbqvamLo6xh] != ENgJpI1uM)) {
            IGfuqJvpzriX = gbqvamLo6xh + (404 - 339);
            printf ("%c\n%d\n", IGfuqJvpzriX, VitBOpeG18D[IGfuqJvpzriX -(490 - 425)]);
        }
    for (gbqvamLo6xh = (714 - 714); H0sT8wJ4aA5q > gbqvamLo6xh; gbqvamLo6xh++)
        for (j = (802 - 802); EbZrziopwhBS[gbqvamLo6xh].PBOI89j7[j] != '\0'; j++)
            if (IGfuqJvpzriX == EbZrziopwhBS[gbqvamLo6xh].PBOI89j7[j])
                printf ("%d\n", EbZrziopwhBS[gbqvamLo6xh].riBmDFQ7H);
}

