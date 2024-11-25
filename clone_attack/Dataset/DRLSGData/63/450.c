int main () {
    int FjfzXG, Zix2gM4B8J, eA4jieL, wiaCXqzo1;
    int xvcjPwBaQ0 [(481 - 381)] [(860 - 760)];
    int kUI6RxK7 [(154 - 54)] [(834 - 734)];
    int C4rsEK [(337 - 237)] [100];
    int g1Xko2K3gSBd;
    int lfoNiXLKpb;
    int jtTS7ALxqc;
    jtTS7ALxqc = (705 - 705);
    scanf ("%d %d", &FjfzXG, &Zix2gM4B8J);
    for (g1Xko2K3gSBd = (584 - 584); FjfzXG -(529 - 528) >= g1Xko2K3gSBd; g1Xko2K3gSBd++) {
        for (jtTS7ALxqc = (288 - 288); jtTS7ALxqc <= Zix2gM4B8J -(854 - 853); jtTS7ALxqc++)
            scanf ("%d", &(xvcjPwBaQ0[g1Xko2K3gSBd][jtTS7ALxqc]));
    }
    scanf ("%d %d", &eA4jieL, &wiaCXqzo1);
    for (g1Xko2K3gSBd = (839 - 839); g1Xko2K3gSBd <= eA4jieL - (430 - 429); g1Xko2K3gSBd++) {
        for (jtTS7ALxqc = (635 - 635); wiaCXqzo1 - (440 - 439) >= jtTS7ALxqc; jtTS7ALxqc++)
            scanf ("%d", &kUI6RxK7[g1Xko2K3gSBd][jtTS7ALxqc]);
    }
    int wEhTexM;
    wEhTexM = (119 - 119);
    for (g1Xko2K3gSBd = (823 - 823); FjfzXG -(536 - 535) >= g1Xko2K3gSBd; g1Xko2K3gSBd++) {
        if (g1Xko2K3gSBd != (82 - 82))
            printf ("\n");
        for (jtTS7ALxqc = (767 - 767); jtTS7ALxqc <= wiaCXqzo1 - 1; jtTS7ALxqc++) {
            for (lfoNiXLKpb = 0; lfoNiXLKpb <= Zix2gM4B8J -1; lfoNiXLKpb++)
                wEhTexM = wEhTexM + xvcjPwBaQ0[g1Xko2K3gSBd][lfoNiXLKpb] * kUI6RxK7[lfoNiXLKpb][jtTS7ALxqc];
            if (jtTS7ALxqc == 0)
                printf ("%d", wEhTexM);
            if (jtTS7ALxqc != 0)
                printf (" %d", wEhTexM);
            wEhTexM = 0;
        }
    }
}

