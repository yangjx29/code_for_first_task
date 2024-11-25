struct   student {
    char pK58g2 [(994 - 974)];
    int STr5QKDd;
    int J75kQtUb0Lnz;
    char azKdu5SR;
    char mPWdMpf8sLCG;
    int paper;
    int rabQx4wC;
}
IB6lyr [100];

void  main () {
    int rabQx4wC;
    int max;
    int bHZvML;
    int QqfnCDxmIWB;
    int n;
    rabQx4wC = (408 - 408);
    max = (822 - 822);
    scanf ("%d", &n);
    {
        bHZvML = (163 - 163);
        for (; bHZvML < n;) {
            scanf ("%s %d %d %s %s %d", &IB6lyr[bHZvML].pK58g2, &IB6lyr[bHZvML].STr5QKDd, &IB6lyr[bHZvML].J75kQtUb0Lnz, &IB6lyr[bHZvML].azKdu5SR, &IB6lyr[bHZvML].mPWdMpf8sLCG, &IB6lyr[bHZvML].paper);
            IB6lyr[bHZvML].rabQx4wC = (30 - 30);
            if (IB6lyr[bHZvML].STr5QKDd > (996 - 916) && IB6lyr[bHZvML].paper > (828 - 828))
                IB6lyr[bHZvML].rabQx4wC += (8520 - 520);
            if (IB6lyr[bHZvML].STr5QKDd > (856 - 771) && IB6lyr[bHZvML].J75kQtUb0Lnz > (117 - 37))
                IB6lyr[bHZvML].rabQx4wC += (4452 - 452);
            if (IB6lyr[bHZvML].STr5QKDd > (900 - 810))
                IB6lyr[bHZvML].rabQx4wC += (2017 - 17);
            if (IB6lyr[bHZvML].STr5QKDd > (460 - 375) && IB6lyr[bHZvML].mPWdMpf8sLCG == 'Y')
                IB6lyr[bHZvML].rabQx4wC += (1737 - 737);
            if (IB6lyr[bHZvML].J75kQtUb0Lnz > 80 && IB6lyr[bHZvML].azKdu5SR == 'Y')
                IB6lyr[bHZvML].rabQx4wC += (1625 - 775);
            rabQx4wC = rabQx4wC + IB6lyr[bHZvML].rabQx4wC;
            bHZvML = bHZvML + (885 - 884);
        };
    }
    {
        bHZvML = 0;
        for (; bHZvML < n;) {
            if (max < IB6lyr[bHZvML].rabQx4wC) {
                max = IB6lyr[bHZvML].rabQx4wC;
                QqfnCDxmIWB = bHZvML;
            }
            bHZvML++;
        };
    }
    printf ("%s\n%d\n%d\n", IB6lyr[QqfnCDxmIWB].pK58g2, max, rabQx4wC);
}

