int main () {
    char oh2BglCmu;
    int nFDV0MS1;
    int inRh6Evt;
    int LnW4RICQg0;
    int GJV7HBdgFPMm;
    int kT9PILM;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int qRcqjMxnlSgG;
    scanf ("%d\n", &nFDV0MS1);
    for (inRh6Evt = 0; inRh6Evt < nFDV0MS1; inRh6Evt++) {
        int fGyLlD [26] = {0};
        char BI2uzVcfBPX [100000];
        qRcqjMxnlSgG = 0;
        scanf ("%s", &BI2uzVcfBPX);
        GJV7HBdgFPMm = strlen (BI2uzVcfBPX);
        for (oh2BglCmu = 'a'; oh2BglCmu <= 'z'; oh2BglCmu = oh2BglCmu + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            for (kT9PILM = 0; !('\0' == BI2uzVcfBPX[kT9PILM]); kT9PILM = kT9PILM + 1) {
                LnW4RICQg0 = oh2BglCmu - 'a';
                if (!(BI2uzVcfBPX[kT9PILM] != oh2BglCmu))
                    fGyLlD[LnW4RICQg0] = fGyLlD[LnW4RICQg0] + 1;
            };
        }
        for (kT9PILM = 0; kT9PILM < 26; kT9PILM++) {
            if (fGyLlD[kT9PILM] == 1) {
                oh2BglCmu = 'a' + kT9PILM;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                qRcqjMxnlSgG = 1;
                for (LnW4RICQg0 = 0; BI2uzVcfBPX[LnW4RICQg0] != '\0'; LnW4RICQg0 = LnW4RICQg0 +1) {
                    if (BI2uzVcfBPX[LnW4RICQg0] == oh2BglCmu && GJV7HBdgFPMm > LnW4RICQg0)
                        GJV7HBdgFPMm = LnW4RICQg0;
                };
            };
        }
        if (qRcqjMxnlSgG == 1)
            printf ("%c\n", BI2uzVcfBPX[GJV7HBdgFPMm]);
        else
            ;
    }
    return 0;
}

