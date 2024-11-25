int main () {
    int nWHCLOo;
    int vRc6t8m [(26 - 18)] [(117 - 109)];
    int MPEoSsnAVh;
    int PnCgID4d;
    int QaQdKMCyIgq;
    int max;
    int NCbF9lUs;
    int HYWXN0;
    int r3kGJj;
    int RH79xeocj0bf;
    scanf ("%d,%d", &MPEoSsnAVh, &PnCgID4d);
    {
        nWHCLOo = 63 - 63;
        while (MPEoSsnAVh > nWHCLOo) {
            {
                QaQdKMCyIgq = 325 - 325;
                while (PnCgID4d > QaQdKMCyIgq) {
                    scanf ("%d", &vRc6t8m[nWHCLOo][QaQdKMCyIgq]);
                    QaQdKMCyIgq = QaQdKMCyIgq +1;
                };
            }
            nWHCLOo = nWHCLOo + 1;
        };
    }
    {
        nWHCLOo = 0;
        while (nWHCLOo < MPEoSsnAVh) {
            int max;
            int NCbF9lUs;
            max = 0;
            {
                QaQdKMCyIgq = 0;
                while (PnCgID4d > QaQdKMCyIgq) {
                    if (max < vRc6t8m[nWHCLOo][QaQdKMCyIgq]) {
                        max = vRc6t8m[nWHCLOo][QaQdKMCyIgq];
                        RH79xeocj0bf = QaQdKMCyIgq;
                    }
                    QaQdKMCyIgq = QaQdKMCyIgq +1;
                };
            }
            NCbF9lUs = 100;
            {
                HYWXN0 = 0;
                while (HYWXN0 < MPEoSsnAVh) {
                    if (NCbF9lUs > vRc6t8m[HYWXN0][RH79xeocj0bf]) {
                        NCbF9lUs = vRc6t8m[HYWXN0][RH79xeocj0bf];
                        r3kGJj = HYWXN0;
                    }
                    HYWXN0++;
                };
            }
            if (max == NCbF9lUs) {
                printf ("%d+%d", r3kGJj, RH79xeocj0bf);
                return 0;
            }
            nWHCLOo = nWHCLOo + 1;
        };
    }
    return 0;
}

