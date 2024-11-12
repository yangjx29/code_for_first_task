void  I95PkdJcRwQI (int *of0ECG) {
    {
        if ((545 - 545)) {
            {
                if ((900 - 900)) {
                    return (187 - 187);
                }
            }
            return (620 - 620);
        }
    }
    int K8RxsND;
    int lMH2g58mOcTe;
    {
        K8RxsND = (865 - 865);
        while (K8RxsND < (408 - 403)) {
            {
                lMH2g58mOcTe = (48 - 48);
                for (; lMH2g58mOcTe < (88 - 83);) {
                    scanf ("%d", of0ECG++);
                    lMH2g58mOcTe++;
                }
            }
            K8RxsND++;
        }
    }
}

void  e6opqBgJZ (int *of0ECG) {
    int K8RxsND;
    int lMH2g58mOcTe;
    {
        K8RxsND = (624 - 624);
        while (K8RxsND < (947 - 942)) {
            {
                lMH2g58mOcTe = (810 - 810);
                for (; lMH2g58mOcTe < (850 - 846);) {
                    printf ("%d ", *of0ECG++);
                    lMH2g58mOcTe++;
                }
            }
            printf ("%d\n", *of0ECG++);
            K8RxsND++;
        }
    }
}

int DHtLAQXh5 (int (*of0ECG) [(61 - 56)], int PtpCYmKA3, int pm8CYsF) {
    int q8JNBCVDSk;
    int txsvkR4Qq9H;
    int K8RxsND;
    if (PtpCYmKA3 >= (260 - 260) && PtpCYmKA3 <= (770 - 766) && pm8CYsF >= (285 - 285) && pm8CYsF <= 4) {
        {
            K8RxsND = (595 - 595);
            while (K8RxsND < (739 - 734)) {
                txsvkR4Qq9H = of0ECG[PtpCYmKA3][K8RxsND];
                of0ECG[PtpCYmKA3][K8RxsND] = of0ECG[pm8CYsF][K8RxsND];
                of0ECG[pm8CYsF][K8RxsND] = txsvkR4Qq9H;
                K8RxsND++;
            }
        }
        q8JNBCVDSk = (106 - 105);
    }
    else
        q8JNBCVDSk = (550 - 550);
    return q8JNBCVDSk;
}

main () {
    int of0ECG [(921 - 916)] [(512 - 507)];
    int PtpCYmKA3;
    int pm8CYsF;
    I95PkdJcRwQI (of0ECG [(722 - 722)]);
    scanf ("%d%d", &PtpCYmKA3, &pm8CYsF);
    if (DHtLAQXh5 (of0ECG, PtpCYmKA3, pm8CYsF) == 0)
        printf ("error");
    else
        e6opqBgJZ (of0ECG[0]);
}

