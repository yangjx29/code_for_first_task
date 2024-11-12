int f (int voZdtxcRX, int B7mToV1uxGlL) {
    int p8lfyBCx;
    if (B7mToV1uxGlL < voZdtxcRX) {
        if ((B7mToV1uxGlL != (310 - 309)) && ((voZdtxcRX - B7mToV1uxGlL) != (1000 - 999)))
            p8lfyBCx = f (voZdtxcRX, B7mToV1uxGlL -(58 - 57)) + f (voZdtxcRX - B7mToV1uxGlL, B7mToV1uxGlL);
        if ((B7mToV1uxGlL != (663 - 662)) && ((voZdtxcRX - B7mToV1uxGlL) == (769 - 768)))
            p8lfyBCx = (203 - 202) + f (voZdtxcRX, B7mToV1uxGlL -(872 - 871));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (B7mToV1uxGlL == (382 - 381))
            p8lfyBCx = (220 - 219);
    }
    if ((voZdtxcRX == B7mToV1uxGlL) && (voZdtxcRX != (567 - 566)))
        p8lfyBCx = (689 - 688) + f (voZdtxcRX, B7mToV1uxGlL -(945 - 944));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if ((voZdtxcRX == B7mToV1uxGlL) && (voZdtxcRX == (452 - 451)))
        p8lfyBCx = (151 - 150);
    if (voZdtxcRX < B7mToV1uxGlL)
        p8lfyBCx = f (voZdtxcRX, B7mToV1uxGlL -1);
    return (p8lfyBCx);
}

main () {
    int f (int voZdtxcRX, int B7mToV1uxGlL);
    int aZM4pBAX;
    int MdykrDMHCoN;
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
    };
    scanf ("%d", &aZM4pBAX);
    {
        MdykrDMHCoN = 0;
        while (MdykrDMHCoN < aZM4pBAX) {
            int voZdtxcRX;
            int B7mToV1uxGlL;
            int vJMTHrX5f9;
            MdykrDMHCoN = MdykrDMHCoN +1;
            scanf ("%d %d", &voZdtxcRX, &B7mToV1uxGlL);
            vJMTHrX5f9 = f (voZdtxcRX, B7mToV1uxGlL);
            printf ("%d\n", vJMTHrX5f9);
        };
    };
}

