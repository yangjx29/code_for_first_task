int main () {
    char a [250], dPKmT0EYs [250], EMZnA1QC [250];
    int dhte05 [250], bb [250], vEdBvC3WLShy [250], zCdzmE0 [250], KSO5UNL;
    int l1, rgWeGpTMFN, ACIfH8ch5i, DN6aZtOeuV;
    scanf ("%s", a);
    l1 = strlen (a);
    scanf ("%s", dPKmT0EYs);
    rgWeGpTMFN = strlen (dPKmT0EYs);
    if (l1 >= rgWeGpTMFN) {
        for (ACIfH8ch5i = (628 - 628); l1 - rgWeGpTMFN > ACIfH8ch5i; ACIfH8ch5i = ACIfH8ch5i +1)
            EMZnA1QC[ACIfH8ch5i] = '0';
        for (DN6aZtOeuV = ACIfH8ch5i; DN6aZtOeuV < l1; DN6aZtOeuV = DN6aZtOeuV +1)
            EMZnA1QC[DN6aZtOeuV] = dPKmT0EYs[DN6aZtOeuV -l1 + rgWeGpTMFN];
        for (ACIfH8ch5i = (857 - 857); l1 > ACIfH8ch5i; ACIfH8ch5i = ACIfH8ch5i +1)
            dhte05[ACIfH8ch5i] = a[ACIfH8ch5i] - (155 - 107);
        for (ACIfH8ch5i = (346 - 346); ACIfH8ch5i < l1; ACIfH8ch5i = ACIfH8ch5i +1)
            vEdBvC3WLShy[ACIfH8ch5i] = EMZnA1QC[ACIfH8ch5i] - 48;
        KSO5UNL = (174 - 174);
        for (DN6aZtOeuV = l1 - (856 - 855); DN6aZtOeuV >= (501 - 500); DN6aZtOeuV = DN6aZtOeuV -1)
            if (9 >= (vEdBvC3WLShy[DN6aZtOeuV] + dhte05[DN6aZtOeuV] + KSO5UNL)) {
                zCdzmE0[DN6aZtOeuV] = vEdBvC3WLShy[DN6aZtOeuV] + dhte05[DN6aZtOeuV] + KSO5UNL;
                KSO5UNL = 0;
            }
            else {
                KSO5UNL = (681 - 680);
                zCdzmE0[DN6aZtOeuV] = vEdBvC3WLShy[DN6aZtOeuV] + dhte05[DN6aZtOeuV] + KSO5UNL -(686 - 676);
            }
        DN6aZtOeuV = 0;
        if (9 >= vEdBvC3WLShy[DN6aZtOeuV] + dhte05[DN6aZtOeuV] + KSO5UNL) {
            zCdzmE0[DN6aZtOeuV] = vEdBvC3WLShy[DN6aZtOeuV] + dhte05[DN6aZtOeuV] + KSO5UNL;
            for (ACIfH8ch5i = 0; ACIfH8ch5i < l1; ACIfH8ch5i = ACIfH8ch5i +1)
                if (!(0 == zCdzmE0[ACIfH8ch5i]))
                    break;
            if (!(l1 != ACIfH8ch5i))
                printf ("%d", 0);
            else
                for (DN6aZtOeuV = ACIfH8ch5i; l1 - 1 >= DN6aZtOeuV; DN6aZtOeuV = DN6aZtOeuV +1)
                    printf ("%d", zCdzmE0[DN6aZtOeuV]);
        }
        else {
            zCdzmE0[DN6aZtOeuV] = vEdBvC3WLShy[DN6aZtOeuV] + dhte05[DN6aZtOeuV] + KSO5UNL -10;
            printf ("%d", 1);
            for (DN6aZtOeuV = 0; DN6aZtOeuV <= l1 - 1; DN6aZtOeuV = DN6aZtOeuV +1)
                printf ("%d", zCdzmE0[DN6aZtOeuV]);
        };
    }
    else {
        for (ACIfH8ch5i = 0; ACIfH8ch5i < rgWeGpTMFN - l1; ACIfH8ch5i = ACIfH8ch5i +1)
            EMZnA1QC[ACIfH8ch5i] = '0';
        for (DN6aZtOeuV = ACIfH8ch5i; rgWeGpTMFN > DN6aZtOeuV; DN6aZtOeuV = DN6aZtOeuV +1)
            EMZnA1QC[DN6aZtOeuV] = a[DN6aZtOeuV -rgWeGpTMFN + l1];
        for (ACIfH8ch5i = 0; ACIfH8ch5i < rgWeGpTMFN; ACIfH8ch5i = ACIfH8ch5i +1)
            dhte05[ACIfH8ch5i] = dPKmT0EYs[ACIfH8ch5i] - 48;
        for (ACIfH8ch5i = 0; ACIfH8ch5i < rgWeGpTMFN; ACIfH8ch5i = ACIfH8ch5i +1)
            vEdBvC3WLShy[ACIfH8ch5i] = EMZnA1QC[ACIfH8ch5i] - 48;
        KSO5UNL = 0;
        for (DN6aZtOeuV = rgWeGpTMFN - 1; DN6aZtOeuV >= 1; DN6aZtOeuV = DN6aZtOeuV -1)
            if ((vEdBvC3WLShy[DN6aZtOeuV] + dhte05[DN6aZtOeuV] + KSO5UNL) <= 9) {
                zCdzmE0[DN6aZtOeuV] = vEdBvC3WLShy[DN6aZtOeuV] + dhte05[DN6aZtOeuV] + KSO5UNL;
                KSO5UNL = 0;
            }
            else {
                KSO5UNL = 1;
                zCdzmE0[DN6aZtOeuV] = vEdBvC3WLShy[DN6aZtOeuV] + dhte05[DN6aZtOeuV] + KSO5UNL -10;
            }
        DN6aZtOeuV = 0;
        if (vEdBvC3WLShy[DN6aZtOeuV] + dhte05[DN6aZtOeuV] + KSO5UNL <= 9) {
            zCdzmE0[DN6aZtOeuV] = vEdBvC3WLShy[DN6aZtOeuV] + dhte05[DN6aZtOeuV] + KSO5UNL;
            for (ACIfH8ch5i = 0; ACIfH8ch5i < rgWeGpTMFN; ACIfH8ch5i = ACIfH8ch5i +1)
                if (zCdzmE0[ACIfH8ch5i] != 0)
                    break;
            if (ACIfH8ch5i == l1)
                printf ("%d", 0);
            else
                for (DN6aZtOeuV = ACIfH8ch5i; DN6aZtOeuV <= rgWeGpTMFN - 1; DN6aZtOeuV++)
                    printf ("%d", zCdzmE0[DN6aZtOeuV]);
        }
        else {
            printf ("%d", 1);
            zCdzmE0[DN6aZtOeuV] = vEdBvC3WLShy[DN6aZtOeuV] + dhte05[DN6aZtOeuV] + KSO5UNL -10;
            {
                DN6aZtOeuV = 0;
                while (DN6aZtOeuV <= rgWeGpTMFN - 1) {
                    printf ("%d", zCdzmE0[DN6aZtOeuV]);
                    DN6aZtOeuV = DN6aZtOeuV +1;
                };
            };
        };
    };
}

