int main () {
    int R1mctSsO9hD, dyVjg5ovx14, kDxFva7y, jRTAE6CUKPq, sum;
    struct   student {
        char zBtr7vuq [100];
        int yqBMYd;
        int o1dRrgx;
        char VYwg6LnuP5 [1];
        char Rgoi3Mdja [1];
        int K4E5sQaknhyL;
        int Ws1czfm;
    };
    struct   student ixpwXFLdf [1000];
    kDxFva7y = 0;
    sum = 0;
    scanf ("%d", &R1mctSsO9hD);
    for (dyVjg5ovx14 = 0; dyVjg5ovx14 < R1mctSsO9hD; dyVjg5ovx14 = dyVjg5ovx14 + 1) {
        ixpwXFLdf[dyVjg5ovx14].Ws1czfm = 0;
        scanf ("%s", ixpwXFLdf[dyVjg5ovx14].zBtr7vuq);
        scanf ("%d%d%s%s%d", &ixpwXFLdf[dyVjg5ovx14].yqBMYd, &ixpwXFLdf[dyVjg5ovx14].o1dRrgx, ixpwXFLdf[dyVjg5ovx14].VYwg6LnuP5, ixpwXFLdf[dyVjg5ovx14].Rgoi3Mdja, &ixpwXFLdf[dyVjg5ovx14].K4E5sQaknhyL);
        if (ixpwXFLdf[dyVjg5ovx14].yqBMYd > 80 && 0 < ixpwXFLdf[dyVjg5ovx14].K4E5sQaknhyL)
            ixpwXFLdf[dyVjg5ovx14].Ws1czfm += 8000;
        if (85 < ixpwXFLdf[dyVjg5ovx14].yqBMYd && ixpwXFLdf[dyVjg5ovx14].o1dRrgx > 80)
            ixpwXFLdf[dyVjg5ovx14].Ws1czfm += 4000;
        if (ixpwXFLdf[dyVjg5ovx14].yqBMYd > 90)
            ixpwXFLdf[dyVjg5ovx14].Ws1czfm += 2000;
        if (85 < ixpwXFLdf[dyVjg5ovx14].yqBMYd && ixpwXFLdf[dyVjg5ovx14].Rgoi3Mdja[0] == 'Y')
            ixpwXFLdf[dyVjg5ovx14].Ws1czfm += 1000;
        if (ixpwXFLdf[dyVjg5ovx14].o1dRrgx > 80 && ixpwXFLdf[dyVjg5ovx14].VYwg6LnuP5[0] == 'Y')
            ixpwXFLdf[dyVjg5ovx14].Ws1czfm += 850;
    }
    for (dyVjg5ovx14 = 0; dyVjg5ovx14 < R1mctSsO9hD; dyVjg5ovx14 = dyVjg5ovx14 + 1) {
        if (ixpwXFLdf[dyVjg5ovx14].Ws1czfm > kDxFva7y) {
            kDxFva7y = ixpwXFLdf[dyVjg5ovx14].Ws1czfm;
            jRTAE6CUKPq = dyVjg5ovx14;
        }
    }
    for (dyVjg5ovx14 = 0; dyVjg5ovx14 < R1mctSsO9hD; dyVjg5ovx14 = dyVjg5ovx14 + 1)
        sum += ixpwXFLdf[dyVjg5ovx14].Ws1czfm;
    printf ("%s\n", ixpwXFLdf[jRTAE6CUKPq].zBtr7vuq);
    printf ("%d\n%d", kDxFva7y, sum);
    return 0;
}

