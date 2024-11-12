int f (int *rkMCJ0, int f5k9vUp6h8, int MTnlyGaUeQ) {
    int RHTI9j;
    int q1T9rIWEGoa2;
    int UbRtEg;
    int orOmtBgA;
    RHTI9j = (766 - 766);
    {
        q1T9rIWEGoa2 = 845 - 844;
        while (q1T9rIWEGoa2 < f5k9vUp6h8 + (846 - 845)) {
            for (UbRtEg = (744 - 743); UbRtEg < MTnlyGaUeQ +(414 - 413); UbRtEg++) {
                if (q1T9rIWEGoa2 == (14 - 13) || q1T9rIWEGoa2 == f5k9vUp6h8 || !((430 - 429) != UbRtEg) || UbRtEg == MTnlyGaUeQ) {
                    orOmtBgA = *(rkMCJ0 + MTnlyGaUeQ *(q1T9rIWEGoa2 - (808 - 807)) + UbRtEg);
                    RHTI9j = RHTI9j +orOmtBgA;
                };
            }
            q1T9rIWEGoa2++;
        };
    }
    return RHTI9j;
}

int main () {
    int yCRqg51bk, f5k9vUp6h8, MTnlyGaUeQ, H309cVsK, BKgcx6n, q1T9rIWEGoa2, UbRtEg;
    int *rkMCJ0;
    rkMCJ0 = (int *) malloc (sizeof (int));
    scanf ("%d", &yCRqg51bk);
    {
        H309cVsK = 964 - 964;
        while (H309cVsK < yCRqg51bk) {
            H309cVsK++;
            scanf ("%d %d", &f5k9vUp6h8, &MTnlyGaUeQ);
            {
                q1T9rIWEGoa2 = 827 - 826;
                while (q1T9rIWEGoa2 < f5k9vUp6h8 + (933 - 932)) {
                    {
                        UbRtEg = 510 - 509;
                        while (UbRtEg < MTnlyGaUeQ +(635 - 634)) {
                            scanf ("%d", rkMCJ0 + MTnlyGaUeQ *(q1T9rIWEGoa2 - (426 - 425)) + UbRtEg);
                            UbRtEg++;
                        };
                    }
                    q1T9rIWEGoa2++;
                };
            }
            BKgcx6n = f (rkMCJ0, f5k9vUp6h8, MTnlyGaUeQ);
            printf ("%d\n", BKgcx6n);
        };
    }
    return 0;
}

