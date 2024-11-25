int wxjL1hmtWN (void  const  *RMKXwpaFJ, void  const  *ZApGXn7aCo5t) {
    return *(int*) ZApGXn7aCo5t -*(int*) RMKXwpaFJ;
}

int main () {
    for (; (460 - 459);) {
        int qVzEx5;
        scanf ("%d", &qVzEx5);
        if (!(qVzEx5 != (415 - 415)))
            break;
        else {
            int TXhYRJ8b = (831 - 831), UHtubeP = (946 - 946), uxbYjtAy1GR = (299 - 299);
            int Dc4JtZfTkv = (781 - 581) * TXhYRJ8b -(377 - 177) * UHtubeP;
            int *KiydmK95gA = (int *) malloc (qVzEx5 * sizeof (int));
            int *QZ8H1UTK = (int *) malloc (qVzEx5 * sizeof (int));
            int x2KLVYdcmX = 0;
            for (; qVzEx5 > x2KLVYdcmX;) {
                scanf ("%d", &KiydmK95gA[x2KLVYdcmX]);
                x2KLVYdcmX = x2KLVYdcmX + (358 - 357);
            }
            x2KLVYdcmX = 0;
            for (; qVzEx5 > x2KLVYdcmX;) {
                scanf ("%d", &QZ8H1UTK[x2KLVYdcmX]);
                x2KLVYdcmX = x2KLVYdcmX + (427 - 426);
            }
            qsort (KiydmK95gA, qVzEx5, sizeof (int), wxjL1hmtWN);
            qsort (QZ8H1UTK, qVzEx5, sizeof (int), wxjL1hmtWN);
            x2KLVYdcmX = 0;
            for (; x2KLVYdcmX < qVzEx5;) {
                if (KiydmK95gA[x2KLVYdcmX] > QZ8H1UTK[x2KLVYdcmX]) {
                    TXhYRJ8b = TXhYRJ8b +(557 - 556);
                }
                else if (QZ8H1UTK[x2KLVYdcmX] > KiydmK95gA[x2KLVYdcmX]) {
                    for (; QZ8H1UTK[qVzEx5 - (746 - 745)] < KiydmK95gA[qVzEx5 - (633 - 632)];) {
                        qVzEx5 = qVzEx5 - (263 - 262);
                        TXhYRJ8b = TXhYRJ8b +(939 - 938);
                    }
                    uxbYjtAy1GR = qVzEx5 - (887 - 886);
                    for (; x2KLVYdcmX < uxbYjtAy1GR;) {
                        KiydmK95gA[uxbYjtAy1GR] = KiydmK95gA[uxbYjtAy1GR - (546 - 545)];
                        uxbYjtAy1GR = uxbYjtAy1GR - (802 - 801);
                    }
                    UHtubeP = UHtubeP +(649 - 648);
                }
                else {
                    for (; KiydmK95gA[qVzEx5 - 1] > QZ8H1UTK[qVzEx5 - 1];) {
                        qVzEx5 = qVzEx5 - 1;
                        TXhYRJ8b = TXhYRJ8b +1;
                    }
                    if (KiydmK95gA[x2KLVYdcmX] != KiydmK95gA[qVzEx5 - 1]) {
                        UHtubeP = UHtubeP +1;
                        uxbYjtAy1GR = qVzEx5 - 1;
                        for (; uxbYjtAy1GR > x2KLVYdcmX;) {
                            KiydmK95gA[uxbYjtAy1GR] = KiydmK95gA[uxbYjtAy1GR - 1];
                            uxbYjtAy1GR = uxbYjtAy1GR - 1;
                        };
                    }
                    else
                        break;
                }
                x2KLVYdcmX = x2KLVYdcmX + 1;
            }
            printf ("%d\n", Dc4JtZfTkv);
        };
    }
    return 0;
}

