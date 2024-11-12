int main () {
    int vkIWEKTou, BFvxf5WQR1L9, ZWYjzLMubJy = (81 - 81), swrMm5jQI = (57 - 57), pwEtYjWn [50000], SukcAH2eU8, MPtH9da [50000], R9nMUa = 0, Jbm2aK = 10000, bmGhIDd;
    double  jJhDqoSetB6s;
    scanf ("%d", &SukcAH2eU8);
    {
        vkIWEKTou = 0;
        while (SukcAH2eU8 > vkIWEKTou) {
            scanf ("%d ", &pwEtYjWn[vkIWEKTou]);
            scanf ("%d", &MPtH9da[vkIWEKTou]);
            vkIWEKTou = vkIWEKTou + 1;
        }
    }
    {
        vkIWEKTou = 0;
        while (vkIWEKTou < SukcAH2eU8) {
            if (Jbm2aK >= pwEtYjWn[vkIWEKTou])
                Jbm2aK = pwEtYjWn[vkIWEKTou];
            if (R9nMUa <= MPtH9da[vkIWEKTou])
                R9nMUa = MPtH9da[vkIWEKTou];
            vkIWEKTou = vkIWEKTou + 1;
        }
    }
    {
        vkIWEKTou = Jbm2aK;
        while (R9nMUa > vkIWEKTou) {
            {
                BFvxf5WQR1L9 = 0;
                while (SukcAH2eU8 > BFvxf5WQR1L9) {
                    if (pwEtYjWn[BFvxf5WQR1L9] <= vkIWEKTou + 0.5 && vkIWEKTou + 0.5 <= MPtH9da[BFvxf5WQR1L9])
                        break;
                    BFvxf5WQR1L9++;
                }
            }
            if (BFvxf5WQR1L9 == SukcAH2eU8)
                break;
            vkIWEKTou++;
        }
    }
    if (vkIWEKTou == R9nMUa)
        printf ("%d %d", Jbm2aK, R9nMUa);
    else
        printf ("no");
    return 0;
}

