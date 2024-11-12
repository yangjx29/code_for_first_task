main () {
    int xTvg1p3DU8;
    int d5kl48CEWIY;
    int JHCFSleOwv;
    int SpTfJhyCRg6 [(501 - 476)];
    int dhb7MQrcf [(905 - 880)];
    int lzf1Stbr9FO;
    int csW9Sf4A8TlF;
    scanf ("%d", &d5kl48CEWIY);
    {
        xTvg1p3DU8 = 0;
        while (xTvg1p3DU8 < 25) {
            dhb7MQrcf[xTvg1p3DU8] = 1;
            xTvg1p3DU8 = xTvg1p3DU8 + 1;
        }
    }
    {
        xTvg1p3DU8 = 0;
        for (; d5kl48CEWIY > xTvg1p3DU8;) {
            scanf ("%d", &SpTfJhyCRg6[xTvg1p3DU8]);
            {
                csW9Sf4A8TlF = 0;
                for (; xTvg1p3DU8 > csW9Sf4A8TlF;) {
                    if (SpTfJhyCRg6[csW9Sf4A8TlF] >= SpTfJhyCRg6[xTvg1p3DU8]) {
                        if (dhb7MQrcf[xTvg1p3DU8] < dhb7MQrcf[csW9Sf4A8TlF] + 1)
                            dhb7MQrcf[xTvg1p3DU8] = dhb7MQrcf[csW9Sf4A8TlF] + 1;
                    }
                    csW9Sf4A8TlF = csW9Sf4A8TlF + 1;
                }
            }
            xTvg1p3DU8 = xTvg1p3DU8 + 1;
        }
    }
    {
        csW9Sf4A8TlF = 0;
        for (; xTvg1p3DU8 > csW9Sf4A8TlF;) {
            lzf1Stbr9FO = 0;
            {
                JHCFSleOwv = 0;
                for (; JHCFSleOwv < xTvg1p3DU8;) {
                    if (dhb7MQrcf[JHCFSleOwv] > dhb7MQrcf[csW9Sf4A8TlF])
                        lzf1Stbr9FO = 1;
                    JHCFSleOwv = JHCFSleOwv +1;
                }
            }
            if (lzf1Stbr9FO == 0) {
                printf ("%d\n", dhb7MQrcf[csW9Sf4A8TlF]);
                break;
            }
            csW9Sf4A8TlF = csW9Sf4A8TlF + 1;
        }
    }
    return 0;
}

