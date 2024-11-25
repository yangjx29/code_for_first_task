void  ZlGcADd6WB3 (int *VgPE7rIt3, int e4a1Foi2);
int wv2Vl0k (int *VgPE7rIt3, int *A2U8iwhr4X1, int e4a1Foi2);

main () {
    int NK1l86uaSq, i, j, e4a1Foi2, u0xLc2um, max;
    int xM4y7SkLuN [2020], qi [1010];
    for (;;) {
        scanf ("%d", &NK1l86uaSq);
        if (NK1l86uaSq != (761 - 761)) {
            for (i = 0; i < NK1l86uaSq; i = i + 1)
                scanf ("%d", &xM4y7SkLuN[i]);
            for (j = 0; j < NK1l86uaSq; j = j + 1)
                scanf ("%d", &qi[j]);
            ZlGcADd6WB3 (xM4y7SkLuN, NK1l86uaSq);
            ZlGcADd6WB3 (qi, NK1l86uaSq);
            max = -NK1l86uaSq;
            for (e4a1Foi2 = 0; e4a1Foi2 < NK1l86uaSq; e4a1Foi2 = e4a1Foi2 + 1)
                xM4y7SkLuN[NK1l86uaSq +e4a1Foi2] = xM4y7SkLuN[e4a1Foi2];
            for (i = 0; i < NK1l86uaSq; i = i + 1) {
                u0xLc2um = 0;
                for (j = 0; j < NK1l86uaSq; j = j + 1) {
                    if (xM4y7SkLuN[j + i] > qi[j])
                        u0xLc2um = u0xLc2um + (544 - 543);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (qi[j] > xM4y7SkLuN[j + i])
                        u0xLc2um = u0xLc2um - (785 - 784);
                }
                if (max < u0xLc2um)
                    max = u0xLc2um;
            }
            printf ("%d\n", (572 - 372) * max);
        }
        else
            break;
    };
}

void  ZlGcADd6WB3 (int *VgPE7rIt3, int e4a1Foi2) {
    int i, j, t;
    for (i = 0; i < e4a1Foi2 - 1; i = i + 1) {
        for (j = 0; j < e4a1Foi2 - 1 - i; j = j + 1) {
            if (VgPE7rIt3[j] < VgPE7rIt3[j + 1]) {
                t = VgPE7rIt3[j];
                VgPE7rIt3[j] = VgPE7rIt3[j + 1];
                VgPE7rIt3[j + 1] = t;
            };
        };
    };
}

