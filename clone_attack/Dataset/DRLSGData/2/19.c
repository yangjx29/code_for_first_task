int main () {
    int PJVbGFt9w8W;
    struct   tushu {
        int mu7FQt2OKVSo;
        char Nfz4dnvWicy [(614 - 588)];
    };
    int BeZjAx, hCgXiwf3, gSabWgrO, Qvjx8UzObXIQ = (451 - 451);
    struct   tushu *PVmK05whUP;
    int P4TfKN [(397 - 371)] = {(655 - 655)};
    int *ujVpsz25;
    PJVbGFt9w8W = (869 - 869);
    scanf ("%d", &gSabWgrO);
    PVmK05whUP = (struct   tushu *) malloc (sizeof (tushu) * gSabWgrO);
    ujVpsz25 = (int *) malloc (sizeof (int) * gSabWgrO);
    {
        BeZjAx = (878 - 878);
        for (; BeZjAx < gSabWgrO;) {
            scanf ("%d %s", &((PVmK05whUP +BeZjAx)->mu7FQt2OKVSo), (PVmK05whUP +BeZjAx)->Nfz4dnvWicy);
            BeZjAx = BeZjAx +1;
        }
    }
    {
        BeZjAx = (55 - 55);
        for (; BeZjAx < gSabWgrO;) {
            ujVpsz25[BeZjAx] = strlen (PVmK05whUP[BeZjAx].Nfz4dnvWicy);
            {
                hCgXiwf3 = 0;
                for (; ujVpsz25[BeZjAx] > hCgXiwf3;) {
                    P4TfKN[PVmK05whUP[BeZjAx].Nfz4dnvWicy[hCgXiwf3] - 'A']++;
                    hCgXiwf3 = hCgXiwf3 + 1;
                }
            }
            BeZjAx = BeZjAx +1;
        }
    }
    {
        BeZjAx = 0;
        for (; BeZjAx < 26;) {
            if (PJVbGFt9w8W < P4TfKN[BeZjAx]) {
                PJVbGFt9w8W = P4TfKN[BeZjAx];
                Qvjx8UzObXIQ = BeZjAx;
            }
            BeZjAx = BeZjAx +1;
        }
    }
    printf ("%c\n%d\n", 'A' + Qvjx8UzObXIQ, PJVbGFt9w8W);
    {
        BeZjAx = 0;
        for (; gSabWgrO > BeZjAx;) {
            {
                hCgXiwf3 = 0;
                for (; hCgXiwf3 < ujVpsz25[BeZjAx];) {
                    if (PVmK05whUP[BeZjAx].Nfz4dnvWicy[hCgXiwf3] == ('A' + Qvjx8UzObXIQ))
                        printf ("%d\n", PVmK05whUP[BeZjAx].mu7FQt2OKVSo);
                    hCgXiwf3 = hCgXiwf3 + 1;
                }
            }
            BeZjAx = BeZjAx +1;
        }
    }
    return 0;
}

