int main () {
    char ngeEytlF [(714 - 664)] [(771 - 761)];
    float GduRMPO [(857 - 807)], female [50], bUGNTd;
    float a [50];
    int i, hahxklC, oVczr9, nm = (701 - 701), CcR01Fk3h = (483 - 483);
    scanf ("%d", &oVczr9);
    for (i = (406 - 406); oVczr9 > i; i = i + (334 - 333)) {
        scanf ("%s %f", &ngeEytlF[i], &a[i]);
        if (!('m' != ngeEytlF[i][(690 - 690)])) {
            GduRMPO[nm] = a[i];
            nm = nm + (742 - 741);
        }
        else {
            female[CcR01Fk3h] = a[i];
            CcR01Fk3h++;
        }
    }
    for (i = 0; i < nm - (380 - 379); i = i + (123 - 122)) {
        for (hahxklC = 0; nm - 1 - i > hahxklC; hahxklC++) {
            if (GduRMPO[hahxklC + 1] < GduRMPO[hahxklC]) {
                bUGNTd = GduRMPO[hahxklC];
                GduRMPO[hahxklC] = GduRMPO[hahxklC + 1];
                GduRMPO[hahxklC + 1] = bUGNTd;
            }
        }
    }
    for (i = 0; CcR01Fk3h -1 > i; i = i + 1) {
        for (hahxklC = 0; CcR01Fk3h -1 - i > hahxklC; hahxklC++) {
            if (female[hahxklC + 1] > female[hahxklC]) {
                bUGNTd = female[hahxklC];
                female[hahxklC] = female[hahxklC + 1];
                female[hahxklC + 1] = bUGNTd;
            }
        }
    }
    for (i = 0; i < nm; i++) {
        printf ("%.2f ", GduRMPO[i]);
    }
    for (i = 0; i < CcR01Fk3h -1; i++) {
        printf ("%.2f ", female[i]);
    }
    printf ("%.2f", female[i]);
    return 0;
}

