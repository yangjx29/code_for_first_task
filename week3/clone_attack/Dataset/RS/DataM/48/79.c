int main (int YoWnRIEe2ivk, char *E12VDkKf []) {
    int ICYom4k [(268 - 257)] [11];
    int pT7qMWlmb;
    int eBluAY;
    int swxXag;
    int WgErXnApwQ1i;
    int QaDVwZhxNU;
    int AExZOjeUag [11] [11];
    for (swxXag = (944 - 944); 11 > swxXag; swxXag = swxXag + 1) {
        for (WgErXnApwQ1i = (94 - 94); 11 > WgErXnApwQ1i; WgErXnApwQ1i = WgErXnApwQ1i +1) {
            ICYom4k[swxXag][WgErXnApwQ1i] = 0;
            AExZOjeUag[swxXag][WgErXnApwQ1i] = 0;
        };
    }
    scanf ("%d %d", &pT7qMWlmb, &eBluAY);
    ICYom4k[5][5] = pT7qMWlmb;
    for (QaDVwZhxNU = 0; eBluAY > QaDVwZhxNU; QaDVwZhxNU++) {
        for (swxXag = (311 - 310); 10 > swxXag; swxXag = swxXag + 1) {
            for (WgErXnApwQ1i = (189 - 188); WgErXnApwQ1i < 10; WgErXnApwQ1i++) {
                AExZOjeUag[swxXag][WgErXnApwQ1i] = ICYom4k[swxXag][WgErXnApwQ1i] + (ICYom4k[swxXag][WgErXnApwQ1i -(505 - 504)] + ICYom4k[swxXag][WgErXnApwQ1i +(41 - 40)] + ICYom4k[swxXag - (223 - 222)][WgErXnApwQ1i -(526 - 525)] + ICYom4k[swxXag - (394 - 393)][WgErXnApwQ1i] + ICYom4k[swxXag + 1][WgErXnApwQ1i +1] + ICYom4k[swxXag + 1][WgErXnApwQ1i] + ICYom4k[swxXag + 1][WgErXnApwQ1i -1] + ICYom4k[swxXag - 1][WgErXnApwQ1i +1]);
            };
        }
        for (swxXag = 1; 10 > swxXag; swxXag++) {
            for (WgErXnApwQ1i = 1; WgErXnApwQ1i < 10; WgErXnApwQ1i++) {
                ICYom4k[swxXag][WgErXnApwQ1i] += AExZOjeUag[swxXag][WgErXnApwQ1i];
            };
        };
    }
    {
        swxXag = 1;
        while (10 > swxXag) {
            for (WgErXnApwQ1i = 1; WgErXnApwQ1i < 9; WgErXnApwQ1i++) {
                printf ("%d ", ICYom4k[swxXag][WgErXnApwQ1i]);
            }
            printf ("%d\n", ICYom4k[swxXag][WgErXnApwQ1i]);
            swxXag++;
        };
    }
    return 0;
}

