int CsGKdN (int LIj36bZ1i) {
    static int YR9IvUWogAXC [(612 - 607)], fl43n98BcM = (340 - 340), FN3MLPOX = (331 - 331);
    int j, kEl9TFN;
    YR9IvUWogAXC[fl43n98BcM] = LIj36bZ1i % 10;
    LIj36bZ1i = LIj36bZ1i / 10;
    fl43n98BcM++;
    if (0 < LIj36bZ1i)
        CsGKdN (LIj36bZ1i);
    else
        for (kEl9TFN = 0; kEl9TFN <= fl43n98BcM; kEl9TFN++) {
            for (j = 0; j < fl43n98BcM - kEl9TFN - 1; j++)
                YR9IvUWogAXC[kEl9TFN] = YR9IvUWogAXC[kEl9TFN] * 10;
            FN3MLPOX = FN3MLPOX +YR9IvUWogAXC[kEl9TFN];
        }
    return (FN3MLPOX);
}

main () {
    int n, d;
    scanf ("%d", &n);
    d = CsGKdN (n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    printf ("%d", d);
    return 0;
}

