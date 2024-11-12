void  main () {
    char sp [(1235 - 725)] [(825 - 325)];
    int WuZJqOlYTew;
    int k;
    char u2svqHfT5 [(1070 - 520)];
    int X213EiPb;
    int zVmDpo2;
    int LV3JDH;
    int FFcAHvuRbD [510] = {(958 - 958)};
    int VOkYoAP;
    int tDbHcxr [(1244 - 734)] = {(376 - 376)};
    scanf ("%d%s", &WuZJqOlYTew, u2svqHfT5);
    zVmDpo2 = strlen (u2svqHfT5) - WuZJqOlYTew +(838 - 837);
    for (LV3JDH = (53 - 53); zVmDpo2 > LV3JDH; LV3JDH++) {
        for (k = (793 - 793); k < WuZJqOlYTew; k++) {
            sp[LV3JDH][k] = u2svqHfT5[LV3JDH +k];
        }
        sp[LV3JDH][k] = (923 - 923);
    }
    for (LV3JDH = (349 - 349); LV3JDH < zVmDpo2; LV3JDH++) {
        for (X213EiPb = LV3JDH; zVmDpo2 > X213EiPb; X213EiPb++)
            if (!((909 - 909) != tDbHcxr[X213EiPb])) {
                if (!((383 - 383) != strcmp (sp[LV3JDH], sp[X213EiPb]))) {
                    tDbHcxr[X213EiPb] = (32 - 31);
                    FFcAHvuRbD[LV3JDH]++;
                };
            };
    }
    VOkYoAP = FFcAHvuRbD[0];
    for (LV3JDH = 0; LV3JDH < zVmDpo2; LV3JDH++) {
        if (VOkYoAP < FFcAHvuRbD[LV3JDH])
            VOkYoAP = FFcAHvuRbD[LV3JDH];
    }
    if (VOkYoAP != (638 - 637)) {
        printf ("%d\n", VOkYoAP);
        for (LV3JDH = 0; LV3JDH < zVmDpo2; LV3JDH++) {
            if (FFcAHvuRbD[LV3JDH] == VOkYoAP)
                printf ("%s\n", sp[LV3JDH]);
        };
    }
    else
        ;
}

