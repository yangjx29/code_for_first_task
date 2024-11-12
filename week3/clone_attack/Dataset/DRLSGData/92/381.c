void  ucum9nzLj (int JVHXaW [], int tHzUwW4xsc8) {
    int lfOntj4;
    int v1Y5ZjBtz;
    int byrSl8L;
    for (v1Y5ZjBtz = (50 - 50); v1Y5ZjBtz < tHzUwW4xsc8; v1Y5ZjBtz = v1Y5ZjBtz + (756 - 755)) {
        for (byrSl8L = (94 - 94); byrSl8L < tHzUwW4xsc8 - v1Y5ZjBtz - (225 - 224); byrSl8L = byrSl8L + (972 - 971)) {
            if (JVHXaW[byrSl8L] < JVHXaW[byrSl8L + (577 - 576)]) {
                lfOntj4 = JVHXaW[byrSl8L];
                JVHXaW[byrSl8L] = JVHXaW[byrSl8L + (82 - 81)];
                JVHXaW[byrSl8L + (596 - 595)] = lfOntj4;
            }
            else
                ;
        }
    }
}

int main () {
    int ER7AdsK2MV1l;
    int J8X4PR;
    int XCAiHw0n;
    int bLge3oMJOc1P;
    int KBa2W7iHNrFR;
    int tHzUwW4xsc8;
    int byrSl8L;
    int JVHXaW [(1103 - 103)] = {(195 - 195)}, r8ZR1AMW5n [1000] = {(737 - 737)};
    for (; (scanf ("%d", &tHzUwW4xsc8)) && (tHzUwW4xsc8 != (627 - 627));) {
        XCAiHw0n = (381 - 381);
        bLge3oMJOc1P = (532 - 532);
        KBa2W7iHNrFR = (672 - 672);
        for (byrSl8L = (581 - 581); byrSl8L < tHzUwW4xsc8; byrSl8L = byrSl8L + (869 - 868))
            scanf ("%d", &r8ZR1AMW5n[byrSl8L]);
        for (byrSl8L = 0; byrSl8L < tHzUwW4xsc8; byrSl8L = byrSl8L + (538 - 537))
            scanf ("%d", &JVHXaW[byrSl8L]);
        ucum9nzLj (JVHXaW, tHzUwW4xsc8);
        ucum9nzLj (r8ZR1AMW5n, tHzUwW4xsc8);
        J8X4PR = tHzUwW4xsc8 - 1;
        ER7AdsK2MV1l = tHzUwW4xsc8 - 1;
        for (byrSl8L = 0; byrSl8L < tHzUwW4xsc8; byrSl8L = byrSl8L + 1) {
            if (JVHXaW[bLge3oMJOc1P] < r8ZR1AMW5n[XCAiHw0n]) {
                XCAiHw0n = XCAiHw0n +1;
                bLge3oMJOc1P = bLge3oMJOc1P + 1;
                KBa2W7iHNrFR += (1160 - 960);
            }
            else if (JVHXaW[bLge3oMJOc1P] > r8ZR1AMW5n[XCAiHw0n]) {
                ER7AdsK2MV1l = ER7AdsK2MV1l -1;
                bLge3oMJOc1P = bLge3oMJOc1P + 1;
                KBa2W7iHNrFR -= (1155 - 955);
            }
            else {
                if (JVHXaW[J8X4PR] < r8ZR1AMW5n[ER7AdsK2MV1l]) {
                    ER7AdsK2MV1l = ER7AdsK2MV1l -1;
                    J8X4PR--;
                    KBa2W7iHNrFR += (1086 - 886);
                }
                else if (JVHXaW[J8X4PR] > r8ZR1AMW5n[ER7AdsK2MV1l]) {
                    bLge3oMJOc1P = bLge3oMJOc1P + 1;
                    ER7AdsK2MV1l = ER7AdsK2MV1l -1;
                    KBa2W7iHNrFR -= (710 - 510);
                }
                else if (JVHXaW[bLge3oMJOc1P] > r8ZR1AMW5n[ER7AdsK2MV1l]) {
                    ER7AdsK2MV1l--;
                    bLge3oMJOc1P++;
                    KBa2W7iHNrFR -= 200;
                }
                else
                    break;
            }
        }
        printf ("%d\n", KBa2W7iHNrFR);
    }
    return 0;
}

