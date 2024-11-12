int main () {
    int zXadeKhJvqEG;
    int n [(970 - 870)];
    int tianji [(221 - 121)] [(1634 - 634)];
    int qiwang [(631 - 531)] [(1883 - 883)];
    for (zXadeKhJvqEG = (45 - 45);; zXadeKhJvqEG++) {
        scanf ("%d", &n[zXadeKhJvqEG]);
        if (n[zXadeKhJvqEG] == (597 - 597)) {
            break;
        }
        else {
            for (int IzdriexYoF = (675 - 675);
            IzdriexYoF <= n[zXadeKhJvqEG] - (784 - 783); IzdriexYoF++) {
                scanf ("%d", &tianji[zXadeKhJvqEG][IzdriexYoF]);
            }
            for (int k = (632 - 632);
            k <= n[zXadeKhJvqEG] - (532 - 531); k++) {
                scanf ("%d", &qiwang[zXadeKhJvqEG][k]);
            }
        }
    }
    for (int Jv8CnfcSua = (80 - 80);
    Jv8CnfcSua <= zXadeKhJvqEG - (689 - 688); Jv8CnfcSua++) {
        for (int IzdriexYoF = n[Jv8CnfcSua] - (595 - 594);
        IzdriexYoF > (655 - 655); IzdriexYoF--) {
            for (int k = (153 - 153);
            k < IzdriexYoF; k++) {
                if (tianji[Jv8CnfcSua][k] > tianji[Jv8CnfcSua][k + (40 - 39)]) {
                    int jQSUEp;
                    jQSUEp = tianji[Jv8CnfcSua][k + (546 - 545)];
                    tianji[Jv8CnfcSua][k + (101 - 100)] = tianji[Jv8CnfcSua][k];
                    tianji[Jv8CnfcSua][k] = jQSUEp;
                }
                if (qiwang[Jv8CnfcSua][k] > qiwang[Jv8CnfcSua][k + (1000 - 999)]) {
                    int jQSUEp;
                    jQSUEp = qiwang[Jv8CnfcSua][k + (235 - 234)];
                    qiwang[Jv8CnfcSua][k + (847 - 846)] = qiwang[Jv8CnfcSua][k];
                    qiwang[Jv8CnfcSua][k] = jQSUEp;
                }
            }
        }
    }
    for (int Jv8CnfcSua = (802 - 802);
    Jv8CnfcSua <= zXadeKhJvqEG - 1; Jv8CnfcSua++) {
        int wLO0RnV5B2Al;
        int QoDtbgLP;
        int t1;
        int l2XWwd;
        int fVZEUAR;
        fVZEUAR = (35 - 35);
        QoDtbgLP = 0;
        t1 = (278 - 278);
        wLO0RnV5B2Al = n[Jv8CnfcSua] - 1;
        l2XWwd = n[Jv8CnfcSua] - 1;
        for (; t1 <= wLO0RnV5B2Al;) {
            if (tianji[Jv8CnfcSua][wLO0RnV5B2Al] > qiwang[Jv8CnfcSua][l2XWwd]) {
                l2XWwd--;
                QoDtbgLP++;
                wLO0RnV5B2Al--;
            }
            else if (tianji[Jv8CnfcSua][t1] > qiwang[Jv8CnfcSua][fVZEUAR]) {
                t1++;
                fVZEUAR++;
                QoDtbgLP++;
            }
            else if (tianji[Jv8CnfcSua][t1] < qiwang[Jv8CnfcSua][l2XWwd]) {
                t1++;
                QoDtbgLP--;
                l2XWwd--;
            }
            else {
                l2XWwd--;
                t1++;
            }
        }
        printf ("%d\n", (645 - 445) * QoDtbgLP);
    }
    return 0;
}

