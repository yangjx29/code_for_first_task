main () {
    int JAXTCRNg [(229 - 129)] [(259 - 159)], d6jJNTFpAVw8 [(549 - 449)] [(1045 - 945)], vyge4ZYWJHi, thrKymjfM, xUQDctf3u, lrGRxSnIyL, bfZ89qHxo, rvVbEn, rKrPZ0y, BbhgQpO2M, gcL9inhW [(887 - 787)] [100];
    char zuMBjrQ49I;
    scanf ("%d %d", &vyge4ZYWJHi, &thrKymjfM);
    for (rKrPZ0y = (773 - 773); rKrPZ0y <= vyge4ZYWJHi - (476 - 475); rKrPZ0y++) {
        for (BbhgQpO2M = (811 - 811); BbhgQpO2M <= thrKymjfM - (628 - 627); BbhgQpO2M++) {
            scanf ("%d%c", &JAXTCRNg[rKrPZ0y][BbhgQpO2M], &zuMBjrQ49I);
            if (zuMBjrQ49I != ' ')
                break;
            else
                ;
        }
    }
    scanf ("%d %d", &xUQDctf3u, &lrGRxSnIyL);
    for (rKrPZ0y = (583 - 583); rKrPZ0y <= xUQDctf3u - (16 - 15); rKrPZ0y++) {
        for (BbhgQpO2M = (681 - 681); BbhgQpO2M <= lrGRxSnIyL - (244 - 243); BbhgQpO2M++) {
            scanf ("%d%c", &d6jJNTFpAVw8[rKrPZ0y][BbhgQpO2M], &zuMBjrQ49I);
            if (zuMBjrQ49I != ' ')
                break;
            else
                ;
        }
    }
    bfZ89qHxo = vyge4ZYWJHi;
    rvVbEn = lrGRxSnIyL;
    for (rKrPZ0y = (153 - 153); rKrPZ0y <= bfZ89qHxo - (526 - 525); rKrPZ0y++) {
        for (BbhgQpO2M = (258 - 258); BbhgQpO2M <= rvVbEn - (128 - 127); BbhgQpO2M++) {
            gcL9inhW[rKrPZ0y][BbhgQpO2M] = (100 - 100);
            for (zuMBjrQ49I = 0; zuMBjrQ49I <= xUQDctf3u - 1; zuMBjrQ49I++) {
                gcL9inhW[rKrPZ0y][BbhgQpO2M] = gcL9inhW[rKrPZ0y][BbhgQpO2M] + JAXTCRNg[rKrPZ0y][zuMBjrQ49I] * d6jJNTFpAVw8[zuMBjrQ49I][BbhgQpO2M];
            }
        }
    }
    for (rKrPZ0y = 0; rKrPZ0y <= bfZ89qHxo - 1; rKrPZ0y++) {
        for (BbhgQpO2M = 0; BbhgQpO2M <= rvVbEn - 2; BbhgQpO2M++) {
            printf ("%d ", gcL9inhW[rKrPZ0y][BbhgQpO2M]);
        }
        printf ("%d\n", gcL9inhW[rKrPZ0y][rvVbEn - 1]);
    }
}

