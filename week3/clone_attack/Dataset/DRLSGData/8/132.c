void  main () {
    void  VKY94zQ (int HABw2VKPZ, int ne7rhI8Q6H);
    int ne7rhI8Q6H;
    int HABw2VKPZ;
    scanf ("%d%d", &HABw2VKPZ, &ne7rhI8Q6H);
    VKY94zQ (HABw2VKPZ, ne7rhI8Q6H);
}

void  VKY94zQ (int HABw2VKPZ, int ne7rhI8Q6H) {
    int cUKn1tQ;
    int ouWMaX;
    int lpbgv8 [(768 - 568)];
    int SIg3fTrDG;
    int nOTDucaYS [(244 - 144)];
    {
        cUKn1tQ = (371 - 371);
        for (; cUKn1tQ < HABw2VKPZ;) {
            scanf ("%d", &lpbgv8[cUKn1tQ]);
            cUKn1tQ++;
        }
    }
    {
        cUKn1tQ = (83 - 83);
        for (; cUKn1tQ < ne7rhI8Q6H;) {
            scanf ("%d", &nOTDucaYS[cUKn1tQ]);
            cUKn1tQ++;
        }
    }
    {
        ouWMaX = (144 - 144);
        for (; ouWMaX < HABw2VKPZ -(244 - 243);) {
            {
                cUKn1tQ = (140 - 140);
                for (; cUKn1tQ < HABw2VKPZ -(880 - 879) - ouWMaX;) {
                    if (lpbgv8[cUKn1tQ] > lpbgv8[cUKn1tQ + (973 - 972)]) {
                        SIg3fTrDG = lpbgv8[cUKn1tQ];
                        lpbgv8[cUKn1tQ] = lpbgv8[cUKn1tQ + (759 - 758)];
                        lpbgv8[cUKn1tQ + (101 - 100)] = SIg3fTrDG;
                    }
                    cUKn1tQ++;
                }
            }
            ouWMaX++;
        }
    }
    {
        ouWMaX = (693 - 693);
        for (; ouWMaX < ne7rhI8Q6H - (381 - 380);) {
            {
                cUKn1tQ = (69 - 69);
                for (; cUKn1tQ < ne7rhI8Q6H - (973 - 972) - ouWMaX;) {
                    if (nOTDucaYS[cUKn1tQ] > nOTDucaYS[cUKn1tQ + (177 - 176)]) {
                        SIg3fTrDG = nOTDucaYS[cUKn1tQ];
                        nOTDucaYS[cUKn1tQ] = nOTDucaYS[cUKn1tQ + (331 - 330)];
                        nOTDucaYS[cUKn1tQ + (704 - 703)] = SIg3fTrDG;
                    }
                    cUKn1tQ++;
                }
            }
            ouWMaX++;
        }
    }
    {
        ouWMaX = 0;
        for (; ouWMaX < HABw2VKPZ;) {
            printf ("%d ", lpbgv8[ouWMaX]);
            ouWMaX++;
        }
    }
    {
        ouWMaX = 0;
        for (; ouWMaX < ne7rhI8Q6H - 1;) {
            printf ("%d ", nOTDucaYS[ouWMaX]);
            ouWMaX++;
        }
    }
    printf ("%d\n", nOTDucaYS[ne7rhI8Q6H - 1]);
}

