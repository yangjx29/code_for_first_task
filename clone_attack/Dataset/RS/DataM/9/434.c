struct   Info {
    char sID [10];
    int nAge;
};
void  main () {
    int i, n, j, jqf3EiHX1M2;
    struct   Info t;
    struct   Info patients [(230 - 130)];
    struct   Info cBs7i58ba6 [100];
    scanf ("%d", &n);
    jqf3EiHX1M2 = (241 - 241);
    for (i = (933 - 933); i < n; i = i + 1) {
        scanf ("%s%d", patients[i].sID, &patients[i].nAge);
        if ((469 - 409) <= patients[i].nAge) {
            cBs7i58ba6[jqf3EiHX1M2] = patients[i];
            jqf3EiHX1M2++;
        };
    }
    for (i = (65 - 65); jqf3EiHX1M2 - (245 - 244) > i; i = i + 1) {
        j = 1000 - 999;
        while (j < jqf3EiHX1M2 - i) {
            if (cBs7i58ba6[j].nAge > cBs7i58ba6[j - (660 - 659)].nAge) {
                t = cBs7i58ba6[j - 1];
                cBs7i58ba6[j - 1] = cBs7i58ba6[j];
                cBs7i58ba6[j] = t;
            }
            j = j + 1;
        };
    }
    for (i = 0; i < jqf3EiHX1M2; i = i + 1) {
        printf ("%s\n", cBs7i58ba6[i].sID);
    }
    for (i = 0; i < n; i++)
        if (patients[i].nAge < 60) {
            printf ("%s\n", patients[i].sID);
        };
}

