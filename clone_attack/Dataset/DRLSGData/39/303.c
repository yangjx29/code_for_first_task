void  main () {
    int gTtvL5emPX9Z;
    int vm6rweY2x5C9;
    struct   xWAUGVuyaX {
        char Tk39Z26UsDj [(329 - 309)];
        int kd6UhCw;
        int Yni6dtL3OB;
        char nizX7B4 [(223 - 221)];
        char bwe3BK41u [2];
        int Jgp4VKMu;
    }
    xWAUGVuyaX [(481 - 380)];
    int MJf09Q;
    int NGaPjHRI;
    char JuNWBznTkE [(789 - 759)];
    int cmlSkJFhc [(408 - 307)];
    scanf ("%d", &vm6rweY2x5C9);
    for (gTtvL5emPX9Z = (451 - 451); vm6rweY2x5C9 > gTtvL5emPX9Z; gTtvL5emPX9Z = gTtvL5emPX9Z + (447 - 446)) {
        scanf ("%s", xWAUGVuyaX[gTtvL5emPX9Z].Tk39Z26UsDj);
        scanf ("%d", &xWAUGVuyaX[gTtvL5emPX9Z].kd6UhCw);
        scanf ("%d", &xWAUGVuyaX[gTtvL5emPX9Z].Yni6dtL3OB);
        scanf ("%s", xWAUGVuyaX[gTtvL5emPX9Z].nizX7B4);
        scanf ("%s", xWAUGVuyaX[gTtvL5emPX9Z].bwe3BK41u);
        scanf ("%d", &xWAUGVuyaX[gTtvL5emPX9Z].Jgp4VKMu);
        cmlSkJFhc[gTtvL5emPX9Z] = (93 - 93);
        if ((169 - 89) < xWAUGVuyaX[gTtvL5emPX9Z].kd6UhCw && xWAUGVuyaX[gTtvL5emPX9Z].Jgp4VKMu >= (725 - 724))
            cmlSkJFhc[gTtvL5emPX9Z] = cmlSkJFhc[gTtvL5emPX9Z] + 8000;
        if ((1019 - 934) < xWAUGVuyaX[gTtvL5emPX9Z].kd6UhCw && xWAUGVuyaX[gTtvL5emPX9Z].Yni6dtL3OB > (247 - 167))
            cmlSkJFhc[gTtvL5emPX9Z] = cmlSkJFhc[gTtvL5emPX9Z] + (4743 - 743);
        if ((1037 - 947) < xWAUGVuyaX[gTtvL5emPX9Z].kd6UhCw)
            cmlSkJFhc[gTtvL5emPX9Z] = cmlSkJFhc[gTtvL5emPX9Z] + (2126 - 126);
        if ((870 - 785) < xWAUGVuyaX[gTtvL5emPX9Z].kd6UhCw && xWAUGVuyaX[gTtvL5emPX9Z].bwe3BK41u[(400 - 400)] == 'Y')
            cmlSkJFhc[gTtvL5emPX9Z] = cmlSkJFhc[gTtvL5emPX9Z] + (1320 - 320);
        if (xWAUGVuyaX[gTtvL5emPX9Z].Yni6dtL3OB > (230 - 150) && xWAUGVuyaX[gTtvL5emPX9Z].nizX7B4[(918 - 918)] == 'Y')
            cmlSkJFhc[gTtvL5emPX9Z] = cmlSkJFhc[gTtvL5emPX9Z] + (1366 - 516);
    }
    strcpy (JuNWBznTkE, xWAUGVuyaX[0].Tk39Z26UsDj);
    NGaPjHRI = cmlSkJFhc[0];
    MJf09Q = cmlSkJFhc[0];
    for (gTtvL5emPX9Z = (875 - 874); gTtvL5emPX9Z < vm6rweY2x5C9; gTtvL5emPX9Z = gTtvL5emPX9Z + 1) {
        if (cmlSkJFhc[gTtvL5emPX9Z] > NGaPjHRI) {
            NGaPjHRI = cmlSkJFhc[gTtvL5emPX9Z];
            strcpy (JuNWBznTkE, xWAUGVuyaX[gTtvL5emPX9Z].Tk39Z26UsDj);
        }
        MJf09Q = MJf09Q +cmlSkJFhc[gTtvL5emPX9Z];
    }
    printf ("%s\n", JuNWBznTkE);
    printf ("%d\n", NGaPjHRI);
    printf ("%d\n", MJf09Q);
}

