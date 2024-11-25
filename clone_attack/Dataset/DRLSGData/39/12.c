struct   student {
    char CFcOwkMm [(309 - 289)];
    int I7R2uMf4 [(421 - 419)];
    char k9k1uCr6;
    char Nljtmk4;
    int paper;
    int SkCZW3;
}
WGQsNjF6Y [100];

void  main () {
    int YtXWelpK4V6P;
    int j;
    int sum;
    int KKY57P32;
    int CrzKIkqE;
    scanf ("%d", &CrzKIkqE);
    sum = (420 - 420);
    for (YtXWelpK4V6P = (396 - 396); YtXWelpK4V6P < CrzKIkqE; YtXWelpK4V6P = YtXWelpK4V6P +(837 - 836)) {
        scanf ("%s %d %d %c %c %d", WGQsNjF6Y[YtXWelpK4V6P].CFcOwkMm, &WGQsNjF6Y[YtXWelpK4V6P].I7R2uMf4[0], &WGQsNjF6Y[YtXWelpK4V6P].I7R2uMf4[1], &WGQsNjF6Y[YtXWelpK4V6P].k9k1uCr6, &WGQsNjF6Y[YtXWelpK4V6P].Nljtmk4, &WGQsNjF6Y[YtXWelpK4V6P].paper);
        WGQsNjF6Y[YtXWelpK4V6P].SkCZW3 = 0;
        if (WGQsNjF6Y[YtXWelpK4V6P].I7R2uMf4[0] > 80 && WGQsNjF6Y[YtXWelpK4V6P].paper >= 1)
            WGQsNjF6Y[YtXWelpK4V6P].SkCZW3 += (8181 - 181);
        if (WGQsNjF6Y[YtXWelpK4V6P].I7R2uMf4[0] > (931 - 846) && 80 < WGQsNjF6Y[YtXWelpK4V6P].I7R2uMf4[1])
            WGQsNjF6Y[YtXWelpK4V6P].SkCZW3 += 4000;
        if (WGQsNjF6Y[YtXWelpK4V6P].I7R2uMf4[0] > 90)
            WGQsNjF6Y[YtXWelpK4V6P].SkCZW3 += 2000;
        if (WGQsNjF6Y[YtXWelpK4V6P].I7R2uMf4[0] > 85 && WGQsNjF6Y[YtXWelpK4V6P].Nljtmk4 == 'Y')
            WGQsNjF6Y[YtXWelpK4V6P].SkCZW3 += 1000;
        if (WGQsNjF6Y[YtXWelpK4V6P].I7R2uMf4[1] > 80 && WGQsNjF6Y[YtXWelpK4V6P].k9k1uCr6 == 'Y')
            WGQsNjF6Y[YtXWelpK4V6P].SkCZW3 += 850;
        sum += WGQsNjF6Y[YtXWelpK4V6P].SkCZW3;
    }
    KKY57P32 = WGQsNjF6Y[0].SkCZW3;
    for (YtXWelpK4V6P = 1; YtXWelpK4V6P < CrzKIkqE; YtXWelpK4V6P++) {
        if (WGQsNjF6Y[YtXWelpK4V6P].SkCZW3 > KKY57P32) {
            KKY57P32 = WGQsNjF6Y[YtXWelpK4V6P].SkCZW3;
            j = YtXWelpK4V6P;
        }
    }
    printf ("%s\n%d\n", WGQsNjF6Y[j].CFcOwkMm, WGQsNjF6Y[j].SkCZW3);
    printf ("%d", sum);
}

