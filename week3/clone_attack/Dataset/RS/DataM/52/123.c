void  TZeJ4oUAQK (int *sKEaQyJ, int uBTumND, int gSV2x4Zwyqu);

void  main () {
    int uBTumND, gSV2x4Zwyqu, sKEaQyJ [200];
    int UCxytokwn;
    scanf ("%d %d", &uBTumND, &gSV2x4Zwyqu);
    {
        UCxytokwn = 0;
        while (UCxytokwn < uBTumND) {
            scanf ("%d", &sKEaQyJ[UCxytokwn]);
            UCxytokwn = UCxytokwn +1;
        };
    }
    TZeJ4oUAQK (sKEaQyJ, uBTumND, gSV2x4Zwyqu);
    for (UCxytokwn = 0; UCxytokwn < uBTumND - 1; UCxytokwn++)
        printf ("%d ", sKEaQyJ[UCxytokwn]);
    printf ("%d\n", sKEaQyJ[uBTumND - 1]);
}

void  TZeJ4oUAQK (int *sKEaQyJ, int uBTumND, int gSV2x4Zwyqu) {
    int UCxytokwn;
    for (UCxytokwn = uBTumND - 1; UCxytokwn >= 0; UCxytokwn--)
        sKEaQyJ[UCxytokwn +gSV2x4Zwyqu] = sKEaQyJ[UCxytokwn];
    {
        UCxytokwn = uBTumND;
        while (UCxytokwn < uBTumND + gSV2x4Zwyqu) {
            sKEaQyJ[UCxytokwn -uBTumND] = sKEaQyJ[UCxytokwn];
            UCxytokwn++;
        };
    };
}

