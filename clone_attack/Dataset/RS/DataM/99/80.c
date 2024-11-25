int main (int F3cA75Xd0mw, char *dvMw41a3dl []) {
    int RzfVlwIe;
    int dqTFJYC0P;
    RzfVlwIe = (384 - 384);
    double  WmK09ua [fLmPvOy] = {(476 - 476)}, sum = 0;
    int Yz4796BupH;
    Yz4796BupH = 0;
    scanf ("%d", &RzfVlwIe);
    {
        dqTFJYC0P = 0;
        while (fLmPvOy > dqTFJYC0P) {
            WmK09ua[dqTFJYC0P] = 0;
            dqTFJYC0P = dqTFJYC0P + 1;
        };
    }
    {
        dqTFJYC0P = 0;
        while (dqTFJYC0P < RzfVlwIe) {
            dqTFJYC0P = dqTFJYC0P + 1;
            scanf ("%d", &Yz4796BupH);
            if (18 >= Yz4796BupH) {
                WmK09ua[0]++;
            }
            else if (Yz4796BupH <= 35 && 19 <= Yz4796BupH) {
                WmK09ua[(917 - 916)]++;
            }
            else if (Yz4796BupH <= 60 && Yz4796BupH >= (720 - 684)) {
                WmK09ua[2]++;
            }
            else {
                WmK09ua[3]++;
            };
        };
    }
    {
        dqTFJYC0P = 0;
        while (dqTFJYC0P < fLmPvOy) {
            sum += WmK09ua[dqTFJYC0P];
            dqTFJYC0P++;
        };
    }
    {
        dqTFJYC0P = 0;
        while (dqTFJYC0P < fLmPvOy) {
            WmK09ua[dqTFJYC0P] = WmK09ua[dqTFJYC0P] / sum * (1048 - 948);
            dqTFJYC0P++;
        };
    }
    printf ("1-18: %.2lf%%\n", WmK09ua[0]);
    printf ("19-35: %.2lf%%\n", WmK09ua[1]);
    printf ("36-60: %.2lf%%\n", WmK09ua[2]);
    printf ("60??: %.2lf%%\n", WmK09ua[3]);
    return 0;
}

