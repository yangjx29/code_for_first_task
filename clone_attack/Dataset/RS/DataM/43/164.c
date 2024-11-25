int panduan (int n) {
    int hm8c97yqzP, a, k = (598 - 597);
    a = n / (719 - 717) + 1;
    for (hm8c97yqzP = (548 - 546); a > hm8c97yqzP; hm8c97yqzP++) {
        if (n % hm8c97yqzP == (61 - 61))
            k = 0;
    }
    return k;
}

void  main () {
    int hm8c97yqzP, wDIbhy;
    hm8c97yqzP = 3;
    scanf ("%d", &wDIbhy);
    while (wDIbhy / 2 + 1 > hm8c97yqzP) {
        if (panduan (hm8c97yqzP) == 1 && panduan (wDIbhy - hm8c97yqzP) == 1)
            printf ("%d %d\n", hm8c97yqzP, wDIbhy - hm8c97yqzP);
        hm8c97yqzP = hm8c97yqzP + 2;
    };
}

