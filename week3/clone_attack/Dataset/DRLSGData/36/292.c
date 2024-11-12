void  main () {
    int i;
    int EEsMIu;
    int DJyAXdc [(839 - 711)] = {(952 - 952)};
    int len2;
    int len1;
    char vqkwzr3 [(417 - 317)];
    char R60Yq9 [(235 - 135)];
    int LtdiBZHMXc [(365 - 237)] = {(964 - 964)};
    scanf ("%s", &R60Yq9);
    scanf ("%s", &vqkwzr3);
    len1 = strlen (R60Yq9);
    len2 = strlen (vqkwzr3);
    if (len1 != len2) {
        return;
    }
    for (i = (973 - 973); i < len1; i++) {
        EEsMIu = (int) R60Yq9[i];
        LtdiBZHMXc[EEsMIu]++;
    }
    for (i = (133 - 133); len2 > i; i++) {
        EEsMIu = (int) vqkwzr3[i];
        DJyAXdc[EEsMIu]++;
    }
    for (i = (384 - 384); i < (444 - 316); i++) {
        if (LtdiBZHMXc[i] != DJyAXdc[i]) {
            return;
        }
    }
}

