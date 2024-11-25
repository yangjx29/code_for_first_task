struct   people {
    int Hf3srcnjagN;
    char HfYo5Uw [(753 - 727)];
};
void  main () {
    int HKLbNj8oSPCU;
    int nwRIX9pVex [(580 - 554)];
    int BM0fwsC;
    int iQDmqK;
    struct   people Mdszv7wT [1000];
    int q0BvUl8tH;
    int W5jKHsIp;
    int Ggzc63wuMbp;
    int TdgaewPT64WB;
    int YQEafj;
    scanf ("%d", &YQEafj);
    for (q0BvUl8tH = (210 - 210); YQEafj > q0BvUl8tH; q0BvUl8tH = q0BvUl8tH + 1) {
        scanf ("%d %s", &Mdszv7wT[q0BvUl8tH].Hf3srcnjagN, Mdszv7wT[q0BvUl8tH].HfYo5Uw);
    }
    for (q0BvUl8tH = (986 - 986); q0BvUl8tH < YQEafj; q0BvUl8tH = q0BvUl8tH + 1) {
        iQDmqK = strlen (Mdszv7wT[q0BvUl8tH].HfYo5Uw);
        {
            HKLbNj8oSPCU = (606 - 606);
            for (; HKLbNj8oSPCU < iQDmqK;) {
                for (W5jKHsIp = (1000 - 1000); (876 - 850) > W5jKHsIp; W5jKHsIp = W5jKHsIp +1)
                    if (!(Mdszv7wT[q0BvUl8tH].HfYo5Uw[HKLbNj8oSPCU] - 'A' != W5jKHsIp)) {
                        nwRIX9pVex[W5jKHsIp]++;
                        break;
                    }
                HKLbNj8oSPCU = HKLbNj8oSPCU +1;
            }
        }
    }
    Ggzc63wuMbp = nwRIX9pVex[(841 - 841)];
    for (q0BvUl8tH = (28 - 28); q0BvUl8tH < (680 - 654); q0BvUl8tH = q0BvUl8tH + 1)
        if (nwRIX9pVex[q0BvUl8tH] > Ggzc63wuMbp)
            Ggzc63wuMbp = nwRIX9pVex[q0BvUl8tH];
    {
        q0BvUl8tH = (398 - 398);
        for (; 26 > q0BvUl8tH;) {
            if (!(Ggzc63wuMbp != nwRIX9pVex[q0BvUl8tH])) {
                printf ("%c\n", 'A' + q0BvUl8tH);
                BM0fwsC = q0BvUl8tH;
                printf ("%d\n", nwRIX9pVex[q0BvUl8tH]);
                break;
            }
            q0BvUl8tH = q0BvUl8tH + 1;
        }
    }
    {
        q0BvUl8tH = 0;
        for (; YQEafj > q0BvUl8tH;) {
            for (HKLbNj8oSPCU = 0; 26 > HKLbNj8oSPCU; HKLbNj8oSPCU = HKLbNj8oSPCU +1)
                if (Mdszv7wT[q0BvUl8tH].HfYo5Uw[HKLbNj8oSPCU] == 'A' + BM0fwsC) {
                    printf ("%d\n", Mdszv7wT[q0BvUl8tH].Hf3srcnjagN);
                    break;
                }
            q0BvUl8tH = q0BvUl8tH + 1;
        }
    }
    TdgaewPT64WB = 0;
}

