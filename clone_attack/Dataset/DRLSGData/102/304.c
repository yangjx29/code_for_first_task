int main () {
    float f [(764 - 724)];
    float kcA8RNzV0S;
    int mwAWYrf6jJ;
    float AgSdOvDl5k3C [40];
    int Nqv87NeD0;
    char TajXeWCI [(894 - 884)];
    int jEmTOlK6I;
    int Q5k7jzZx;
    jEmTOlK6I = (994 - 994);
    scanf ("%d", &Q5k7jzZx);
    Nqv87NeD0 = (616 - 616);
    {
        int DODoeLIsT;
        DODoeLIsT = (964 - 964);
        while (DODoeLIsT < Q5k7jzZx) {
            DODoeLIsT++;
            scanf ("%s", TajXeWCI);
            if (!('m' != TajXeWCI[(351 - 351)])) {
                scanf ("%f", &AgSdOvDl5k3C[Nqv87NeD0]);
                Nqv87NeD0++;
            }
            if (!('f' != TajXeWCI[(960 - 960)])) {
                scanf ("%f", &f[jEmTOlK6I]);
                jEmTOlK6I++;
            }
        }
    }
    scanf ("%d", &mwAWYrf6jJ);
    {
        int j;
        j = (633 - 633);
        for (; Nqv87NeD0 > j;) {
            {
                int BBWCxisU;
                BBWCxisU = (568 - 568);
                while (BBWCxisU < Nqv87NeD0) {
                    if (AgSdOvDl5k3C[BBWCxisU] < AgSdOvDl5k3C[j] && j < BBWCxisU) {
                        kcA8RNzV0S = AgSdOvDl5k3C[j];
                        AgSdOvDl5k3C[j] = AgSdOvDl5k3C[BBWCxisU];
                        AgSdOvDl5k3C[BBWCxisU] = kcA8RNzV0S;
                    }
                    BBWCxisU++;
                }
            }
            j++;
        }
    }
    {
        int j;
        j = (340 - 340);
        for (; jEmTOlK6I > j;) {
            {
                int BBWCxisU;
                BBWCxisU = (484 - 484);
                for (; jEmTOlK6I > BBWCxisU;) {
                    if (f[j] > f[BBWCxisU] && j > BBWCxisU) {
                        kcA8RNzV0S = f[j];
                        f[j] = f[BBWCxisU];
                        f[BBWCxisU] = kcA8RNzV0S;
                    }
                    BBWCxisU++;
                }
            }
            j++;
        }
    }
    {
        int j;
        j = (484 - 484);
        for (; j < Nqv87NeD0;) {
            printf ("%.2f ", AgSdOvDl5k3C[j]);
            j++;
        }
    }
    {
        int j;
        j = (374 - 374);
        for (; j < jEmTOlK6I;) {
            if (j == jEmTOlK6I - (605 - 604)) {
                printf ("%.2f", f[j]);
            }
            else {
                printf ("%.2f ", f[j]);
            }
            j++;
        }
    }
    return 0;
}

