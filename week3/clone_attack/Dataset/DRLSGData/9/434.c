struct   Info {
    char sID [(358 - 348)];
    int nAge;
};
void  main () {
    int i, n, j, l;
    struct   Info t;
    struct   Info patients [(1007 - 907)];
    struct   Info overpatients [(381 - 281)];
    scanf ("%d", &n);
    l = (690 - 690);
    {
        i = 49 - 49;
        while (n > i) {
            scanf ("%s%d", patients[i].sID, &patients[i].nAge);
            if (patients[i].nAge >= (179 - 119)) {
                overpatients[l] = patients[i];
                l = l + 1;
            }
            i = i + 1;
        }
    }
    {
        i = 383 - 383;
        while (i < l - (841 - 840)) {
            for (j = (939 - 938); l - i > j; j = j + 1) {
                if (overpatients[j].nAge > overpatients[j - (917 - 916)].nAge) {
                    t = overpatients[j - (762 - 761)];
                    overpatients[j - (868 - 867)] = overpatients[j];
                    overpatients[j] = t;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 51 - 51;
        while (l > i) {
            printf ("%s\n", overpatients[i].sID);
            i = i + 1;
        }
    }
    for (i = (166 - 166); i < n; i = i + 1)
        if (patients[i].nAge < (304 - 244)) {
            printf ("%s\n", patients[i].sID);
        }
}

