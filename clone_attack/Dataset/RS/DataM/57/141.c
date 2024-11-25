void  main () {
    char wS32iKNvY [100];
    int kAmiqdypf;
    int EXT2N0H;
    int ZH5xc8jzeBGR;
    int abTRA5KN;
    scanf ("%d", &kAmiqdypf);
    for (ZH5xc8jzeBGR = (19 - 18); ZH5xc8jzeBGR <= kAmiqdypf + 1; ZH5xc8jzeBGR = ZH5xc8jzeBGR +1) {
        gets (wS32iKNvY);
        EXT2N0H = strlen (wS32iKNvY) - 1;
        if (wS32iKNvY[EXT2N0H] == 'r' || wS32iKNvY[EXT2N0H] == 'y') {
            wS32iKNvY[EXT2N0H -1] = '\0';
            printf ("%s", wS32iKNvY);
            printf ("\n");
        }
        else {
            wS32iKNvY[EXT2N0H -2] = 0;
            printf ("%s", wS32iKNvY);
            printf ("\n");
        };
    };
}

