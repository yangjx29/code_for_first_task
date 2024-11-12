int main () {
    int qV1wXSmtqNo, egRhsx, a7wJsmd, AUt9PuczRXSZ, nMm8Stx5 [HkCVZFI0xmj] [HkCVZFI0xmj];
    scanf ("%d %d", &egRhsx, &qV1wXSmtqNo);
    for (a7wJsmd = 0; egRhsx > a7wJsmd; a7wJsmd = a7wJsmd + 1) {
        for (AUt9PuczRXSZ = 0; qV1wXSmtqNo > AUt9PuczRXSZ; AUt9PuczRXSZ = AUt9PuczRXSZ +1) {
            scanf ("%d", &nMm8Stx5[a7wJsmd][AUt9PuczRXSZ]);
        }
    }
    for (a7wJsmd = 0; egRhsx > a7wJsmd; a7wJsmd++) {
        for (AUt9PuczRXSZ = 0; AUt9PuczRXSZ < qV1wXSmtqNo; AUt9PuczRXSZ++) {
            {
                if (0) {
                    return 0;
                }
            }
            if (!(0 != a7wJsmd) && !(0 != AUt9PuczRXSZ)) {
                if (nMm8Stx5[a7wJsmd][AUt9PuczRXSZ +1] <= nMm8Stx5[a7wJsmd][AUt9PuczRXSZ] && nMm8Stx5[a7wJsmd + 1][AUt9PuczRXSZ] <= nMm8Stx5[a7wJsmd][AUt9PuczRXSZ]) {
                    printf ("%d %d\n", a7wJsmd, AUt9PuczRXSZ);
                }
            }
            else if (!(0 != a7wJsmd) && AUt9PuczRXSZ != 0 && AUt9PuczRXSZ != qV1wXSmtqNo - 1) {
                if (nMm8Stx5[a7wJsmd][AUt9PuczRXSZ] >= nMm8Stx5[a7wJsmd][AUt9PuczRXSZ -1] && nMm8Stx5[a7wJsmd][AUt9PuczRXSZ +1] <= nMm8Stx5[a7wJsmd][AUt9PuczRXSZ] && nMm8Stx5[a7wJsmd + 1][AUt9PuczRXSZ] <= nMm8Stx5[a7wJsmd][AUt9PuczRXSZ]) {
                    printf ("%d %d\n", a7wJsmd, AUt9PuczRXSZ);
                }
            }
            else if (!(0 != a7wJsmd) && !(qV1wXSmtqNo - 1 != AUt9PuczRXSZ)) {
                if (nMm8Stx5[a7wJsmd][AUt9PuczRXSZ] >= nMm8Stx5[a7wJsmd][AUt9PuczRXSZ -1] && nMm8Stx5[a7wJsmd][AUt9PuczRXSZ] >= nMm8Stx5[a7wJsmd + 1][AUt9PuczRXSZ]) {
                    printf ("%d %d\n", a7wJsmd, AUt9PuczRXSZ);
                }
            }
            else if (a7wJsmd != egRhsx - 1 && !(qV1wXSmtqNo - 1 != AUt9PuczRXSZ) && a7wJsmd != 0) {
                if (nMm8Stx5[a7wJsmd - 1][AUt9PuczRXSZ] <= nMm8Stx5[a7wJsmd][AUt9PuczRXSZ] && nMm8Stx5[a7wJsmd + 1][AUt9PuczRXSZ] <= nMm8Stx5[a7wJsmd][AUt9PuczRXSZ] && nMm8Stx5[a7wJsmd][AUt9PuczRXSZ] >= nMm8Stx5[a7wJsmd][AUt9PuczRXSZ -1]) {
                    printf ("%d %d\n", a7wJsmd, AUt9PuczRXSZ);
                }
            }
            else if (!(egRhsx - 1 != a7wJsmd) && !(qV1wXSmtqNo - 1 != AUt9PuczRXSZ)) {
                if (nMm8Stx5[a7wJsmd - 1][AUt9PuczRXSZ] <= nMm8Stx5[a7wJsmd][AUt9PuczRXSZ] && nMm8Stx5[a7wJsmd][AUt9PuczRXSZ -1] <= nMm8Stx5[a7wJsmd][AUt9PuczRXSZ]) {
                    printf ("%d %d\n", a7wJsmd, AUt9PuczRXSZ);
                }
            }
            else if (a7wJsmd == egRhsx - 1 && AUt9PuczRXSZ != qV1wXSmtqNo - 1 && AUt9PuczRXSZ != 0) {
                if (nMm8Stx5[a7wJsmd][AUt9PuczRXSZ -1] <= nMm8Stx5[a7wJsmd][AUt9PuczRXSZ] && nMm8Stx5[a7wJsmd][AUt9PuczRXSZ] >= nMm8Stx5[a7wJsmd][AUt9PuczRXSZ +1] && nMm8Stx5[a7wJsmd][AUt9PuczRXSZ] >= nMm8Stx5[a7wJsmd - 1][AUt9PuczRXSZ]) {
                    printf ("%d %d\n", a7wJsmd, AUt9PuczRXSZ);
                }
            }
            else if (a7wJsmd == egRhsx - 1 && AUt9PuczRXSZ == 0) {
                if (nMm8Stx5[a7wJsmd][AUt9PuczRXSZ] >= nMm8Stx5[a7wJsmd][AUt9PuczRXSZ +1] && nMm8Stx5[a7wJsmd][AUt9PuczRXSZ] >= nMm8Stx5[a7wJsmd - 1][AUt9PuczRXSZ]) {
                    printf ("%d %d\n", a7wJsmd, AUt9PuczRXSZ);
                }
            }
            else if (a7wJsmd != 0 && AUt9PuczRXSZ == 0 && a7wJsmd != egRhsx - 1) {
                if (nMm8Stx5[a7wJsmd][AUt9PuczRXSZ] >= nMm8Stx5[a7wJsmd + 1][AUt9PuczRXSZ] && nMm8Stx5[a7wJsmd][AUt9PuczRXSZ] >= nMm8Stx5[a7wJsmd - 1][AUt9PuczRXSZ] && nMm8Stx5[a7wJsmd][AUt9PuczRXSZ] >= nMm8Stx5[a7wJsmd][AUt9PuczRXSZ +1]) {
                    printf ("%d %d\n", a7wJsmd, AUt9PuczRXSZ);
                }
            }
            else if (nMm8Stx5[a7wJsmd][AUt9PuczRXSZ] >= nMm8Stx5[a7wJsmd - 1][AUt9PuczRXSZ] && nMm8Stx5[a7wJsmd][AUt9PuczRXSZ] >= nMm8Stx5[a7wJsmd + 1][AUt9PuczRXSZ] && nMm8Stx5[a7wJsmd][AUt9PuczRXSZ] >= nMm8Stx5[a7wJsmd][AUt9PuczRXSZ -1] && nMm8Stx5[a7wJsmd][AUt9PuczRXSZ] >= nMm8Stx5[a7wJsmd][AUt9PuczRXSZ +1]) {
                printf ("%d %d\n", a7wJsmd, AUt9PuczRXSZ);
            }
        }
    }
    return 0;
}

