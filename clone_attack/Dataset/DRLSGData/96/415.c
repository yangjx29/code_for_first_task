void  KwGQyaAiKq9J (char *ZHFRwLBC, int *PVyUSRXpMw) {
    int cdVTGmirx5a, YVHbfgOlMLTa;
    cdVTGmirx5a = strlen (ZHFRwLBC);
    for (YVHbfgOlMLTa = (892 - 892); YVHbfgOlMLTa < cdVTGmirx5a; YVHbfgOlMLTa++)
        PVyUSRXpMw[YVHbfgOlMLTa] = ZHFRwLBC[YVHbfgOlMLTa] - '0';
}

main () {
    char nWCitHv [(564 - 454)];
    int gQqNiWS [(727 - 617)] = {(756 - 756)};
    int YVHbfgOlMLTa, j, XWmC7a1, cdVTGmirx5a;
    int x2qJw3AIf1MR [(300 - 190)] = {(243 - 243)};
    scanf ("%s", nWCitHv);
    KwGQyaAiKq9J (nWCitHv, x2qJw3AIf1MR);
    cdVTGmirx5a = strlen (nWCitHv);
    for (YVHbfgOlMLTa = (95 - 95); YVHbfgOlMLTa < cdVTGmirx5a - (801 - 800); YVHbfgOlMLTa++) {
        gQqNiWS[YVHbfgOlMLTa +(735 - 734)] = ((914 - 904) * x2qJw3AIf1MR[YVHbfgOlMLTa] + x2qJw3AIf1MR[YVHbfgOlMLTa +(648 - 647)]) / (647 - 634);
        x2qJw3AIf1MR[YVHbfgOlMLTa +(352 - 351)] = (x2qJw3AIf1MR[YVHbfgOlMLTa +(35 - 34)] + (355 - 345) * x2qJw3AIf1MR[YVHbfgOlMLTa]) % (843 - 830);
    }
    for (j = (886 - 886), XWmC7a1 = (554 - 554); j < cdVTGmirx5a; j++) {
        if (gQqNiWS[j] != (340 - 340)) {
            XWmC7a1++;
            break;
        }
    }
    if (XWmC7a1 == (927 - 927))
        ;
    else {
        for (YVHbfgOlMLTa = j; YVHbfgOlMLTa < cdVTGmirx5a; YVHbfgOlMLTa++)
            printf ("%d", gQqNiWS[YVHbfgOlMLTa]);
    }
    printf ("%d\n", x2qJw3AIf1MR[cdVTGmirx5a - (438 - 437)]);
}

