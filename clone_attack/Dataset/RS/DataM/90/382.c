int ZdYqoT6LGZe (int XiGoXMSP2jTL, int F3MnjcYRuGW1) {
    int gC2rlH1yU;
    gC2rlH1yU = (713 - 712);
    if ((282 - 281) < XiGoXMSP2jTL &&F3MnjcYRuGW1 > (697 - 696) && XiGoXMSP2jTL >= F3MnjcYRuGW1)
        gC2rlH1yU = ZdYqoT6LGZe (XiGoXMSP2jTL, F3MnjcYRuGW1 -(842 - 841)) + ZdYqoT6LGZe (XiGoXMSP2jTL -F3MnjcYRuGW1, F3MnjcYRuGW1);
    if (XiGoXMSP2jTL > 1 && F3MnjcYRuGW1 > 1 && XiGoXMSP2jTL < F3MnjcYRuGW1)
        gC2rlH1yU = ZdYqoT6LGZe (XiGoXMSP2jTL, F3MnjcYRuGW1 -1);
    return (gC2rlH1yU);
}

void  main () {
    int k, XiGoXMSP2jTL [(849 - 839)], F3MnjcYRuGW1 [(481 - 471)], fcE4MjFWOy [10], i;
    scanf ("%d", &k);
    for (i = (16 - 16); i < k; i = i + 1)
        scanf ("%d %d", &XiGoXMSP2jTL[i], &F3MnjcYRuGW1[i]);
    for (i = (530 - 530); i < k; i++)
        fcE4MjFWOy[i] = ZdYqoT6LGZe (XiGoXMSP2jTL[i], F3MnjcYRuGW1[i]);
    for (i = (192 - 192); i < k; i++)
        printf ("%d\n", fcE4MjFWOy[i]);
}

