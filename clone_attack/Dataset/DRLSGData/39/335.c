struct   student {
    char ihxXwV5K [30];
    int hJND3RtYBiLn;
    int xlzO2EnAx3;
    char zCxiAL;
    char S8f5SiOAX;
    int hEGTp8LIl0X1;
    int mJnUN6t37qM;
};
int main () {
    int cqd7wuXJipC;
    int kXsA2a;
    struct   student max;
    struct   student lWS9IHxpQJy [102] = {0};
    int BohxAUP5;
    scanf ("%d", &BohxAUP5);
    kXsA2a = 0;
    for (cqd7wuXJipC = 0; BohxAUP5 > cqd7wuXJipC; cqd7wuXJipC++) {
        scanf ("%s%d%d %c %c%d", lWS9IHxpQJy[cqd7wuXJipC].ihxXwV5K, &lWS9IHxpQJy[cqd7wuXJipC].hJND3RtYBiLn, &lWS9IHxpQJy[cqd7wuXJipC].xlzO2EnAx3, &lWS9IHxpQJy[cqd7wuXJipC].zCxiAL, &lWS9IHxpQJy[cqd7wuXJipC].S8f5SiOAX, &lWS9IHxpQJy[cqd7wuXJipC].hEGTp8LIl0X1);
    }
    for (cqd7wuXJipC = 0; cqd7wuXJipC < BohxAUP5; cqd7wuXJipC++) {
        if (80 < lWS9IHxpQJy[cqd7wuXJipC].hJND3RtYBiLn && lWS9IHxpQJy[cqd7wuXJipC].hEGTp8LIl0X1 >= 1) {
            lWS9IHxpQJy[cqd7wuXJipC].mJnUN6t37qM += 8000;
        }
        if (lWS9IHxpQJy[cqd7wuXJipC].hJND3RtYBiLn > 85 && lWS9IHxpQJy[cqd7wuXJipC].xlzO2EnAx3 > 80) {
            lWS9IHxpQJy[cqd7wuXJipC].mJnUN6t37qM += 4000;
        }
        if (90 < lWS9IHxpQJy[cqd7wuXJipC].hJND3RtYBiLn) {
            lWS9IHxpQJy[cqd7wuXJipC].mJnUN6t37qM += 2000;
        }
        if (lWS9IHxpQJy[cqd7wuXJipC].hJND3RtYBiLn > 85 && lWS9IHxpQJy[cqd7wuXJipC].S8f5SiOAX == 'Y') {
            lWS9IHxpQJy[cqd7wuXJipC].mJnUN6t37qM += 1000;
        }
        if (lWS9IHxpQJy[cqd7wuXJipC].xlzO2EnAx3 > 80 && lWS9IHxpQJy[cqd7wuXJipC].zCxiAL == 'Y') {
            lWS9IHxpQJy[cqd7wuXJipC].mJnUN6t37qM += 850;
        }
    }
    max.mJnUN6t37qM = 0;
    for (cqd7wuXJipC = 0; cqd7wuXJipC < BohxAUP5; cqd7wuXJipC++) {
        kXsA2a += lWS9IHxpQJy[cqd7wuXJipC].mJnUN6t37qM;
        if (lWS9IHxpQJy[cqd7wuXJipC].mJnUN6t37qM > max.mJnUN6t37qM) {
            max = lWS9IHxpQJy[cqd7wuXJipC];
        }
    }
    printf ("%s\n%d\n%d\n", max.ihxXwV5K, max.mJnUN6t37qM, kXsA2a);
    return 0;
}

