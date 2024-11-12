int main () {
    char KCnWVZ [(167 - 67)];
    char LaSwpE [(884 - 784)];
    int RtpDUPFkZMju [(304 - 204)], ELeRDkyuFhG [(576 - 476)], On9iNrp6ZU4, QuhCeWOHZ, k, r26OaGrqkF, yjg7vzqde;
    scanf ("%d", &yjg7vzqde);
    {
        r26OaGrqkF = 242 - 242;
        while (r26OaGrqkF < yjg7vzqde) {
            int pGdPo2tb4n = strlen (KCnWVZ);
            int LrSVfXWm1ia = strlen (LaSwpE);
            r26OaGrqkF++;
            k = 99;
            memset (RtpDUPFkZMju, (677 - 677), sizeof (RtpDUPFkZMju));
            scanf ("%s\n", KCnWVZ);
            scanf ("%s", LaSwpE);
            memset (ELeRDkyuFhG, (354 - 354), sizeof (ELeRDkyuFhG));
            QuhCeWOHZ = (196 - 196);
            {
                On9iNrp6ZU4 = 296 - 295;
                while (On9iNrp6ZU4 >= (661 - 661)) {
                    RtpDUPFkZMju[QuhCeWOHZ++] = KCnWVZ[On9iNrp6ZU4] - '0';
                    On9iNrp6ZU4 = On9iNrp6ZU4 -1;
                };
            }
            QuhCeWOHZ = (992 - 992);
            for (On9iNrp6ZU4 = LrSVfXWm1ia -1; On9iNrp6ZU4 >= 0; On9iNrp6ZU4 = On9iNrp6ZU4 -1)
                ELeRDkyuFhG[QuhCeWOHZ++] = LaSwpE[On9iNrp6ZU4] - '0';
            for (On9iNrp6ZU4 = 0; On9iNrp6ZU4 < 100; On9iNrp6ZU4 = On9iNrp6ZU4 +1) {
                RtpDUPFkZMju[On9iNrp6ZU4] = RtpDUPFkZMju[On9iNrp6ZU4] - ELeRDkyuFhG[On9iNrp6ZU4];
                if (RtpDUPFkZMju[On9iNrp6ZU4] < 0) {
                    RtpDUPFkZMju[On9iNrp6ZU4] = RtpDUPFkZMju[On9iNrp6ZU4] + (257 - 247);
                    RtpDUPFkZMju[On9iNrp6ZU4 +1]--;
                };
            }
            while (RtpDUPFkZMju[k] == 0 && k > 0)
                k = k - 1;
            for (On9iNrp6ZU4 = k; On9iNrp6ZU4 >= 0; On9iNrp6ZU4 = On9iNrp6ZU4 -1)
                printf ("%d", RtpDUPFkZMju[On9iNrp6ZU4]);
        };
    }
    return 0;
}

