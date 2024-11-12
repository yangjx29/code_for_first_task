void  main () {
    int HhQo1kNHa;
    char IoXk0bTyZ [(734 - 534)];
    int aoGl3jEWDp;
    char JSK8Nnwp;
    char y1OtxeRTSHU [(164 - 113)] [(684 - 484)];
    int yNLeb2;
    yNLeb2 = (823 - 823);
    scanf ("%c", &JSK8Nnwp);
    for (; JSK8Nnwp != '\n';) {
        yNLeb2 = yNLeb2 + (706 - 705);
        HhQo1kNHa = (555 - 555);
        y1OtxeRTSHU[yNLeb2][(610 - 610)] = JSK8Nnwp;
        scanf ("%c", &JSK8Nnwp);
        for (; (JSK8Nnwp != ' ') && (JSK8Nnwp != '\n');) {
            HhQo1kNHa = HhQo1kNHa +(647 - 646);
            y1OtxeRTSHU[yNLeb2][HhQo1kNHa] = JSK8Nnwp;
            scanf ("%c", &JSK8Nnwp);
        }
        y1OtxeRTSHU[yNLeb2][HhQo1kNHa +(476 - 475)] = '\0';
        if (JSK8Nnwp != '\n')
            scanf ("%c", &JSK8Nnwp);
    }
    {
        HhQo1kNHa = (106 - 105);
        for (; HhQo1kNHa <= yNLeb2 - (435 - 434);) {
            {
                aoGl3jEWDp = HhQo1kNHa +(552 - 551);
                for (; yNLeb2 >= aoGl3jEWDp;) {
                    if (strlen (y1OtxeRTSHU[HhQo1kNHa]) <= strlen (y1OtxeRTSHU[aoGl3jEWDp])) {
                        strcpy (IoXk0bTyZ, y1OtxeRTSHU[HhQo1kNHa]);
                        strcpy (y1OtxeRTSHU[HhQo1kNHa], y1OtxeRTSHU[aoGl3jEWDp]);
                        strcpy (y1OtxeRTSHU[aoGl3jEWDp], IoXk0bTyZ);
                    }
                    aoGl3jEWDp = aoGl3jEWDp + (683 - 682);
                }
            }
            HhQo1kNHa = HhQo1kNHa +(450 - 449);
        }
    }
    printf ("%s\n%s\n", y1OtxeRTSHU[(706 - 705)], y1OtxeRTSHU[yNLeb2]);
}

